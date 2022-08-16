#include "VFDisplay.h"
#include "animation.h"


VFDisplay* VFD;

void setup() {
  Serial.begin(115200);
  while (!Serial);
  delay(100);
  randomSeed(analogRead(0));

  VFD = new VFDisplay();
}

void loop()
{  
  VFD->clearScreen();

//  for(int i=0; i<10; i++) {
//    VFD->drawCircle(5, 5, i);
//    VFD->drawCircle(10, 4, i+2);
//    VFD->drawCircle(29, 0, i+1);
//    VFD->drawCircle(20, 3, i);
//    delay(150);
//    VFD->clearBuffer();
//  }
//  
//  VFD->clearBuffer();


  VFD->drawStringXfont("ABCdeF");


//  for(char i=32; i<64; i=i+6) {
//    char chr[7] = {i, i+1, i+2, i+3, i+4, i+5};
//    String str = "";
//
//    str = String(chr);
//    Serial.println(chr);
//    Serial.println(str);
//    VFD->drawStringXfont(str);
//    delay(700);
//    VFD->clearBuffer();
//  }
  
  char bitmap_Ab[30] = {
    0x7E, 0x11, 0x11, 0x11, 0x7E,
    0x00, 0x00,
    0x7F, 0x48, 0x44, 0x44, 0x38,
  };

//  VFD->setBuffer(bitmap_Ab);
//  for(int x=0; x<10; x++) {
//    for(int i=0; i<18; i++) {
//      delay(30);
//      VFD->shiftRightBuffer();
//      VFD->writeBuffer();
//    }
//
//    for(int i=0; i<18; i++) {
//      delay(30);
//      VFD->shiftLeftBuffer();
//      VFD->writeBuffer();
//    }
//  }
//
//  
//
//
//  VFD->clearBuffer();
//
//  const char bitmap_30x7[] = {
//    0x00, 0x30, 0x18, 0x38, 0x18,
//    0x30, 0x10, 0x30, 0x10, 0x30,
//    0x10, 0x18, 0x18, 0x1C, 0x7C,
//    0x7E, 0x1A, 0x1E, 0x1E, 0x1E,
//    0x1C, 0x1C, 0x18, 0x1C, 0x1C,
//    0x1C, 0x7C, 0x7C, 0x18, 0x00,
//  };
//  VFD->setBuffer(bitmap_30x7);
//  VFD->writeBuffer();


//  animationScreenOn(); // TEST
  delay(1000);

  VFD->clearBuffer();

//  VFDclearScreen();
  
//  VFDWriteStr(6, "TEST");
//  delay(1000);
//
  animationShum(VFD, 20);

//  delay(1000);
//
//  VFDclearScreen();
//
//  animationLoadProgress(30);
//  delay(1000);
}
