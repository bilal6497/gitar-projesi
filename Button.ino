// Buton okuma 

int Button1 = 9;
int Button2 = 10;
int Button3 = 11;
int Button4 = 12;

void setup(){

   Serial.begin(9600);
  pinMode(Button1, INPUT_PULLUP);
  pinMode(Button2, INPUT_PULLUP);
  pinMode(Button3, INPUT_PULLUP);
  pinMode(Button4, INPUT_PULLUP);

}

void loop() {
 int button1_durum = digitalRead(Button1);
 int button2_durum = digitalRead(Button2);
 int button3_durum = digitalRead(Button3);
 int button4_durum = digitalRead(Button4);
 
 Serial.print("Button-1: " + button1_durum); 
 Serial.print("Button-2: " + button2_durum);
 Serial.print("Button-3: " + button3_durum);
 Serial.print("Button-4: " + button4_durum);


 if(digitalRead(Button1) == 1);

 // 1'nci buttona basılıyorsa yapılacak olan 

 
 if(digitalRead(Button2) == 1);

 
// 2'nci buttona basılıyorsa yapılacak olan 


 if(digitalRead(Button3) == 1);


// 3'ncü buttona basılıyorsa yapılcak olan


 if(digitalRead(Button4) == 1);


// 4'üncü buttona basılıyorsa yapılacak olan


}
