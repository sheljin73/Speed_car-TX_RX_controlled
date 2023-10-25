#define RCPin 22
signed int RCValue;
signed int pwmValue;

void setup() {
   Serial.begin(9600);
  pinMode(RCPin, INPUT);
  // put your setup code here, to run once:

pinMode(23, OUTPUT); 
pinMode(25, OUTPUT); 
}

void loop() {
  
  
   RCValue = pulseIn(RCPin, HIGH);
   pwmValue=abs(RCValue-1500);
       analogWrite(2,pwmValue);
   
  Serial.println(RCValue);
   Serial.println(pwmValue);
  
  if(RCValue>1500)
  {
    
  digitalWrite(23,HIGH);
  digitalWrite(25,LOW);
  }
  else
{
  digitalWrite(23,LOW);
  digitalWrite(25,HIGH);
}

}
