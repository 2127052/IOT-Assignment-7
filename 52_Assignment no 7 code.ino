// C++ code
//
void setup()
{
  pinMode(13, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(5, OUTPUT);
  Serial.begin(9600);
  Serial.println("enter choice=");
}

void loop()
{
  while(Serial.available()!=0)
  {
    char ch=Serial.read();
    switch(ch)
    {
      case 114:
          digitalWrite(13,HIGH);
          digitalWrite(9,LOW);
          digitalWrite(5,LOW);
         break;
      case 121:
          digitalWrite(9,HIGH);
          digitalWrite(13,LOW);
          digitalWrite(5,LOW);
          break;
      case 103:
          digitalWrite(5,HIGH);
          digitalWrite(13,LOW);
          digitalWrite(9,LOW);
          break;
      case 98:
          digitalWrite(5,HIGH);
          delay(1000);
          digitalWrite(5,LOW);
          delay(1000);
      
          break;
      default:
          Serial.println("\nPlease enter valid input");
    }
    }
     
}
