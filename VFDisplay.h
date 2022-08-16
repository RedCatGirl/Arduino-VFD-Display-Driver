#include <SPI.h>
#include "font5x7.h"
#include "x_font.h"
 
/**
 * Класс для работы с матричным люминсцентным дисплеем
 */
class VFDisplay
{
  private:
    const byte SET_DIMMING_DATA      = 0xE4;
    const byte SET_DISPLAT_LIGHT_ON  = 0xE8;
    const byte SET_STAND_BY_MODE     = 0xEC;
    const byte SET_DISPLAY_TIMING    = 0xE0;
    const byte SET_DCRAM_DATA_WRITE  = 0x20;
  
    const unsigned int DisplayNumber  = 6;
    const unsigned int LeftScrollingDelayTime = 200;
    
    const unsigned int VSPI_MISO   = 50;       // not connected
    const unsigned int VSPI_MOSI   = 51;       // din
    const unsigned int VSPI_SCLK   = 52;       // clk
    const unsigned int VSPI_CS     = 53;       // cs
    const unsigned int RESET       = 4;        // rest
    
    static const int spiClk = 16000000;  // 16MHZ

    char displayBuffer[30] = {};

    
    SPIClass* vspi;


    /**
     * Init display
     */
    void init() {
      vspi->beginTransaction(SPISettings(spiClk, LSBFIRST, SPI_MODE0));
      digitalWrite(VSPI_CS, LOW);
      vspi->transfer(SET_DISPLAY_TIMING);             //设置数字的第一个字节地址  // Установить адрес первого байта числа
      vspi->transfer(0x05);                           //6数字等于值5(十六进制0x05)  // 6 цифр равно значению 5 (шестнадцатеричное 0x05)
      digitalWrite(VSPI_CS, HIGH);
      vspi->endTransaction();
     
      brightness(240);              //将亮度设置为初始值  // Установите яркость на начальное значение
      show();                       //激活屏幕  // активировать экран
    
      for (int8_t i = 0; i < DisplayNumber; i++) {
        writeASCii(i, 0b00011111);
        delay(30);
      }
      delay(100);
      clearScreen();
      mode(true);
    }

    /**
     * Возвращает последоавательность массива пикселей сивола 5x7
     */
    char* getCharFromFont5x7(char chr) {
      static char symbolMatrix[5];
      int arrayIndex = int(chr) - 32;      
      int start = arrayIndex*5;      
      for(int i=0; i<5; i++) {
       // symbolMatrix[i] = pgm_read_byte( System5x7[symbol*5+i] );
          symbolMatrix[i] = System5x7[start+i];
      }
      return symbolMatrix;
    }
  
  public:

    /**
     * Construcor
     */
    VFDisplay() {
      vspi = new SPIClass();
      vspi->begin();

      pinMode(VSPI_CS, OUTPUT); //VSPI CS
      pinMode(RESET, OUTPUT);    //8bit硬重启 // 8-битная жесткая перезагрузка
      digitalWrite(RESET, LOW);
      delay(50);
      digitalWrite(RESET, HIGH);
    
      delay(100);
    
      init();
      brightness(127);
      mode(false);
    }

    void brightness(unsigned int level) {
      vspi->beginTransaction(SPISettings(spiClk, LSBFIRST, SPI_MODE0));
      digitalWrite(VSPI_CS, LOW);
      vspi->transfer(SET_DIMMING_DATA);            // Адрес первого байта для установки DisplayNumber
      vspi->transfer(level);           // 0-255
      digitalWrite(VSPI_CS, HIGH);
      vspi->endTransaction();
    }
    
    
    void clearScreen(void) {
      vspi->beginTransaction(SPISettings(spiClk, LSBFIRST, SPI_MODE0));
      digitalWrite(VSPI_CS, LOW); 
      for (int i = 0; i <= DisplayNumber; i++) {
        vspi->transfer(0x20);       //0x01 0x20
      }
      vspi->transfer(SET_DISPLAT_LIGHT_ON);  // 刷新 //обновить
      digitalWrite(VSPI_CS, HIGH);
      vspi->endTransaction();
    }
    
    
    void show(void) {
      vspi->beginTransaction(SPISettings(spiClk, LSBFIRST, SPI_MODE0));
      digitalWrite(VSPI_CS, LOW);
      vspi->transfer(SET_DISPLAT_LIGHT_ON);   // 刷新  // обновить
      digitalWrite(VSPI_CS, HIGH);
      vspi->endTransaction();
    }
    
    
    void mode(bool on) {
      vspi->beginTransaction(SPISettings(spiClk, LSBFIRST, SPI_MODE0));
      digitalWrite(VSPI_CS, LOW);
      if (on) {
        vspi->transfer(0xED);     // Режим ожидания
      }
      else {
        vspi->transfer(SET_STAND_BY_MODE);     // Режим работы
      }
      digitalWrite(VSPI_CS, HIGH);
      vspi->endTransaction();
    }
    
    
    void writeASCii(int8_t x, unsigned char chr) {
      vspi->beginTransaction(SPISettings(spiClk, LSBFIRST, SPI_MODE0));
      digitalWrite(VSPI_CS, LOW);
      vspi->transfer(SET_DCRAM_DATA_WRITE + x);
      vspi->transfer(chr);
      digitalWrite(VSPI_CS, HIGH);
      vspi->endTransaction();
    }
    
    
    /**
     * x - номер сигменты вывода 0-5
     * chr - последовательность новго символа 7х5b (8x5b)
     */
    void writeROM(int8_t x, char chr[] ) {
      vspi->beginTransaction(SPISettings(spiClk, LSBFIRST, SPI_MODE0));
      digitalWrite(VSPI_CS, LOW);
      vspi->transfer(0x40 + x);
    
      for(int8_t i=0; i<5; i++) {
        vspi->transfer(chr[i]);
      }
      
      digitalWrite(VSPI_CS, HIGH);
      vspi->endTransaction();
      writeASCii(x, x);
    }
    
