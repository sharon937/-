#define NOTE_C3  131
#define NOTE_D3  147
#define NOTE_E3  165
#define NOTE_F3  175
#define NOTE_G3  196
#define NOTE_A3  220
#define NOTE_B3  247
#define NOTE_C4  262

int latchPin = 13;
int clockPin = 12;
int dataPin = 11;
int button0 = 0;
int button1 = 0;
int button2 = 0;
int button3 = 0;
int button4 = 0;
int button5 = 0;
int button6 = 0;
int button7 = 0;

void setup() {
  pinMode(latchPin,OUTPUT);
  pinMode(clockPin,OUTPUT);
  pinMode(dataPin,OUTPUT);
  pinMode(2, INPUT_PULLUP);
  pinMode(3, INPUT_PULLUP);
  pinMode(4, INPUT_PULLUP);
  pinMode(5, INPUT_PULLUP);
  pinMode(6, INPUT_PULLUP);
  pinMode(7, INPUT_PULLUP);
  pinMode(8, INPUT_PULLUP);
  pinMode(9, INPUT_PULLUP);
  pinMode(10, OUTPUT);
  }
  

byte colDataMatrix[8] = {
   B11111110,
   B11111101,
   B11111011,
   B11110111,
   B11101111,
   B11011111,
   B10111111,
   B01111111
};
byte C[8] = {
   B01111110,
   B11111111,
   B11000011,
   B00000011,
   B00000011,
   B11000011,
   B11111111,
   B01111110
};
byte D[8] = {
   B00111111,
   B01111111,
   B11000011,
   B11000011,
   B11000011,
   B11000011,
   B01111111,
   B00111111
};
byte E[8] = {
   B11111111,
   B11111111,
   B00000011,
   B11111111,
   B11111111,
   B00000011,
   B11111111,
   B11111111
};
byte F[8] = {
   B11111111,
   B11111111,
   B00000011,
   B11111111,
   B11111111,
   B00000011,
   B00000011,
   B00000011
};
byte G[8] = {
   B11111111,
   B11111111,
   B00000011,
   B00000011,
   B01110011,
   B11100011,
   B11111111,
   B01111111
};
byte A[8] = {
   B00011000,
   B00100100,
   B01100110,
   B11111111,
   B11000011,
   B11000011,
   B11000011,
   B11000011
};
byte B[8] = {
   B01111111,
   B11111111,
   B11000011,
   B00111111,
   B00111111,
   B11000011,
   B11111111,
   B01111111
};
byte C2[8] = {
   B01111110,
   B11111111,
   B11000011,
   B00000011,
   B00000011,
   B11000011,
   B11111111,
   B01111110
};
byte NO[8] = {
   B00000000,
   B00000000,
   B00000000,
   B00000000,
   B00000000,
   B00000000,
   B00000000,
   B00000000
};


void loop() {
    button0 = digitalRead(2);
    button1 = digitalRead(3);
    button2 = digitalRead(4);
    button3 = digitalRead(5);
    button4 = digitalRead(6);
    button5 = digitalRead(7);
    button6 = digitalRead(8);
    button7 = digitalRead(9);
  
      digitalWrite(latchPin,LOW);
      shiftOut(dataPin, clockPin, MSBFIRST, 0);
     digitalWrite(latchPin,HIGH);
      
   if(button0 == LOW){
      tone(10,NOTE_C3,100);
      for(int i = 0; i < 8 ; i++){
      digitalWrite(latchPin,LOW);
      shiftOut(dataPin, clockPin, MSBFIRST, colDataMatrix[i]);
      shiftOut(dataPin, clockPin, MSBFIRST, C[i]);
      digitalWrite(latchPin,HIGH);
      delay(1);
       }
      delay(100);
      noTone(10);
      }else if(button1 == LOW){
      tone(10,NOTE_D3,100);
     for(int i = 0; i < 8 ; i++){
      digitalWrite(latchPin,LOW);
      shiftOut(dataPin, clockPin, MSBFIRST, colDataMatrix[i]);
      shiftOut(dataPin, clockPin, MSBFIRST, D[i]);
      digitalWrite(latchPin,HIGH);
      delay(1);
     }
      delay(100);
       noTone(10);
    }else if(button2 == LOW){
      tone(10,NOTE_E3,100);
     for(int i = 0; i < 8 ; i++){
      digitalWrite(latchPin,LOW);
      shiftOut(dataPin, clockPin, MSBFIRST, colDataMatrix[i]);
      shiftOut(dataPin, clockPin, MSBFIRST, E[i]);
      digitalWrite(latchPin,HIGH);
      delay(1);
        }
      delay(100);
      noTone(10);
    }else if(button3 == LOW){
      tone(10,NOTE_F3,100);
     for(int i = 0; i < 8 ; i++){
      digitalWrite(latchPin,LOW);
      shiftOut(dataPin, clockPin, MSBFIRST, colDataMatrix[i]);
      shiftOut(dataPin, clockPin, MSBFIRST, F[i]);
      digitalWrite(latchPin,HIGH);
       delay(1);}
      delay(100);
      noTone(10);
    }else if(button4 == LOW){
      tone(10,NOTE_G3,100);
     for(int i = 0; i < 8 ; i++){
      digitalWrite(latchPin,LOW);
      shiftOut(dataPin, clockPin, MSBFIRST, colDataMatrix[i]);
      shiftOut(dataPin, clockPin, MSBFIRST, G[i]);
      digitalWrite(latchPin,HIGH);
      delay(1);
        }
      delay(100);
      noTone(10);
    }else if(button5 == LOW){
      tone(10,NOTE_A3,100);
     for(int i = 0; i < 8 ; i++){
      digitalWrite(latchPin,LOW);
      shiftOut(dataPin, clockPin, MSBFIRST, colDataMatrix[i]);
      shiftOut(dataPin, clockPin, MSBFIRST, A[i]);
      digitalWrite(latchPin,HIGH);
      delay(1);
        }
      delay(100);
      noTone(10);
    }else if(button6 == LOW){
      tone(10,NOTE_B3,100);
     for(int i = 0; i < 8 ; i++){
      digitalWrite(latchPin,LOW);
      shiftOut(dataPin, clockPin, MSBFIRST, colDataMatrix[i]);
      shiftOut(dataPin, clockPin, MSBFIRST, B[i]);
      digitalWrite(latchPin,HIGH);
      delay(1);
      }
    delay(100);
      noTone(10);
    }else if(button7 == LOW){
      tone(10,NOTE_C4,100);
     for(int i = 0; i < 8; i++){
      digitalWrite(latchPin,LOW);
      shiftOut(dataPin, clockPin, MSBFIRST, colDataMatrix[i]);
      shiftOut(dataPin, clockPin, MSBFIRST,C2[i]);
      digitalWrite(latchPin,HIGH);
      delay(1);
      }
      delay(100);
      noTone(10);
    }
 
  }

