/////////////////////////////////////////////
//////    Файл с функциямо анимаций    //////
/////////////////////////////////////////////


using namespace std;

struct myArray { 
    char val[5];
};

struct myArray2 { 
    char values[5];
    char operator [](int i) const {
        return values[i];
    }
};

struct myArray a{{1, 2, 3, 4, 5}};


/**
 * 
 */
void animationLoadProgress(VFDisplay* VFD, unsigned int sleep)
{
  for (int8_t j = 0; j < 6; j++) {
    for (int8_t i = 0; i < 6; i++) {
      VFD->writeASCii(j, 0b00010000 + i);
      delay(sleep);
    }
  }
}

/**
 * 
 */
void animationShum(VFDisplay* VFD, unsigned int count)
{
  for(int8_t j=0; j<count; j++) {
    for(int8_t i=0; i<6; i++) {
      char shum[] = {random(128), random(128), random(128), random(128), random(128)};
      VFD->writeROM(i, shum);
    }
    delay(100);
  }
}

/**
 * Анимация бегущей матрицы
 */
void animationMatrix(VFDisplay* VFD)
{
  unsigned int matrix[30] = {};
  for(int c=0; c<200; c++) {
    int8_t t = random(0, 4);
    for(int e=0; e<t; e++) {
      int8_t x = random(0, 30);
      if (matrix[x] == 0) {
        matrix[x] = random(1, 4);
      }
    }
    
    for(int i=0; i<30; i++ ) {
      if (matrix[i] > 0) {
        VFD->setPixel(i, 0);
        matrix[i]--;
      }
    }
    
    VFD->writeBuffer();
    VFD->shiftBottomBuffer(1);
    delay(60);
  }

  VFD->clearBuffer();
}

/**
 * 
 */
void animationDrawLine(VFDisplay* VFD, unsigned int sleep)
{
    for(int x=0; x<2; x++) {
    for(int i=0; i<6; i++) {
      VFD->clearBuffer();
      VFD->drawLine(0, i, 29, 6-i);
      delay(sleep);
    }
  
    for(int i=0; i<29; i++) {
      VFD->clearBuffer();
      VFD->drawLine(i, 6, 29-i, 0);
      delay(sleep);
    }
  }
}

/**
 * 
 */
