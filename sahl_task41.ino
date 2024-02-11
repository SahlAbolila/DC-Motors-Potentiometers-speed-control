
int button1 = 5 ;
int button2 = 10 ;
int controller1 = 12 ;
int controller2 = 13 ;
int reading1 = 0 ;
int reading2 = 0 ;
int reading3 
int uppermotor = 7 ;
int downmotor = 8 ;

void setup()
{
  
  Serial.begin(9600);
  pinMode(button1,INPUT);
  pinMode(button2,INPUT);
  pinMode(controller1,INPUT);
  pinMode(controller2,INPUT);
  pinMode(uppermotor,OUTPUT);
  pinMode(downmotor,OUTPUT);
  
  
}

void loop()
{
   
  
  if(Serial.available()) {
reading3=Serial.read();
switch(reading3){
case ‘U’:
digitalWrite(uppermotor,HIGH);
break;
case ‘D’:
digitalWrite(downmotor,HIGH);
break;
case ‘S’: 
digitalWrite(uppermotor,LOW);
digitalWrite(downmotor,LOW);

break;
}
}
  
}