    void writeROM0(int8_t x, char chr[] ) {
      writeROM(x, chr);
    }
    void writeROM1(int8_t x, char chr[] ) {
      writeROM(x, chr);
    }
    void writeROM2(int8_t x, char chr[] ) {
      writeROM(x, chr);
    }
    void writeROM3(int8_t x, char chr[] ) {
      writeROM(x, chr);
    }
    void writeROM4(int8_t x, char chr[] ) {
      writeROM(x, chr);
    }
    void writeROM5(int8_t x, char chr[] ) {
      writeROM(x, chr);
    }
    void writeROM6(int8_t x, char chr[] ) {
      writeROM(x, chr);
    }
    void writeROM7(int8_t x, char chr[] ) {
      writeROM(x, chr);
    }
    
    
    /**
     * Запись всего экрана дисплея за один раз
     * arr[] - массив 7х30bit 
     */
    void writeDisplayROM(char arr[] ) {
      vspi->beginTransaction(SPISettings(spiClk, LSBFIRST, SPI_MODE0));
      digitalWrite(VSPI_CS, LOW);
    
      vspi->transfer(0x40);
    
      int i=0;
      do{
        vspi->transfer( arr[i++] );
      }while(i<DisplayNumber*5);
      
      digitalWrite(VSPI_CS, HIGH);
      vspi->endTransaction();
    
      for(int8_t indicator=0; indicator<DisplayNumber; indicator++) {
        writeASCii(indicator, indicator);
      }
    }
    
    
    void writeStr(int8_t x, String str) {
    //  str = translateSpecialChars(str);
      if (x > 0) {
        for (int i = 0; i < x; i++) {
          str = " " + str;             // 填充空白
        }
      }
      unsigned int L = str.length();   //发送了多少字符?
      char Transient[L];                     // 定义字符的工作数组
      str.toCharArray(Transient , L + 1);     // 将字符串移动到字符数组中
    
      vspi->beginTransaction(SPISettings(spiClk, LSBFIRST, SPI_MODE0));
      digitalWrite(VSPI_CS, LOW);
      vspi->transfer(SET_DCRAM_DATA_WRITE);                // 基址寄存器DCRAM 0H  // Регистр базового адреса DCRAM 0H
    
      if (L > DisplayNumber) {
        for (int i = 0; i < DisplayNumber - x; i++) {
          vspi->transfer(Transient[i]);         // 将第一批填充到可见字符的末尾  // Дополнить первую партию до конца видимых символов
        }
        digitalWrite(VSPI_CS, HIGH);
        for (int i = 0; i < L - DisplayNumber; i++) {
          digitalWrite(VSPI_CS, LOW);
          vspi->transfer(SET_DCRAM_DATA_WRITE);                // 基址寄存器DCRAM 0H
          for (int j = 0; j < DisplayNumber; j++) {
            vspi->transfer(Transient[j + i + 1]);   // 向左滚动 // прокрутить влево
          }
          digitalWrite(VSPI_CS, HIGH);
          delay(LeftScrollingDelayTime);                 // 控制滚动延迟时间
        }
      }
      else {
        for (int i = 0; i < L; i++) {
          vspi->transfer(Transient[i]);
        }
        for (int i = 0; i < DisplayNumber - L - x; i++) {
          vspi->transfer(0x20);            // 用空格填充结尾 // дополнить конец пробелами
        }
      }
      digitalWrite(VSPI_CS, HIGH);
      vspi->endTransaction();
    }


    void writeBuffer() {
      writeDisplayROM(displayBuffer);
    }


    void setBuffer(char chr[]) {
      for( int i=0; i<sizeof(displayBuffer); i++) {
        displayBuffer[i] = chr[i];
      }
    }


    char getBuffer() {
      return displayBuffer;
    }


    void clearBuffer() {
      for( int i=0; i<sizeof(displayBuffer); i++) displayBuffer[i] = 0;
    }

