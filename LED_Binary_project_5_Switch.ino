int pin_fifth = 7;
int pin_fRight = 8;
int pin_mRight = 9;
int pin_mLeft = 10;
int pin_fLeft = 11;
int Delay = 1000;




void setup() {
  // put your setup code here, to run once:
pinMode(pin_fRight, OUTPUT);
pinMode(pin_mRight, OUTPUT);
pinMode(pin_mLeft, OUTPUT);
pinMode(pin_fLeft, OUTPUT);
pinMode(pin_fifth, OUTPUT);
pinMode(13, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(13, LOW);

digitalWrite(pin_fifth, LOW);
digitalWrite(pin_fRight, LOW); 
digitalWrite(pin_mRight, LOW); // 0 
digitalWrite(pin_mLeft, LOW);
digitalWrite(pin_fLeft, LOW);

delay(Delay); // otherwise code will be excuted to fast to see led

digitalWrite(pin_fifth, LOW);
digitalWrite(pin_fRight, LOW); 
digitalWrite(pin_mRight, LOW);
digitalWrite(pin_mLeft, LOW); // Binary for number 1
digitalWrite(pin_fLeft, HIGH);
delay(Delay);

digitalWrite(pin_fifth, LOW);
digitalWrite(pin_fRight, LOW); 
digitalWrite(pin_mRight, LOW);
digitalWrite(pin_mLeft, HIGH); //2
digitalWrite(pin_fLeft, LOW);
delay(Delay);

digitalWrite(pin_fifth, LOW);
digitalWrite(pin_fRight, LOW); 
digitalWrite(pin_mRight, LOW); //3
digitalWrite(pin_mLeft, HIGH);
digitalWrite(pin_fLeft, HIGH);
delay(Delay);

digitalWrite(pin_fifth, LOW);
digitalWrite(pin_fRight, LOW); 
digitalWrite(pin_mRight, HIGH); //4
digitalWrite(pin_mLeft, LOW);
digitalWrite(pin_fLeft, LOW);
delay(Delay);

digitalWrite(pin_fifth, LOW);
digitalWrite(pin_fRight, LOW); 
digitalWrite(pin_mRight, HIGH);
digitalWrite(pin_mLeft, LOW);
digitalWrite(pin_fLeft, HIGH); //5
delay(Delay);

digitalWrite(pin_fifth, LOW);
digitalWrite(pin_fRight, LOW); 
digitalWrite(pin_mRight, HIGH);
digitalWrite(pin_mLeft, HIGH); //6
digitalWrite(pin_fLeft, LOW);
delay(Delay);

digitalWrite(pin_fifth, LOW);
digitalWrite(pin_fRight, LOW); 
digitalWrite(pin_mRight, HIGH);
digitalWrite(pin_mLeft, HIGH); //7
digitalWrite(pin_fLeft, HIGH);
delay(Delay);

digitalWrite(pin_fifth, LOW);
digitalWrite(pin_fRight, HIGH); 
digitalWrite(pin_mRight, LOW);
digitalWrite(pin_mLeft, LOW); //8
digitalWrite(pin_fLeft, LOW);
delay(Delay);

digitalWrite(pin_fifth, LOW);
digitalWrite(pin_fRight, HIGH); 
digitalWrite(pin_mRight, LOW);
digitalWrite(pin_mLeft, LOW); //9
digitalWrite(pin_fLeft, HIGH);
delay(Delay);

digitalWrite(pin_fifth, LOW);
digitalWrite(pin_fRight, HIGH); 
digitalWrite(pin_mRight, LOW);
digitalWrite(pin_mLeft, HIGH); //10
digitalWrite(pin_fLeft, LOW);
delay(Delay);

digitalWrite(pin_fifth, LOW);
digitalWrite(pin_fRight, HIGH); 
digitalWrite(pin_mRight, LOW);
digitalWrite(pin_mLeft, HIGH); //11
digitalWrite(pin_fLeft, HIGH);
delay(Delay);

digitalWrite(pin_fifth, LOW);
digitalWrite(pin_fRight, HIGH); 
digitalWrite(pin_mRight, HIGH); //12
digitalWrite(pin_mLeft, LOW);
digitalWrite(pin_fLeft, LOW);
delay(Delay);

digitalWrite(pin_fifth, LOW);
digitalWrite(pin_fRight, HIGH); 
digitalWrite(pin_mRight, HIGH); //13
digitalWrite(pin_mLeft, LOW);
digitalWrite(pin_fLeft, HIGH);
delay(Delay);

digitalWrite(pin_fifth, LOW);
digitalWrite(pin_fRight, HIGH);  // binary for number 14
digitalWrite(pin_mRight, HIGH);
digitalWrite(pin_mLeft, HIGH);
digitalWrite(pin_fLeft, LOW);
delay(Delay);

digitalWrite(pin_fifth, LOW);
digitalWrite(pin_fRight, HIGH); //already have binary 15 with 4 switched here now jusct c and paste
digitalWrite(pin_mRight, HIGH);
digitalWrite(pin_mLeft, HIGH);
digitalWrite(pin_fLeft, HIGH);
delay(Delay);

digitalWrite(pin_fifth, HIGH);
digitalWrite(pin_fRight, LOW); // Beginning of the fifth pin and 16, now can just c and p everything previousely but making pin fifth on
digitalWrite(pin_mRight, LOW);
digitalWrite(pin_mLeft, LOW);
digitalWrite(pin_fLeft, LOW);
delay(Delay);

digitalWrite(pin_fifth, HIGH);
digitalWrite(pin_fRight, LOW); 
digitalWrite(pin_mRight, LOW);
digitalWrite(pin_mLeft, LOW); // Binary for number 17
digitalWrite(pin_fLeft, HIGH);
delay(Delay);

digitalWrite(pin_fifth, HIGH);
digitalWrite(pin_fRight, LOW); 
digitalWrite(pin_mRight, LOW);
digitalWrite(pin_mLeft, HIGH); //18
digitalWrite(pin_fLeft, LOW);
delay(Delay);

digitalWrite(pin_fifth, HIGH);
digitalWrite(pin_fRight, LOW); 
digitalWrite(pin_mRight, LOW); //19
digitalWrite(pin_mLeft, HIGH);
digitalWrite(pin_fLeft, HIGH);
delay(Delay);

digitalWrite(pin_fifth, HIGH);
digitalWrite(pin_fRight, LOW); 
digitalWrite(pin_mRight, HIGH); //20
digitalWrite(pin_mLeft, LOW);
digitalWrite(pin_fLeft, LOW);
delay(Delay);

digitalWrite(pin_fifth, HIGH);
digitalWrite(pin_fRight, LOW); 
digitalWrite(pin_mRight, HIGH);
digitalWrite(pin_mLeft, LOW);
digitalWrite(pin_fLeft, HIGH); //21
delay(Delay);

digitalWrite(pin_fifth, HIGH);
digitalWrite(pin_fRight, LOW); 
digitalWrite(pin_mRight, HIGH);
digitalWrite(pin_mLeft, HIGH); //22
digitalWrite(pin_fLeft, LOW);
delay(Delay);

digitalWrite(pin_fifth, HIGH);
digitalWrite(pin_fRight, LOW); 
digitalWrite(pin_mRight, HIGH);
digitalWrite(pin_mLeft, HIGH); //23
digitalWrite(pin_fLeft, HIGH);
delay(Delay);

digitalWrite(pin_fifth, HIGH);
digitalWrite(pin_fRight, HIGH); 
digitalWrite(pin_mRight, LOW);
digitalWrite(pin_mLeft, LOW); //24
digitalWrite(pin_fLeft, LOW);
delay(Delay);

digitalWrite(pin_fifth, HIGH);
digitalWrite(pin_fRight, HIGH); 
digitalWrite(pin_mRight, LOW);
digitalWrite(pin_mLeft, LOW); //25
digitalWrite(pin_fLeft, HIGH);
delay(Delay);

digitalWrite(pin_fifth, HIGH);
digitalWrite(pin_fRight, HIGH); 
digitalWrite(pin_mRight, LOW);
digitalWrite(pin_mLeft, HIGH); //26
digitalWrite(pin_fLeft, LOW);
delay(Delay);

digitalWrite(pin_fifth, HIGH);
digitalWrite(pin_fRight, HIGH); 
digitalWrite(pin_mRight, LOW);
digitalWrite(pin_mLeft, HIGH); //27
digitalWrite(pin_fLeft, HIGH);
delay(Delay);

digitalWrite(pin_fifth, HIGH);
digitalWrite(pin_fRight, HIGH); 
digitalWrite(pin_mRight, HIGH); //28
digitalWrite(pin_mLeft, LOW);
digitalWrite(pin_fLeft, LOW);
delay(Delay);

digitalWrite(pin_fifth, HIGH);
digitalWrite(pin_fRight, HIGH); 
digitalWrite(pin_mRight, HIGH); //29
digitalWrite(pin_mLeft, LOW);
digitalWrite(pin_fLeft, HIGH);
delay(Delay);

digitalWrite(pin_fifth, HIGH);
digitalWrite(pin_fRight, HIGH);  // binary for number 30
digitalWrite(pin_mRight, HIGH);
digitalWrite(pin_mLeft, HIGH);
digitalWrite(pin_fLeft, LOW);
delay(Delay);

digitalWrite(pin_fifth, HIGH);
digitalWrite(pin_fRight, HIGH); // 31 not 32 as 0 counts as a number so 32 numbers from 5 switches
digitalWrite(pin_mRight, HIGH);
digitalWrite(pin_mLeft, HIGH);
digitalWrite(pin_fLeft, HIGH);
digitalWrite(pin_fifth, HIGH);
delay(Delay);
}
