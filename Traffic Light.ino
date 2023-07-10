// C++ code
//
int red= 13;
  int yellow= 12;
  int green= 9;
 int ON=1000;
   int OFF=1000;

void setup()
{ 
  pinMode(red, OUTPUT);
  pinMode(yellow, OUTPUT);
  pinMode(green, OUTPUT);
}

void loop()
{
  digitalWrite(red, HIGH);
  delay(ON);
 
  digitalWrite(yellow, HIGH);
  delay(ON);
  digitalWrite(yellow, LOW);
  delay(OFF);
  digitalWrite(yellow, HIGH);
  delay(ON);
  digitalWrite(yellow, LOW);
  delay(OFF);
  digitalWrite(yellow, HIGH);
  delay(ON);
  digitalWrite(yellow, LOW);
  
  
  digitalWrite(red, LOW);
  
  
  digitalWrite(green, HIGH);
  delay(ON);
  digitalWrite(green,LOW);
    delay(OFF);
}