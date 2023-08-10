
void setup()
{
  for (byte i=2;i<=5;i++)pinMode(i,1);
  Serial.begin(9600);
}

void loop()
{
  if(Serial.available()>0){
  char reading=Serial.read();
 
    for (byte i=0;i<4;i++)
      digitalWrite(i+2,0);
    
    switch(reading){
    case 'F':for(byte i=0;i<4;i+=2)digitalWrite(i+2,1);break;
    case 'R':digitalWrite(2,1);break;
    case 'L':digitalWrite(4,1);break;      
    case 'B':for(byte i=1;i<4;i+=2)digitalWrite(i+2,1);break;      
    }

  }  
}

// R --> Right
// L --> Left
// F --> Forward
// B --> Backward
// S --> Stop