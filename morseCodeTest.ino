/*Morse Code Transmitter using Buzzer and arduino
 * by Tanmoy Munshi 01/10/2019
 * Linkedin: bit.ly/tanmoyCV
 */

const int buzzer = 9;       // INSERT ONE TERMINAL TO PIN 9 OF ARDUINO AND ANOTHER TO GROUND
char code[] = "hello world";

int dotLen = 100;
int dashLen = dotLen*3;
int elePause = dotLen;
int space = dotLen*10;
int wordPause = dotLen*7;


void setup() {
  Serial.begin(9600);
  pinMode(buzzer, OUTPUT);
}

void loop() {
  for(int i=0;i<sizeof(code);i++){
    char newChar = code[i];
    morse(newChar);
  }

  delay(5000);
}

void dash(){
  tone(buzzer, 3000);
  delay(dashLen);
  noTone(buzzer);
  delay(dashLen);
}

void dot(){
  tone(buzzer, 3000);
  delay(dotLen);
  noTone(buzzer);
  delay(dotLen);
}

/*void dashLen(){
  tone(buzzer, 3000)
  delay(dashLen)
  noTone(buzzer)
  delay(dashLen)  
}*/

void spacee(){
  noTone(buzzer);
  delay(space);
}

void morse(char newChar){
  switch(newChar){
    case 'a':
    dot();
    dash();
    break;
    case 'b':
    dash();
    dot();
    dot();
    dot();
    break;
    case 'c':
    dash();
    dot();
    dash();
    dot();
    break;
    case 'd':
    dash();
    dot();
    dot();
    break;
    case 'e':
    dot();
    break;
    case 'f':
    dot();
    dot();
    dash();
    dot();
    break;
    case 'g':
    dash();
    dash();
    dot();
    break;
    case 'h':
    dot();
    dot();
    dot();
    dot();
    break;
    case 'i':
    dot();
    dot();
    break;
    case 'j':
    dot();
    dash();
    dash();
    dash();
    break;
    case 'k':
    dash();
    dot();
    dash();
    break;
    case 'l':
    dot();
    dash();
    dot();
    dot();
    break;
    case 'm':
    dash();
    dash();
    break;
    case 'n':
    dash();
    dot();
    break;
    case 'o':
    dash();
    dash();
    dash();
    break;
    case 'p':
    dot();
    dash();
    dash();
    dot();
    break;
    case 'q':
    dash();
    dash();
    dot();
    dash();
    break;
    case 'r':
    dot();
    dash();
    dot();
    break;
    case 's':
    dot();
    dot();
    dot();
    break;
    case 't':
    dash();
    break;
    case 'u':
    dot();
    dot();
    dash();
    break;
    case 'v':
    dot();
    dot();
    dash();
    break;
    case 'w':
    dot();
    dash();
    dash();
    break;
    case 'x':
    dash();
    dot();
    dot();
    dash();
    break;
    case 'y':
    dash();
    dot();
    dash();
    dash();
    break;
    case 'z':
    dash();
    dash();
    dot();
    dot();
    break;
    case ' ':
    spacee();
    break;
  }
}
