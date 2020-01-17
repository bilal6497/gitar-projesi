const int but1 = 2;
const int but2 = 3;
const int but3 = 4;
const int but4 = 5;
int butin1 = 0;         
int butin2 = 0;         
int butin3 = 0; 
int butin4 = 0;


void setup() {
   Serial.begin(9600);
   pinMode(but1, INPUT_PULLUP);
   pinMode(but2, INPUT_PULLUP);
   pinMode(but3, INPUT_PULLUP);
   pinMode(but4, INPUT_PULLUP);
}

void loop() {
  delay(200);
  char keys[5];
  int g=0;
  butin1 = digitalRead(but1);
  butin2 = digitalRead(but2);
  butin3 = digitalRead(but3);
  butin4 = digitalRead(but4);
  if (butin1 == HIGH) {
    keys[g]='z';
  }else{
    keys[g]='1';
  }
  
  g++;
  
  if (butin2 == HIGH) {
    keys[g]='z';
  }else{
    keys[g]='2';
  }
  
  g++;
  
  if (butin3 == HIGH) {
    keys[g]='z';
  }else{
    keys[g]='3';
  }
  
  g++;
  if (butin4 == HIGH) {
    keys[g]='z';
  }else{
    keys[g]='4';
  }
  g++;
  keys[g]='n';
  Serial.println(keys);
}