void animationScreenOn(VFDisplay* VFD)
{ 
  char dot1[] = {0, 0, B0001000, 0, 0};
  VFD->writeROM(2, dot1);
  delay(50);

  char dot2[] = {0, 0, B0011100, 0, 0};
  VFD->writeROM(2, dot2);
  delay(50);
  char dot3[] = {0, B0001000, B0011100, B0001000, 0};
  VFD->writeROM(2, dot3);
  delay(50);
  char dot3_1[] = {B0001000, B0001000, B0011100, B0001000, B0001000};
  VFD->writeROM(2, dot3_1);
  delay(50);


  char leftLine1[] = {0, 0, 0, 0, B0001000}; VFD->writeROM(1, leftLine1);
  char rightLine1[] = {B0001000, 0, 0, 0, 0}; VFD->writeROM(3, rightLine1);
  delay(20);
  char leftLine2[] = {0, 0, 0, B0001000, B0001000}; VFD->writeROM(1, leftLine2);
  char rightLine2[] = {B0001000, B0001000, 0, 0, 0}; VFD->writeROM(3, rightLine2);
  delay(20);
  char leftLine3[] = {0, 0, B0001000, B0001000, B0001000}; VFD->writeROM(1, leftLine3);
  char rightLine3[] = {B0001000, B0001000, B0001000, 0, 0}; VFD->writeROM(3, rightLine3);
  delay(20);
  char leftLine4[] = {0, B0001000, B0001000, B0001000, B0001000}; VFD->writeROM(1, leftLine4);
  char rightLine4[] = {B0001000, B0001000, B0001000, B0001000, 0}; VFD->writeROM(3, rightLine4);
  delay(20);
  char leftLine5[] = {B0001000, B0001000, B0001000, B0001000, B0001000}; VFD->writeROM(1, leftLine5);
  char rightLine5[] = {B0001000, B0001000, B0001000, B0001000, B0001000}; VFD->writeROM(3, rightLine5);
  delay(20);

  char leftLine6[] = {0, 0, 0, 0, B001000}; VFD->writeROM(0, leftLine6);
  char rightLine6[] = {B0001000, 0, 0, 0, 0}; VFD->writeROM(4, rightLine6);
  delay(20);
  char leftLine7[] = {0, 0, 0, B0001000, B0001000}; VFD->writeROM(0, leftLine7);
  char rightLine7[] = {B0001000, B0001000, 0, 0, 0}; VFD->writeROM(4, rightLine7);
  delay(20);
  char leftLine8[] = {0, 0, B001000, B0001000, B0001000}; VFD->writeROM(0, leftLine8);
  char rightLine8[] = {B0001000, B0001000, B0001000, 0, 0}; VFD->writeROM(4, rightLine8);
  delay(20);
  char leftLine9[] = {0, B0001000, B0001000, B0001000, B0001000}; VFD->writeROM(0, leftLine9);
  char rightLine9[] = {B0001000, B0001000, B0001000, B0001000, 0}; VFD->writeROM(4, rightLine9);
  delay(20);
  char leftLine10[] = {B0001000, B0001000, B0001000, B0001000, B0001000}; VFD->writeROM(0, leftLine10);
  char rightLine10[] = {B0001000, B0001000, B0001000, B0001000, B0001000}; VFD->writeROM(4, rightLine10);
  delay(20);

  char rightLine11[] = {B0001000, 0, 0, 0, 0}; VFD->writeROM(5, rightLine11);
  delay(20);
  char rightLine12[] = {B0001000, B0001000, 0, 0, 0}; VFD->writeROM(5, rightLine12);
  delay(20);
  char rightLine13[] = {B0001000, B0001000, B0001000, 0, 0}; VFD->writeROM(5, rightLine13);
  delay(20);
  char rightLine14[] = {B0001000, B0001000, B0001000, B0001000, 0}; VFD->writeROM(5, rightLine14);
  delay(20);
  char rightLine15[] = {B0001000, B0001000, B0001000, B0001000, B0001000}; VFD->writeROM(5, rightLine15);
  delay(20);


  char dot4[] = {B0001000, B0001000, B0011100, B0001000, B0001000}; VFD->writeROM(2, dot4);
  delay(20);
  char dot5[] = {B0001000, B0011100, B0011100, B0011100, B0001000}; VFD->writeROM(2, dot5);
  delay(20);
  char dot6[] = {B0011100, B0011100, B0010100, B0011100,B0011100}; VFD->writeROM(2, dot6);
  delay(20);


  char leftLine16[] = {B0001000, B0001000, B0001000, B0001000, B0011100}; VFD->writeROM(1, leftLine16);
  char rightLine16[] = {B0011100, B0001000, B0001000, B0001000, B0001000}; VFD->writeROM(3, rightLine16);
  delay(20);
  char leftLine17[] = {B0001000, B0001000, B0001000, B0011100, B0011100}; VFD->writeROM(1, leftLine17);
  char rightLine17[] = {B0011100, B0001000, B0001000, B0001000, B0001000}; VFD->writeROM(3, rightLine17);
  char dot7[] = {B0011100, B0010100, B0010100, B0010100,B0011100}; VFD->writeROM(2, dot7);
  delay(20);
  char leftLine18[] = {B0001000, B0001000, B0011100, B0011100, B0011100}; VFD->writeROM(1, leftLine18);
  char rightLine18[] = {B0011100, B011100, B011100, B0001000, B0001000}; VFD->writeROM(3, rightLine18);
  char dot8[] = {B0010100, B0010100, B0010100, B0010100,B0010100}; VFD->writeROM(2, dot8);
  delay(20);
  char leftLine19[] = {B0001000, B0011100, B0011100, B0011100, B0011100}; VFD->writeROM(1, leftLine19);
  char rightLine19[] = {B0011100, B0011100, B0011100, B0011100, B0001000}; VFD->writeROM(3, rightLine19);
  char leftLine20[] = {B0001000, B0011100, B0011100, B0011100, B0010100}; VFD->writeROM(1, leftLine20);
  char rightLine20[] = {B0010100, B0011100, B0011100, B0011100, B0001000}; VFD->writeROM(3, rightLine20);
  delay(20);
  char leftLine21[] = {B0011100, B0011100, B0011100, B0011100, B0011100}; VFD->writeROM(1, leftLine21);
  char rightLine21[] = {B0011100, B0011100, B0011100, B0011100, B0011100}; VFD->writeROM(3, rightLine21);
  char leftLine22[] = {B0011100, B0011100, B0011100, B0010100, B0010100}; VFD->writeROM(1, leftLine22);
  char rightLine22[] = {B0010100, B0010100, B0011100, B0011100, B0011100}; VFD->writeROM(3, rightLine22);
  delay(20);


  char leftLine23[] = {B0001000, B0001000, B0001000, B0001000, B0011100}; VFD->writeROM(0, leftLine23);
  char rightLine23[] = {B0011100, B0001000, B0001000, B0001000, B0001000}; VFD->writeROM(4, rightLine23);
  char leftLine33[] = {B0011100, B0011100, B0010100, B0010100, B0010100}; VFD->writeROM(1, leftLine33);
  char rightLine33[] = {B0010100, B0010100, B0010100, B0011100, B0011100}; VFD->writeROM(3, rightLine33);
  delay(20);
  char leftLine24[] = {B0001000, B0001000, B0001000, B0011100, B0011100}; VFD->writeROM(0, leftLine24);
  char rightLine24[] = {B0011100, B011100, B0001000, B0001000, B0001000}; VFD->writeROM(4, rightLine24);
  char leftLine34[] = {B0011100, B0010100, B0010100, B0010100, B0010100}; VFD->writeROM(1, leftLine34);
  char rightLine34[] = {B0010100, B0010100, B0010100, B0010100, B0011100}; VFD->writeROM(3, rightLine34);
  delay(20);
  char leftLine25[] = {B0001000, B0001000, B0011100, B0011100, B0001000}; VFD->writeROM(0, leftLine25);
  char rightLine25[] = {B0011100, B0011100, B0011100, B0001000, B0001000}; VFD->writeROM(4, rightLine25);
  char leftLine35[] = {B0010100, B0010100, B0010100, B0010100, B0010100}; VFD->writeROM(1, leftLine35);
  char rightLine35[] = {B0010100, B0010100, B0010100, B0010100, B0010100}; VFD->writeROM(3, rightLine35);
  delay(20);
  char leftLine26[] = {B0001000, B0011100, B0011100, B0011100, B0011100}; VFD->writeROM(0, leftLine26);
  char rightLine26[] = {B0011100, B0011100, B0011100, B0011100, B0001000}; VFD->writeROM(4, rightLine26);
  char leftLine36[] = {B0011100, B0011100, B0011100, B0011100, B0010100}; VFD->writeROM(0, leftLine36);
  char rightLine36[] = {B0010100, B0011100, B0011100, B0011100, B0011100}; VFD->writeROM(4, rightLine36);
  delay(20);
  char leftLine27[] = {B0011100, B0011100, B0011100, B0011100, B0011100}; VFD->writeROM(0, leftLine27);
  char rightLine27[] = {B0011100, B0011100, B0011100, B0011100, B0011100}; VFD->writeROM(4, rightLine27);
  char leftLine37[] = {B0011100, B0011100, B0011100, B0010100, B0010100}; VFD->writeROM(0, leftLine37);
  char rightLine37[] = {B0010100, B0010100, B0011100, B0011100, B0011100}; VFD->writeROM(4, rightLine37);
  delay(20);


  char rightLine28[] = {B0011100, B0001000, B0001000, B0001000, B0001000}; VFD->writeROM(5, rightLine28);
  char leftLine40[] = {B0011100, B0011100, B0011100, B0010100, B0010100}; VFD->writeROM(0, leftLine40);
  char rightLine40[] = {B0010100, B0010100, B0011100, B0011100, B0011100}; VFD->writeROM(4, rightLine40);
  delay(20);
  char rightLine29[] = {B0011100, B0011100, B0001000, B0001000, B0001000}; VFD->writeROM(5, rightLine29);
  char leftLine41[] = {B0011100, B0011100, B0010100, B0010100, B0010100}; VFD->writeROM(0, leftLine41);
  char rightLine41[] = {B0010100, B0010100, B0010100, B0011100, B0011100}; VFD->writeROM(4, rightLine41);
  delay(20);
  char rightLine30[] = {B0001000, B0011100, B0011100, B0001000, B0001000}; VFD->writeROM(5, rightLine30);
  char leftLine42[] = {B0011100, B0010100, B0010100, B0010100, B0010100}; VFD->writeROM(0, leftLine42);
  char rightLine42[] = {B0010100, B0010100, B0010100, B0010100, B0011100}; VFD->writeROM(4, rightLine42);
  delay(20);
  char rightLine31[] = {B0011100, B0011100, B0011100, B0001000, B0001000}; VFD->writeROM(5, rightLine31);
  char leftLine43[] = {B0010100, B0010100, B0010100, B0010100, B0010100}; VFD->writeROM(0, leftLine43);
  char rightLine43[] = {B0010100, B0010100, B0010100, B0010100, B0010100}; VFD->writeROM(4, rightLine43);
  delay(20);
  char rightLine44[] = {B0011100, B0011100, B0011100, B0011100, B0001000}; VFD->writeROM(5, rightLine44);
  char rightLine46[] = {B0010100, B0011100, B0011100, B0011100, B0011100}; VFD->writeROM(5, rightLine46);
  delay(20);
  char rightLine45[] = {B0011100, B0011100, B0011100, B0011100, B0011100}; VFD->writeROM(5, rightLine45);
  delay(20);
  char rightLine47[] = {B0010100, B0010100, B0011100, B0011100, B0011100}; VFD->writeROM(5, rightLine47);
  delay(20);
  char rightLine48[] = {B0010100, B0010100, B0010100, B0011100, B0011100}; VFD->writeROM(5, rightLine48);
  delay(20);
  char rightLine49[] = {B0010100, B0010100, B0010100, B0010100, B0011100}; VFD->writeROM(5, rightLine49);
  delay(20);
  char rightLine50[] = {B0010100, B0010100, B0010100, B0010100, B0010100}; VFD->writeROM(5, rightLine50);
  delay(50);

  char line0[] = {B0100010, B0100010, B0100010, B0100010, B0100010};
  VFD->writeROM(0, line0);
  VFD->writeROM(1, line0);
  VFD->writeROM(2, line0);
  VFD->writeROM(3, line0);
  VFD->writeROM(4, line0);
  VFD->writeROM(5, line0);
  delay(50);

  char line1[] = {B1000001, B1000001, B1000001, B1000001, B1000001};
  VFD->writeROM(0, line1);
  VFD->writeROM(1, line1);
  VFD->writeROM(2, line1);
  VFD->writeROM(3, line1);
  VFD->writeROM(4, line1);
  VFD->writeROM(5, line1);
  delay(50);
  
  VFD->clearScreen();
}
