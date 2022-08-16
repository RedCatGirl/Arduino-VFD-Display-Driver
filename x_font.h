/**
 * Шрифт состоит из быстро редактированных констант
 */


#define _____ B00000 //0
#define ____X B00001 //1
#define ___X_ B00010 //2
#define ___XX B00011 //3
#define __X__ B00100 //4
#define __X_X B00101 //5
#define __XX_ B00110 //6
#define __XXX B00111 //7
#define _X___ B01000 //8
#define _X__X B01001 //9
#define _X_X_ B01010 //10
#define _X_XX B01011 //11
#define _XX__ B01100 //12
#define _XX_X B01101 //13
#define _XXX_ B01110 //14
#define _XXXX B01111 //15
#define X____ B10000 //16
#define X___X B10001 //17
#define X__X_ B10010 //18
#define X__XX B10011 //19
#define X_X__ B10100 //20
#define X_X_X B10101 //21
#define X_XX_ B10110 //22
#define X_XXX B10111 //23
#define XX___ B11000 //24
#define XX__X B11001 //25
#define XX_X_ B11010 //26
#define XX_XX B11011 //27
#define XXX__ B11100 //28
#define XXX_X B11101 //29
#define XXXX_ B11110 //30
#define XXXXX B11111 //31


// character bitmap for each encoding
static const char x_font_bitmap_[] = {
//   0 $00 'defaultchar'
//  width 5, bbx 0, bby 0, bbw 5, bbh 5
  _____,
  X_X_X,
  _____,
  X___X,
  _____,
  X_X_X,
  _____,
//   1 $01 'uni25C6'
//  width 5, bbx 0, bby 0, bbw 5, bbh 5
  _____,
  __X__,
  _XXX_,
  XXXXX,
  _XXX_,
  __X__,
  _____,
//   2 $02 'shade'
//  width 5, bbx 0, bby -1, bbw 5, bbh 7
  X_X_X,
  _X_X_,
  X_X_X,
  _X_X_,
  X_X_X,
  _X_X_,
  X_X_X,
//   3 $03 'uni2409'
//  width 5, bbx 0, bby 0, bbw 4, bbh 6
  X_X__,
  XXX__,
  X_X__,
  _XXX_,
  __X__,
  __X__,
  _____,
//   4 $04 'uni240C'
//  width 5, bbx 0, bby 0, bbw 5, bbh 6
  XXX__,
  X____,
  XXXXX,
  X_X__,
  __XX_,
  __X__,
  _____,
//   5 $05 'uni240D'
//  width 5, bbx 0, bby 0, bbw 4, bbh 6
  _XX__,
  X____,
  XXX__,
  _X_X_,
  _XX__,
  _X_X_,
  _____,
//   6 $06 'uni240A'
//  width 5, bbx 0, bby 0, bbw 4, bbh 6
  X____,
  X____,
  XXXX_,
  __X__,
  __XX_,
  __X__,
  _____,
//   7 $07 'degree'
//  width 5, bbx 1, bby 3, bbw 3, bbh 3
  __X__,
  _X_X_,
  __X__,
  _____,
  _____,
  _____,
  _____,
//   8 $08 'plusminus'
//  width 5, bbx 0, bby 0, bbw 5, bbh 6
  __X__,
  __X__,
  XXXXX,
  __X__,
  __X__,
  XXXXX,
  _____,
//   9 $09 'uni2424'
//  width 5, bbx 0, bby 0, bbw 5, bbh 6
  XX___,
  X_X__,
  X_X__,
  X_X__,
  __X__,
  __XXX,
  _____,
//  10 $0a 'uni240B'
//  width 5, bbx 0, bby 0, bbw 5, bbh 6
  X_X__,
  X_X__,
  _XXXX,
  _X_X_,
  ___X_,
  ___X_,
  _____,
//  11 $0b 'SF040000'
//  width 5, bbx 0, bby 2, bbw 3, bbh 4
  __X__,
  __X__,
  __X__,
  XXX__,
  _____,
  _____,
  _____,
//  12 $0c 'SF030000'
//  width 5, bbx 0, bby -1, bbw 3, bbh 4
  _____,
  _____,
  _____,
  XXX__,
  __X__,
  __X__,
  __X__,
//  13 $0d 'SF010000'
//  width 5, bbx 2, bby -1, bbw 3, bbh 4
  _____,
  _____,
  _____,
  __XXX,
  __X__,
  __X__,
  __X__,
//  14 $0e 'SF020000'
//  width 5, bbx 2, bby 2, bbw 3, bbh 4
  __X__,
  __X__,
  __X__,
  __XXX,
  _____,
  _____,
  _____,
//  15 $0f 'SF050000'
//  width 5, bbx 0, bby -1, bbw 5, bbh 7
  __X__,
  __X__,
  __X__,
  XXXXX,
  __X__,
  __X__,
  __X__,
//  16 $10 'uni23BA'
//  width 5, bbx 0, bby 5, bbw 5, bbh 1
  XXXXX,
  _____,
  _____,
  _____,
  _____,
  _____,
  _____,
//  17 $11 'uni23BB'
//  width 5, bbx 0, bby 4, bbw 5, bbh 1
  _____,
  XXXXX,
  _____,
  _____,
  _____,
  _____,
  _____,
//  18 $12 'SF100000'
//  width 5, bbx 0, bby 2, bbw 5, bbh 1
  _____,
  _____,
  _____,
  XXXXX,
  _____,
  _____,
  _____,
//  19 $13 'uni23BC'
//  width 5, bbx 0, bby 0, bbw 5, bbh 1
  _____,
  _____,
  _____,
  _____,
  _____,
  XXXXX,
  _____,
//  20 $14 'uni23BD'
//  width 5, bbx 0, bby -1, bbw 5, bbh 1
  _____,
  _____,
  _____,
  _____,
  _____,
  _____,
  XXXXX,
//  21 $15 'SF080000'
//  width 5, bbx 2, bby -1, bbw 3, bbh 7
  __X__,
  __X__,
  __X__,
  __XXX,
  __X__,
  __X__,
  __X__,
//  22 $16 'SF090000'
//  width 5, bbx 0, bby -1, bbw 3, bbh 7
  __X__,
  __X__,
  __X__,
  XXX__,
  __X__,
  __X__,
  __X__,
//  23 $17 'SF070000'
//  width 5, bbx 0, bby 2, bbw 5, bbh 4
  __X__,
  __X__,
  __X__,
  XXXXX,
  _____,
  _____,
  _____,
//  24 $18 'SF060000'
//  width 5, bbx 0, bby -1, bbw 5, bbh 4
  _____,
  _____,
  _____,
  XXXXX,
  __X__,
  __X__,
  __X__,
//  25 $19 'SF110000'
//  width 5, bbx 2, bby -1, bbw 1, bbh 7
  __X__,
  __X__,
  __X__,
  __X__,
  __X__,
  __X__,
  __X__,
//  26 $1a 'lessequal'
//  width 5, bbx 1, bby 0, bbw 3, bbh 6
  ___X_,
  __X__,
  _X___,
  __X__,
  ___X_,
  _XXX_,
  _____,
//  27 $1b 'greaterequal'
//  width 5, bbx 1, bby 0, bbw 3, bbh 6
  _X___,
  __X__,
  ___X_,
  __X__,
  _X___,
  _XXX_,
  _____,
//  28 $1c 'pi'
//  width 5, bbx 1, bby 0, bbw 3, bbh 4
  _____,
  _____,
  _XXX_,
  _X_X_,
  _X_X_,
  _X_X_,
  _____,
//  29 $1d 'notequal'
//  width 5, bbx 0, bby 0, bbw 4, bbh 5
  _____,
  ___X_,
  XXXX_,
  __X__,
  XXXX_,
  _X___,
  _____,
//  30 $1e 'sterling'
//  width 5, bbx 0, bby 0, bbw 4, bbh 5
  _____,
  __XX_,
  _X___,
  XXX__,
  _X___,
  X_XX_,
  _____,
//  31 $1f 'periodcentered'
//  width 5, bbx 1, bby 2, bbw 2, bbh 2
  _____,
  _____,
  _XX__,
  _XX__,
  _____,
  _____,
  _____,
//  32 $20 'space'
//  width 5, bbx 4, bby -1, bbw 1, bbh 1
  _____,
  _____,
  _____,
  _____,
  _____,
  _____,
  _____,
//  33 $21 'exclam'
//  width 5, bbx 2, bby 0, bbw 1, bbh 6
  __X__,
  __X__,
  __X__,
  __X__,
  _____,
  __X__,
  _____,
//  34 $22 'quotedbl'
//  width 5, bbx 1, bby 3, bbw 3, bbh 3
  _X_X_,
  _X_X_,
  _X_X_,
  _____,
  _____,
  _____,
  _____,
//  35 $23 'numbersign'
//  width 5, bbx 0, bby 0, bbw 5, bbh 5
  _____,
  _X_X_,
  XXXXX,
  _X_X_,
  XXXXX,
  _X_X_,
  _____,
//  36 $24 'dollar'
//  width 5, bbx 0, bby 0, bbw 5, bbh 5
  _____,
  _XXX_,
  X_X__,
  _XXX_,
  __X_X,
  _XXX_,
  _____,
//  37 $25 'percent'
//  width 5, bbx 0, bby 0, bbw 4, bbh 6
  X____,
  X__X_,
  __X__,
  _X___,
  X__X_,
  ___X_,
  _____,
//  38 $26 'ampersand'
//  width 5, bbx 0, bby 0, bbw 4, bbh 5
  _____,
  _X___,
  X_X__,
  _X___,
  X_X__,
  _X_X_,
  _____,
//  39 $27 'quotesingle'
//  width 5, bbx 2, bby 3, bbw 1, bbh 3
  __X__,
  __X__,
  __X__,
  _____,
  _____,
  _____,
  _____,
//  40 $28 'parenleft'
//  width 5, bbx 1, bby 0, bbw 2, bbh 6
  __X__,
  _X___,
  _X___,
  _X___,
  _X___,
  __X__,
  _____,
//  41 $29 'parenright'
//  width 5, bbx 1, bby 0, bbw 2, bbh 6
  _X___,
  __X__,
  __X__,
  __X__,
  __X__,
  _X___,
  _____,
//  42 $2a 'asterisk'
//  width 5, bbx 1, bby 0, bbw 3, bbh 5
  _____,
  _X_X_,
  __X__,
  _XXX_,
  __X__,
  _X_X_,
  _____,
//  43 $2b 'plus'
//  width 5, bbx 0, bby 0, bbw 5, bbh 5
  _____,
  __X__,
  __X__,
  XXXXX,
  __X__,
  __X__,
  _____,
//  44 $2c 'comma'
//  width 5, bbx 1, bby -1, bbw 3, bbh 3
  _____,
  _____,
  _____,
  _____,
  __XX_,
  __X__,
  _X___,
//  45 $2d 'hyphen'
//  width 5, bbx 0, bby 2, bbw 4, bbh 1
  _____,
  _____,
  _____,
  XXXX_,
  _____,
  _____,
  _____,
//  46 $2e 'period'
//  width 5, bbx 1, bby 0, bbw 2, bbh 2
  _____,
  _____,
  _____,
  _____,
  _XX__,
  _XX__,
  _____,
//  47 $2f 'slash'
//  width 5, bbx 0, bby 1, bbw 4, bbh 4
  _____,
  ___X_,
  __X__,
  _X___,
  X____,
  _____,
  _____,
//  48 $30 'zero'
//  width 5, bbx 1, bby 0, bbw 3, bbh 6
  __X__,
  _X_X_,
  _X_X_,
  _X_X_,
  _X_X_,
  __X__,
  _____,
//  49 $31 'one'
//  width 5, bbx 1, bby 0, bbw 3, bbh 6
  __X__,
  _XX__,
  __X__,
  __X__,
  __X__,
  _XXX_,
  _____,
//  50 $32 'two'
//  width 5, bbx 0, bby 0, bbw 4, bbh 6
  _XX__,
  X__X_,
  ___X_,
  __X__,
  _X___,
  XXXX_,
  _____,
//  51 $33 'three'
//  width 5, bbx 0, bby 0, bbw 4, bbh 6
  XXXX_,
  ___X_,
  _XX__,
  ___X_,
  X__X_,
  _XX__,
  _____,
//  52 $34 'four'
//  width 5, bbx 0, bby 0, bbw 4, bbh 6
  __X__,
  _XX__,
  X_X__,
  XXXX_,
  __X__,
  __X__,
  _____,
//  53 $35 'five'
//  width 5, bbx 0, bby 0, bbw 4, bbh 6
  XXXX_,
  X____,
  XXX__,
  ___X_,
  X__X_,
  _XX__,
  _____,
//  54 $36 'six'
//  width 5, bbx 0, bby 0, bbw 4, bbh 6
  _XX__,
  X____,
  XXX__,
  X__X_,
  X__X_,
  _XX__,
  _____,
//  55 $37 'seven'
//  width 5, bbx 0, bby 0, bbw 4, bbh 6
  XXXX_,
  ___X_,
  __X__,
  __X__,
  _X___,
  _X___,
  _____,
//  56 $38 'eight'
//  width 5, bbx 0, bby 0, bbw 4, bbh 6
  _XX__,
  X__X_,
  _XX__,
  X__X_,
  X__X_,
  _XX__,
  _____,
//  57 $39 'nine'
//  width 5, bbx 0, bby 0, bbw 4, bbh 6
  _XX__,
  X__X_,
  X__X_,
  _XXX_,
  ___X_,
  _XX__,
  _____,
//  58 $3a 'colon'
//  width 5, bbx 1, bby 0, bbw 2, bbh 5
  _____,
  _XX__,
  _XX__,
  _____,
  _XX__,
  _XX__,
  _____,
//  59 $3b 'semicolon'
//  width 5, bbx 0, bby -1, bbw 3, bbh 6
  _____,
  _XX__,
  _XX__,
  _____,
  _XX__,
  _X___,
  X____,
//  60 $3c 'less'
//  width 5, bbx 1, bby 0, bbw 3, bbh 5
  _____,
  ___X_,
  __X__,
  _X___,
  __X__,
  ___X_,
  _____,
//  61 $3d 'equal'
//  width 5, bbx 0, bby 1, bbw 4, bbh 3
  _____,
  _____,
  XXXX_,
  _____,
  XXXX_,
  _____,
  _____,
//  62 $3e 'greater'
//  width 5, bbx 1, bby 0, bbw 3, bbh 5
  _____,
  _X___,
  __X__,
  ___X_,
  __X__,
  _X___,
  _____,
//  63 $3f 'question'
//  width 5, bbx 1, bby 0, bbw 3, bbh 6
  __X__,
  _X_X_,
  ___X_,
  __X__,
  _____,
  __X__,
  _____,
//  64 $40 'at'
//  width 5, bbx 0, bby 0, bbw 4, bbh 6
  _XX__,
  X__X_,
  X_XX_,
  X_XX_,
  X____,
  _XX__,
  _____,
//  65 $41 'A'
//  width 5, bbx 0, bby 0, bbw 4, bbh 6
  _XX__,
  X__X_,
  X__X_,
  XXXX_,
  X__X_,
  X__X_,
  _____,
//  66 $42 'B'
//  width 5, bbx 0, bby 0, bbw 4, bbh 6
  XXX__,
  X__X_,
  XXX__,
  X__X_,
  X__X_,
  XXX__,
  _____,
//  67 $43 'C'
//  width 5, bbx 0, bby 0, bbw 4, bbh 6
  _XX__,
  X__X_,
  X____,
  X____,
  X__X_,
  _XX__,
  _____,
//  68 $44 'D'
//  width 5, bbx 0, bby 0, bbw 4, bbh 6
  XXX__,
  X__X_,
  X__X_,
  X__X_,
  X__X_,
  XXX__,
  _____,
//  69 $45 'E'
//  width 5, bbx 0, bby 0, bbw 4, bbh 6
  XXXX_,
  X____,
  XXX__,
  X____,
  X____,
  XXXX_,
  _____,
//  70 $46 'F'
//  width 5, bbx 0, bby 0, bbw 4, bbh 6
  XXXX_,
  X____,
  XXX__,
  X____,
  X____,
  X____,
  _____,
//  71 $47 'G'
//  width 5, bbx 0, bby 0, bbw 4, bbh 6
  _XX__,
  X__X_,
  X____,
  X_XX_,
  X__X_,
  _XXX_,
  _____,
//  72 $48 'H'
//  width 5, bbx 0, bby 0, bbw 4, bbh 6
  X__X_,
  X__X_,
  XXXX_,
  X__X_,
  X__X_,
  X__X_,
  _____,
//  73 $49 'I'
//  width 5, bbx 1, bby 0, bbw 3, bbh 6
  _XXX_,
  __X__,
  __X__,
  __X__,
  __X__,
  _XXX_,
  _____,
//  74 $4a 'J'
//  width 5, bbx 0, bby 0, bbw 4, bbh 6
  ___X_,
  ___X_,
  ___X_,
  ___X_,
  X__X_,
  _XX__,
  _____,
//  75 $4b 'K'
//  width 5, bbx 0, bby 0, bbw 4, bbh 6
  X__X_,
  X_X__,
  XX___,
  XX___,
  X_X__,
  X__X_,
  _____,
//  76 $4c 'L'
//  width 5, bbx 0, bby 0, bbw 4, bbh 6
  X____,
  X____,
  X____,
  X____,
  X____,
  XXXX_,
  _____,
//  77 $4d 'M'
//  width 5, bbx 0, bby 0, bbw 4, bbh 6
  X__X_,
  XXXX_,
  XXXX_,
  X__X_,
  X__X_,
  X__X_,
  _____,
//  78 $4e 'N'
//  width 5, bbx 0, bby 0, bbw 4, bbh 6
  X__X_,
  XX_X_,
  XX_X_,
  X_XX_,
  X_XX_,
  X__X_,
  _____,
//  79 $4f 'O'
//  width 5, bbx 0, bby 0, bbw 4, bbh 6
  _XX__,
  X__X_,
  X__X_,
  X__X_,
  X__X_,
  _XX__,
  _____,
//  80 $50 'P'
//  width 5, bbx 0, bby 0, bbw 4, bbh 6
  XXX__,
  X__X_,
  X__X_,
  XXX__,
  X____,
  X____,
  _____,
//  81 $51 'Q'
//  width 5, bbx 0, bby -1, bbw 4, bbh 7
  _XX__,
  X__X_,
  X__X_,
  X__X_,
  XX_X_,
  _XX__,
  ___X_,
//  82 $52 'R'
//  width 5, bbx 0, bby 0, bbw 4, bbh 6
  XXX__,
  X__X_,
  X__X_,
  XXX__,
  X_X__,
  X__X_,
  _____,
//  83 $53 'S'
//  width 5, bbx 0, bby 0, bbw 4, bbh 6
  _XX__,
  X__X_,
  _X___,
  __X__,
  X__X_,
  _XX__,
  _____,
//  84 $54 'T'
//  width 5, bbx 1, bby 0, bbw 3, bbh 6
  _XXX_,
  __X__,
  __X__,
  __X__,
  __X__,
  __X__,
  _____,
//  85 $55 'U'
//  width 5, bbx 0, bby 0, bbw 4, bbh 6
  X__X_,
  X__X_,
  X__X_,
  X__X_,
  X__X_,
  _XX__,
  _____,
//  86 $56 'V'
//  width 5, bbx 0, bby 0, bbw 4, bbh 6
  X__X_,
  X__X_,
  X__X_,
  X__X_,
  _XX__,
  _XX__,
  _____,
//  87 $57 'W'
//  width 5, bbx 0, bby 0, bbw 4, bbh 6
  X__X_,
  X__X_,
  X__X_,
  XXXX_,
  XXXX_,
  X__X_,
  _____,
//  88 $58 'X'
//  width 5, bbx 0, bby 0, bbw 4, bbh 6
  X__X_,
  X__X_,
  _XX__,
  _XX__,
  X__X_,
  X__X_,
  _____,
//  89 $59 'Y'
//  width 5, bbx 1, bby 0, bbw 3, bbh 6
  _X_X_,
  _X_X_,
  _X_X_,
  __X__,
  __X__,
  __X__,
  _____,
//  90 $5a 'Z'
//  width 5, bbx 0, bby 0, bbw 4, bbh 6
  XXXX_,
  ___X_,
  __X__,
  _X___,
  X____,
  XXXX_,
  _____,
//  91 $5b 'bracketleft'
//  width 5, bbx 1, bby 0, bbw 3, bbh 6
  _XXX_,
  _X___,
  _X___,
  _X___,
  _X___,
  _XXX_,
  _____,
//  92 $5c 'backslash'
//  width 5, bbx 0, bby 1, bbw 4, bbh 4
  _____,
  X____,
  _X___,
  __X__,
  ___X_,
  _____,
  _____,
//  93 $5d 'bracketright'
//  width 5, bbx 1, bby 0, bbw 3, bbh 6
  _XXX_,
  ___X_,
  ___X_,
  ___X_,
  ___X_,
  _XXX_,
  _____,
//  94 $5e 'asciicircum'
//  width 5, bbx 1, bby 4, bbw 3, bbh 2
  __X__,
  _X_X_,
  _____,
  _____,
  _____,
  _____,
  _____,
//  95 $5f 'underscore'
//  width 5, bbx 0, bby 0, bbw 4, bbh 1
  _____,
  _____,
  _____,
  _____,
  _____,
  XXXX_,
  _____,
//  96 $60 'grave'
//  width 5, bbx 1, bby 4, bbw 2, bbh 2
  _X___,
  __X__,
  _____,
  _____,
  _____,
  _____,
  _____,
//  97 $61 'a'
//  width 5, bbx 0, bby 0, bbw 4, bbh 4
  _____,
  _____,
  _XXX_,
  X__X_,
  X_XX_,
  _X_X_,
  _____,
//  98 $62 'b'
//  width 5, bbx 0, bby 0, bbw 4, bbh 6
  X____,
  X____,
  XXX__,
  X__X_,
  X__X_,
  XXX__,
  _____,
//  99 $63 'c'
//  width 5, bbx 0, bby 0, bbw 3, bbh 4
  _____,
  _____,
  _XX__,
  X____,
  X____,
  _XX__,
  _____,
// 100 $64 'd'
//  width 5, bbx 0, bby 0, bbw 4, bbh 6
  ___X_,
  ___X_,
  _XXX_,
  X__X_,
  X__X_,
  _XXX_,
  _____,
// 101 $65 'e'
//  width 5, bbx 0, bby 0, bbw 4, bbh 4
  _____,
  _____,
  _XX__,
  X_XX_,
  XX___,
  _XX__,
  _____,
// 102 $66 'f'
//  width 5, bbx 0, bby 0, bbw 4, bbh 6
  __X__,
  _X_X_,
  _X___,
  XXX__,
  _X___,
  _X___,
  _____,
// 103 $67 'g'
//  width 5, bbx 0, bby -1, bbw 4, bbh 5
  _____,
  _____,
  _XXX_,
  X__X_,
  _XX__,
  X____,
  _XXX_,
// 104 $68 'h'
//  width 5, bbx 0, bby 0, bbw 4, bbh 6
  X____,
  X____,
  XXX__,
  X__X_,
  X__X_,
  X__X_,
  _____,
// 105 $69 'i'
//  width 5, bbx 1, bby 0, bbw 3, bbh 6
  __X__,
  _____,
  _XX__,
  __X__,
  __X__,
  _XXX_,
  _____,
// 106 $6a 'j'
//  width 5, bbx 1, bby -1, bbw 3, bbh 7
  ___X_,
  _____,
  ___X_,
  ___X_,
  ___X_,
  _X_X_,
  __X__,
// 107 $6b 'k'
//  width 5, bbx 0, bby 0, bbw 4, bbh 6
  X____,
  X____,
  X_X__,
  XX___,
  X_X__,
  X__X_,
  _____,
// 108 $6c 'l'
//  width 5, bbx 1, bby 0, bbw 3, bbh 6
  _XX__,
  __X__,
  __X__,
  __X__,
  __X__,
  _XXX_,
  _____,
// 109 $6d 'm'
//  width 5, bbx 0, bby 0, bbw 4, bbh 4
  _____,
  _____,
  X_X__,
  XXXX_,
  X__X_,
  X__X_,
  _____,
// 110 $6e 'n'
//  width 5, bbx 0, bby 0, bbw 4, bbh 4
  _____,
  _____,
  XXX__,
  X__X_,
  X__X_,
  X__X_,
  _____,
// 111 $6f 'o'
//  width 5, bbx 0, bby 0, bbw 4, bbh 4
  _____,
  _____,
  _XX__,
  X__X_,
  X__X_,
  _XX__,
  _____,
// 112 $70 'p'
//  width 5, bbx 0, bby -1, bbw 4, bbh 5
  _____,
  _____,
  XXX__,
  X__X_,
  X__X_,
  XXX__,
  X____,
// 113 $71 'q'
//  width 5, bbx 0, bby -1, bbw 4, bbh 5
  _____,
  _____,
  _XXX_,
  X__X_,
  X__X_,
  _XXX_,
  ___X_,
// 114 $72 'r'
//  width 5, bbx 0, bby 0, bbw 4, bbh 4
  _____,
  _____,
  XXX__,
  X__X_,
  X____,
  X____,
  _____,
// 115 $73 's'
//  width 5, bbx 0, bby 0, bbw 4, bbh 4
  _____,
  _____,
  _XXX_,
  XX___,
  __XX_,
  XXX__,
  _____,
// 116 $74 't'
//  width 5, bbx 0, bby 0, bbw 4, bbh 6
  _X___,
  _X___,
  XXX__,
  _X___,
  _X___,
  __XX_,
  _____,
// 117 $75 'u'
//  width 5, bbx 0, bby 0, bbw 4, bbh 4
  _____,
  _____,
  X__X_,
  X__X_,
  X__X_,
  _XXX_,
  _____,
// 118 $76 'v'
//  width 5, bbx 1, bby 0, bbw 3, bbh 4
  _____,
  _____,
  _X_X_,
  _X_X_,
  _X_X_,
  __X__,
  _____,
// 119 $77 'w'
//  width 5, bbx 0, bby 0, bbw 4, bbh 4
  _____,
  _____,
  X__X_,
  X__X_,
  XXXX_,
  XXXX_,
  _____,
// 120 $78 'x'
//  width 5, bbx 0, bby 0, bbw 4, bbh 4
  _____,
  _____,
  X__X_,
  _XX__,
  _XX__,
  X__X_,
  _____,
// 121 $79 'y'
//  width 5, bbx 0, bby -1, bbw 4, bbh 5
  _____,
  _____,
  X__X_,
  X__X_,
  _X_X_,
  __X__,
  _X___,
// 122 $7a 'z'
//  width 5, bbx 0, bby 0, bbw 4, bbh 4
  _____,
  _____,
  XXXX_,
  __X__,
  _X___,
  XXXX_,
  _____,
// 123 $7b 'braceleft'
//  width 5, bbx 1, bby 0, bbw 3, bbh 6
  ___X_,
  __X__,
  _XX__,
  __X__,
  __X__,
  ___X_,
  _____,
// 124 $7c 'bar'
//  width 5, bbx 2, bby 0, bbw 1, bbh 6
  __X__,
  __X__,
  __X__,
  __X__,
  __X__,
  __X__,
  _____,
// 125 $7d 'braceright'
//  width 5, bbx 1, bby 0, bbw 3, bbh 6
  _X___,
  __X__,
  __XX_,
  __X__,
  __X__,
  _X___,
  _____,
// 126 $7e 'asciitilde'
//  width 5, bbx 0, bby 4, bbw 4, bbh 2
  _X_X_,
  X_X__,
  _____,
  _____,
  _____,
  _____,
  _____,
// 160 $a0 'space'
//  width 5, bbx 4, bby -1, bbw 1, bbh 1
  _____,
  _____,
  _____,
  _____,
  _____,
  _____,
  _____,
// 161 $a1 'afii10023'
//  width 5, bbx 0, bby 0, bbw 4, bbh 6
  XXXX_,
  X____,
  XXX__,
  X____,
  X____,
  XXXX_,
  _____,
// 162 $a2 'afii10051'
//  width 5, bbx 0, bby -1, bbw 4, bbh 7
  XXX__,
  _X___,
  _XX__,
  _X_X_,
  _X_X_,
  ___X_,
  __X__,
// 163 $a3 'afii10052'
//  width 5, bbx 0, bby 0, bbw 4, bbh 6
  XXXX_,
  X____,
  X____,
  X____,
  X____,
  X____,
  _____,
// 164 $a4 'afii10053'
//  width 5, bbx 0, bby 0, bbw 4, bbh 6
  _XX__,
  X__X_,
  XX___,
  X____,
  X__X_,
  _XX__,
  _____,
// 165 $a5 'afii10054'
//  width 5, bbx 0, bby 0, bbw 4, bbh 6
  _XX__,
  X__X_,
  _X___,
  __X__,
  X__X_,
  _XX__,
  _____,
// 166 $a6 'afii10055'
//  width 5, bbx 1, bby 0, bbw 3, bbh 6
  _XXX_,
  __X__,
  __X__,
  __X__,
  __X__,
  _XXX_,
  _____,
// 167 $a7 'afii10056'
//  width 5, bbx 1, bby 0, bbw 3, bbh 6
  _XXX_,
  __X__,
  __X__,
  __X__,
  __X__,
  _XXX_,
  _____,
// 168 $a8 'afii10057'
//  width 5, bbx 0, bby 0, bbw 4, bbh 6
  ___X_,
  ___X_,
  ___X_,
  ___X_,
  X__X_,
  _XX__,
  _____,
// 169 $a9 'afii10058'
//  width 5, bbx 0, bby 0, bbw 5, bbh 6
  _XX__,
  X_X__,
  X_XX_,
  X_X_X,
  X_X_X,
  X_XX_,
  _____,
// 170 $aa 'afii10059'
//  width 5, bbx 0, bby 0, bbw 5, bbh 6
  X_X__,
  X_X__,
  XXXX_,
  X_X_X,
  X_X_X,
  X_XX_,
  _____,
// 171 $ab 'afii10060'
//  width 5, bbx 0, bby 0, bbw 4, bbh 6
  XXX__,
  _X___,
  _XX__,
  _X_X_,
  _X_X_,
  _X_X_,
  _____,
// 172 $ac 'afii10061'
//  width 5, bbx 0, bby 0, bbw 4, bbh 6
  X__X_,
  X_X__,
  XX___,
  XX___,
  X_X__,
  X__X_,
  _____,
// 173 $ad 'hyphen'
//  width 5, bbx 1, bby 2, bbw 3, bbh 1
  _____,
  _____,
  _____,
  _XXX_,
  _____,
  _____,
  _____,
// 174 $ae 'afii10062'
//  width 5, bbx 1, bby 0, bbw 3, bbh 6
  _X_X_,
  _X_X_,
  _X_X_,
  __X__,
  __X__,
  _X___,
  _____,
// 175 $af 'afii10145'
//  width 5, bbx 1, bby -1, bbw 3, bbh 7
  _X_X_,
  _X_X_,
  _X_X_,
  _X_X_,
  _X_X_,
  _XXX_,
  __X__,
// 176 $b0 'afii10017'
//  width 5, bbx 0, bby 0, bbw 4, bbh 6
  _XX__,
  X__X_,
  X__X_,
  XXXX_,
  X__X_,
  X__X_,
  _____,
// 177 $b1 'afii10018'
//  width 5, bbx 0, bby 0, bbw 4, bbh 6
  XXX__,
  X____,
  XXX__,
  X__X_,
  X__X_,
  XXX__,
  _____,
// 178 $b2 'afii10019'
//  width 5, bbx 0, bby 0, bbw 4, bbh 6
  XXX__,
  X__X_,
  XXX__,
  X__X_,
  X__X_,
  XXX__,
  _____,
// 179 $b3 'afii10020'
//  width 5, bbx 0, bby 0, bbw 4, bbh 6
  XXXX_,
  X____,
  X____,
  X____,
  X____,
  X____,
  _____,
// 180 $b4 'afii10021'
//  width 5, bbx 0, bby -1, bbw 4, bbh 7
  __XX_,
  _X_X_,
  _X_X_,
  _X_X_,
  _X_X_,
  XXXX_,
  X__X_,
// 181 $b5 'afii10022'
//  width 5, bbx 0, bby 0, bbw 4, bbh 6
  XXXX_,
  X____,
  XXX__,
  X____,
  X____,
  XXXX_,
  _____,
// 182 $b6 'afii10024'
//  width 5, bbx 0, bby 0, bbw 5, bbh 6
  X_X_X,
  X_X_X,
  _XXX_,
  _XXX_,
  X_X_X,
  X_X_X,
  _____,
// 183 $b7 'afii10025'
//  width 5, bbx 0, bby 0, bbw 4, bbh 6
  XXX__,
  ___X_,
  _XX__,
  ___X_,
  X__X_,
  _XX__,
  _____,
// 184 $b8 'afii10026'
//  width 5, bbx 0, bby 0, bbw 4, bbh 6
  X__X_,
  X_XX_,
  X_XX_,
  XX_X_,
  XX_X_,
  X__X_,
  _____,
// 185 $b9 'afii10027'
//  width 5, bbx 0, bby 0, bbw 4, bbh 6
  XX_X_,
  X_XX_,
  X_XX_,
  XX_X_,
  XX_X_,
  X__X_,
  _____,
// 186 $ba 'afii10028'
//  width 5, bbx 0, bby 0, bbw 4, bbh 6
  X__X_,
  X_X__,
  XX___,
  XX___,
  X_X__,
  X__X_,
  _____,
// 187 $bb 'afii10029'
//  width 5, bbx 0, bby 0, bbw 4, bbh 6
  __XX_,
  _X_X_,
  _X_X_,
  _X_X_,
  _X_X_,
  X__X_,
  _____,
// 188 $bc 'afii10030'
//  width 5, bbx 0, bby 0, bbw 4, bbh 6
  X__X_,
  XXXX_,
  XXXX_,
  X__X_,
  X__X_,
  X__X_,
  _____,
// 189 $bd 'afii10031'
//  width 5, bbx 0, bby 0, bbw 4, bbh 6
  X__X_,
  X__X_,
  XXXX_,
  X__X_,
  X__X_,
  X__X_,
  _____,
// 190 $be 'afii10032'
//  width 5, bbx 0, bby 0, bbw 4, bbh 6
  _XX__,
  X__X_,
  X__X_,
  X__X_,
  X__X_,
  _XX__,
  _____,
// 191 $bf 'afii10033'
//  width 5, bbx 0, bby 0, bbw 4, bbh 6
  XXXX_,
  X__X_,
  X__X_,
  X__X_,
  X__X_,
  X__X_,
  _____,
// 192 $c0 'afii10034'
//  width 5, bbx 0, bby 0, bbw 4, bbh 6
  XXX__,
  X__X_,
  X__X_,
  XXX__,
  X____,
  X____,
  _____,
// 193 $c1 'afii10035'
//  width 5, bbx 0, bby 0, bbw 4, bbh 6
  _XX__,
  X__X_,
  X____,
  X____,
  X__X_,
  _XX__,
  _____,
// 194 $c2 'afii10036'
//  width 5, bbx 1, bby 0, bbw 3, bbh 6
  _XXX_,
  __X__,
  __X__,
  __X__,
  __X__,
  __X__,
  _____,
// 195 $c3 'afii10037'
//  width 5, bbx 1, bby 0, bbw 3, bbh 6
  _X_X_,
  _X_X_,
  _X_X_,
  __X__,
  __X__,
  _X___,
  _____,
// 196 $c4 'afii10038'
//  width 5, bbx 1, bby 0, bbw 3, bbh 6
  __X__,
  _XXX_,
  _X_X_,
  _X_X_,
  _XXX_,
  __X__,
  _____,
// 197 $c5 'afii10039'
//  width 5, bbx 0, bby 0, bbw 4, bbh 6
  X__X_,
  X__X_,
  _XX__,
  _XX__,
  X__X_,
  X__X_,
  _____,
// 198 $c6 'afii10040'
//  width 5, bbx 0, bby -1, bbw 4, bbh 7
  X__X_,
  X__X_,
  X__X_,
  X__X_,
  X__X_,
  XXXX_,
  ___X_,
// 199 $c7 'afii10041'
//  width 5, bbx 0, bby 0, bbw 4, bbh 6
  X__X_,
  X__X_,
  X__X_,
  _XXX_,
  ___X_,
  ___X_,
  _____,
// 200 $c8 'afii10042'
//  width 5, bbx 0, bby 0, bbw 5, bbh 6
  X_X_X,
  X_X_X,
  X_X_X,
  X_X_X,
  X_X_X,
  XXXXX,
  _____,
// 201 $c9 'afii10043'
//  width 5, bbx 0, bby -1, bbw 5, bbh 7
  X_X_X,
  X_X_X,
  X_X_X,
  X_X_X,
  X_X_X,
  XXXXX,
  ____X,
// 202 $ca 'afii10044'
//  width 5, bbx 0, bby 0, bbw 4, bbh 6
  XX___,
  _X___,
  _XX__,
  _X_X_,
  _X_X_,
  _XX__,
  _____,
// 203 $cb 'afii10045'
//  width 5, bbx 0, bby 0, bbw 4, bbh 6
  X__X_,
  X__X_,
  XX_X_,
  X_XX_,
  X_XX_,
  XX_X_,
  _____,
// 204 $cc 'afii10046'
//  width 5, bbx 0, bby 0, bbw 4, bbh 6
  X____,
  X____,
  XXX__,
  X__X_,
  X__X_,
  XXX__,
  _____,
// 205 $cd 'afii10047'
//  width 5, bbx 0, bby 0, bbw 4, bbh 6
  _XX__,
  X__X_,
  __XX_,
  ___X_,
  X__X_,
  _XX__,
  _____,
// 206 $ce 'afii10048'
//  width 5, bbx 0, bby 0, bbw 4, bbh 6
  X_X__,
  XX_X_,
  XX_X_,
  XX_X_,
  XX_X_,
  X_X__,
  _____,
// 207 $cf 'afii10049'
//  width 5, bbx 0, bby 0, bbw 4, bbh 6
  _XXX_,
  X__X_,
  X__X_,
  _XXX_,
  _X_X_,
  X__X_,
  _____,
// 208 $d0 'afii10065'
//  width 5, bbx 0, bby 0, bbw 4, bbh 4
  _____,
  _____,
  _XXX_,
  X__X_,
  X_XX_,
  _X_X_,
  _____,
// 209 $d1 'afii10066'
//  width 5, bbx 0, bby 0, bbw 4, bbh 5
  _____,
  _XX__,
  X____,
  XXX__,
  X__X_,
  _XX__,
  _____,
// 210 $d2 'afii10067'
//  width 5, bbx 0, bby 0, bbw 4, bbh 4
  _____,
  _____,
  XXX__,
  XXX__,
  X__X_,
  XXX__,
  _____,
// 211 $d3 'afii10068'
//  width 5, bbx 0, bby 0, bbw 4, bbh 4
  _____,
  _____,
  XXXX_,
  X____,
  X____,
  X____,
  _____,
// 212 $d4 'afii10069'
//  width 5, bbx 0, bby -1, bbw 4, bbh 5
  _____,
  _____,
  __XX_,
  _X_X_,
  _X_X_,
  XXXX_,
  X__X_,
// 213 $d5 'afii10070'
//  width 5, bbx 0, bby 0, bbw 4, bbh 4
  _____,
  _____,
  _XX__,
  X_XX_,
  XX___,
  _XX__,
  _____,
// 214 $d6 'afii10072'
//  width 5, bbx 0, bby 0, bbw 5, bbh 4
  _____,
  _____,
  X_X_X,
  _XXX_,
  _XXX_,
  X_X_X,
  _____,
// 215 $d7 'afii10073'
//  width 5, bbx 0, bby 0, bbw 3, bbh 4
  _____,
  _____,
  XXX__,
  _XX__,
  __X__,
  XX___,
  _____,
// 216 $d8 'afii10074'
//  width 5, bbx 0, bby 0, bbw 4, bbh 4
  _____,
  _____,
  X__X_,
  X_XX_,
  XX_X_,
  X__X_,
  _____,
// 217 $d9 'afii10075'
//  width 5, bbx 0, bby 0, bbw 4, bbh 6
  X__X_,
  _XX__,
  X__X_,
  X_XX_,
  XX_X_,
  X__X_,
  _____,
// 218 $da 'afii10076'
//  width 5, bbx 0, bby 0, bbw 4, bbh 4
  _____,
  _____,
  X__X_,
  XXX__,
  X_X__,
  X__X_,
  _____,
// 219 $db 'afii10077'
//  width 5, bbx 0, bby 0, bbw 4, bbh 4
  _____,
  _____,
  __XX_,
  _X_X_,
  _X_X_,
  X__X_,
  _____,
// 220 $dc 'afii10078'
//  width 5, bbx 0, bby 0, bbw 5, bbh 4
  _____,
  _____,
  X___X,
  XX_XX,
  X_X_X,
  X_X_X,
  _____,
// 221 $dd 'afii10079'
//  width 5, bbx 0, bby 0, bbw 4, bbh 4
  _____,
  _____,
  X__X_,
  XXXX_,
  X__X_,
  X__X_,
  _____,
// 222 $de 'afii10080'
//  width 5, bbx 0, bby 0, bbw 4, bbh 4
  _____,
  _____,
  _XX__,
  X__X_,
  X__X_,
  _XX__,
  _____,
// 223 $df 'afii10081'
//  width 5, bbx 0, bby 0, bbw 4, bbh 4
  _____,
  _____,
  XXXX_,
  X__X_,
  X__X_,
  X__X_,
  _____,
// 224 $e0 'afii10082'
//  width 5, bbx 0, bby -1, bbw 4, bbh 5
  _____,
  _____,
  XXX__,
  X__X_,
  X__X_,
  XXX__,
  X____,
// 225 $e1 'afii10083'
//  width 5, bbx 0, bby 0, bbw 3, bbh 4
  _____,
  _____,
  _XX__,
  X____,
  X____,
  _XX__,
  _____,
// 226 $e2 'afii10084'
//  width 5, bbx 0, bby 0, bbw 3, bbh 4
  _____,
  _____,
  XXX__,
  _X___,
  _X___,
  _X___,
  _____,
// 227 $e3 'afii10085'
//  width 5, bbx 0, bby -1, bbw 4, bbh 5
  _____,
  _____,
  X__X_,
  X__X_,
  _X_X_,
  __X__,
  _X___,
// 228 $e4 'afii10086'
//  width 5, bbx 1, bby -1, bbw 3, bbh 7
  _XX__,
  __X__,
  __X__,
  _XXX_,
  _X_X_,
  _XXX_,
  __X__,
// 229 $e5 'afii10087'
//  width 5, bbx 0, bby 0, bbw 4, bbh 4
  _____,
  _____,
  X__X_,
  _XX__,
  _XX__,
  X__X_,
  _____,
// 230 $e6 'afii10088'
//  width 5, bbx 0, bby -1, bbw 4, bbh 5
  _____,
  _____,
  X__X_,
  X__X_,
  X__X_,
  XXXX_,
  ___X_,
// 231 $e7 'afii10089'
//  width 5, bbx 0, bby 0, bbw 4, bbh 4
  _____,
  _____,
  X__X_,
  X__X_,
  _XXX_,
  ___X_,
  _____,
// 232 $e8 'afii10090'
//  width 5, bbx 0, bby 0, bbw 5, bbh 4
  _____,
  _____,
  X_X_X,
  X_X_X,
  X_X_X,
  XXXXX,
  _____,
// 233 $e9 'afii10091'
//  width 5, bbx 0, bby -1, bbw 5, bbh 5
  _____,
  _____,
  X_X_X,
  X_X_X,
  X_X_X,
  XXXXX,
  ____X,
// 234 $ea 'afii10092'
//  width 5, bbx 0, bby 0, bbw 4, bbh 4
  _____,
  _____,
  XX___,
  _XX__,
  _X_X_,
  _XX__,
  _____,
// 235 $eb 'afii10093'
//  width 5, bbx 0, bby 0, bbw 4, bbh 4
  _____,
  _____,
  X__X_,
  XX_X_,
  X_XX_,
  XX_X_,
  _____,
// 236 $ec 'afii10094'
//  width 5, bbx 0, bby 0, bbw 4, bbh 4
  _____,
  _____,
  X____,
  XXX__,
  X__X_,
  XXX__,
  _____,
// 237 $ed 'afii10095'
//  width 5, bbx 1, bby 0, bbw 3, bbh 4
  _____,
  _____,
  _XX__,
  __XX_,
  ___X_,
  _XX__,
  _____,
// 238 $ee 'afii10096'
//  width 5, bbx 0, bby 0, bbw 4, bbh 4
  _____,
  _____,
  X_X__,
  XX_X_,
  XX_X_,
  X_X__,
  _____,
// 239 $ef 'afii10097'
//  width 5, bbx 0, bby 0, bbw 3, bbh 4
  _____,
  _____,
  _XX__,
  X_X__,
  _XX__,
  X_X__,
  _____,
// 240 $f0 'afii61352'
//  width 5, bbx 0, bby 0, bbw 5, bbh 6
  XX___,
  X_X__,
  X_X__,
  X_XX_,
  X_X_X,
  X_XX_,
  _____,
// 241 $f1 'afii10071'
//  width 5, bbx 0, bby 0, bbw 4, bbh 6
  X_X__,
  _____,
  _XX__,
  X_XX_,
  XX___,
  _XX__,
  _____,
// 242 $f2 'afii10099'
//  width 5, bbx 0, bby -1, bbw 4, bbh 7
  _X___,
  XXX__,
  _X___,
  _XX__,
  _X_X_,
  ___X_,
  __X__,
// 243 $f3 'afii10100'
//  width 5, bbx 0, bby 0, bbw 4, bbh 6
  __X__,
  _X___,
  XXXX_,
  X____,
  X____,
  X____,
  _____,
// 244 $f4 'afii10101'
//  width 5, bbx 1, bby 0, bbw 3, bbh 4
  _____,
  _____,
  __XX_,
  _XX__,
  _X___,
  __XX_,
  _____,
// 245 $f5 'afii10102'
//  width 5, bbx 0, bby 0, bbw 4, bbh 4
  _____,
  _____,
  _XXX_,
  XX___,
  __XX_,
  XXX__,
  _____,
// 246 $f6 'afii10103'
//  width 5, bbx 1, bby 0, bbw 3, bbh 6
  __X__,
  _____,
  _XX__,
  __X__,
  __X__,
  _XXX_,
  _____,
// 247 $f7 'afii10104'
//  width 5, bbx 1, bby 0, bbw 3, bbh 6
  _X_X_,
  _____,
  _XX__,
  __X__,
  __X__,
  _XXX_,
  _____,
// 248 $f8 'afii10105'
//  width 5, bbx 1, bby -1, bbw 3, bbh 7
  ___X_,
  _____,
  ___X_,
  ___X_,
  ___X_,
  _X_X_,
  __X__,
// 249 $f9 'afii10106'
//  width 5, bbx 0, bby 0, bbw 5, bbh 4
  _____,
  _____,
  _XX__,
  X_XXX,
  X_X_X,
  X_XX_,
  _____,
// 250 $fa 'afii10107'
//  width 5, bbx 0, bby 0, bbw 5, bbh 4
  _____,
  _____,
  X_X__,
  XXXX_,
  X_X_X,
  X_XX_,
  _____,
// 251 $fb 'afii10108'
//  width 5, bbx 0, bby 0, bbw 5, bbh 6
  _X___,
  XXX__,
  _X___,
  _XXX_,
  _X__X,
  _X__X,
  _____,
// 252 $fc 'afii10109'
//  width 5, bbx 0, bby 0, bbw 4, bbh 6
  __X__,
  _X___,
  X__X_,
  XXX__,
  X_X__,
  X__X_,
  _____,
// 253 $fd 'section'
//  width 5, bbx 1, bby -1, bbw 3, bbh 7
  __XX_,
  _X___,
  _XX__,
  _X_X_,
  __XX_,
  ___X_,
  _XX__,
// 254 $fe 'afii10110'
//  width 5, bbx 0, bby -1, bbw 4, bbh 7
  X__X_,
  _XX__,
  _____,
  X__X_,
  _X_X_,
  __X__,
  _X___,
// 255 $ff 'afii10193'
//  width 5, bbx 1, bby -1, bbw 3, bbh 5
  _____,
  _____,
  _X_X_,
  _X_X_,
  _X_X_,
  _XXX_,
  __X__,
};


/**
 * Преабразует битовый миссив из 5х7 в 7х5 (поворот на 90 градусов)
 */
char* get_Xsymbol(char chr) {
  static char arr[5] = {};
  int arrayIndex = 7 * int(chr); 
  
  for(int i=0; i<5; i++) {
    for(int n=0; n<7; n++) {
      int x = ( (x_font_bitmap_[arrayIndex+n] >> i ) & 1);
      // пример смены бита - https://stackoverflow.com/questions/47981/how-do-i-set-clear-and-toggle-a-single-bit  
      arr[5-i] = arr[5-i] & ~(1 << n) | (x << n);
    }
  }
  
  return arr;
}