    void shiftLeftBuffer(int8_t count=1) {
      int length = sizeof(displayBuffer);
      for(int i=0; i<length; i++)
        displayBuffer[i] = (i < length-1) ? displayBuffer[i+1] : 0;
    }
    
    void shiftRightBuffer(int8_t count=1) {
      int length = sizeof(displayBuffer);
      for(int i=length; i>=0; i--) {      
        displayBuffer[i+1] = displayBuffer[i];
        if (i==0) displayBuffer[i] = 0;
      }
    }
    
    void shiftTopBuffer(int8_t count=1) {
      for(int i=0; i<sizeof(displayBuffer); i++)
        displayBuffer[i] = displayBuffer[i] >> count;
    }
    
    void shiftBottomBuffer(int8_t count=1) {
      for(int i=0; i<sizeof(displayBuffer); i++)
        displayBuffer[i] = displayBuffer[i] << count;
    }

    /**
     * Устанавливаем точку в пределах координатов 0,0:29,6
     */
    void setPixel(int8_t x, int8_t y) {    
      if (x>=0 && y>=0)
        bitSet(displayBuffer[x], y);
    }

    /**
     * Рисуем линию
     */
    void drawLine(int8_t x1, int8_t y1, int8_t x2, int8_t y2) {
      const int8_t deltaX = abs(x2 - x1);
      const int8_t deltaY = abs(y2 - y1);
      const int8_t signX = x1 < x2 ? 1 : -1;
      const int8_t signY = y1 < y2 ? 1 : -1;
      int error = deltaX - deltaY;
      
      setPixel(x2, y2);
      while(x1 != x2 || y1 != y2) 
      {
        setPixel(x1, y1);
        int error2 = error * 2;
        if(error2 > -deltaY)
        {
          error -= deltaY;
          x1 += signX;
        }
        if(error2 < deltaX) 
        {
          error += deltaX;
          y1 += signY;
        }
       }

       writeBuffer();
    }

    /**
     * рисуем окружность
     */
    void drawCircle(int8_t x0, int8_t y0, int radius) {
      int8_t x = 0;
      int8_t y = radius;
      int8_t delta = 1 - 2 * radius;
      int8_t error = 0;
      while(y >= 0) {
        setPixel(x0 + x, y0 + y);
        setPixel(x0 + x, y0 - y);
        setPixel(x0 - x, y0 + y);
        setPixel(x0 - x, y0 - y);
        error = 2 * (delta + y) - 1;
        if(delta < 0 && error <= 0) {
          ++x;
          delta += 2 * x + 1;
          continue;
        }
        error = 2 * (delta - x) - 1;
        if(delta > 0 && error > 0) {
          --y;
          delta += 1 - 2 * y;
          continue;
        }
        ++x;
        delta += 2 * (x - y);
        --y;
      }
      
      writeBuffer();
    }

    /**
     * chr - ASCII символ
     * x - позиция на дисплее 0-5
     */
    void drawChar(char chr, int x) {
      char *arr = getCharFromFont5x7(chr);
      for(int i=0; i<5; i++) {
        displayBuffer[x*5 + i] = arr[i];
      }
      writeBuffer();
    }

    /**
     * Вывод на дисплей символа из x_font-файла
     * chr - ASCII символ
     * x - позиция на дисплее 0-5
     */
    void drawXChar(char chr, int x) {
      char *arr = get_Xsymbol(chr);
      for(int i=0; i<5; i++) {
        displayBuffer[x*5 + i] = arr[i];
      }
    }


    /**
     * Вывод текста
     */
    void drawString(String str, int x=0) {
      int len = min(str.length(), DisplayNumber);
      
      char string[len] = {};   
      str.toCharArray(string, len+1);  

      for(int i=0; i<len; i++) {
          drawChar(string[i], x+i);
      }
    }

    /**
     * Вывод текста
     */
    void drawStringXfont(String str, int x=0) {
      int len = min(str.length(), DisplayNumber);
      
      char string[len] = {};   
      str.toCharArray(string, len+1);  

      for(int i=0; i<len; i++) {
          drawXChar(string[i], x+i);
      }
      writeBuffer();
    }


    /**
     * Вывод текста и скролинг его если он длиннее 6 символов
     */
    void drawStringScroling(String str, int x=0, int sleep=300) {
      int len = max(str.length(), DisplayNumber);
      
      char string[len] = {};
      for (int i=0; i<len; i++) {
          string[i] = ' ';
      }
    
      str.toCharArray(string, len+1);  

      if (len > DisplayNumber) {
          for (int startPos=0; startPos<(len-DisplayNumber+1); startPos++) {
              char* slice = &string[startPos];
              for(int i=0; i<DisplayNumber; i++) {
                  drawChar(slice[i], i);
              }
              delay(sleep);
          }
      } else {
          for(int i=0; i<DisplayNumber; i++) {
              drawChar(string[i], x+i);
          }
      }
    }
};
