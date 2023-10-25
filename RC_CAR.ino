#define RCPin 6
signed int RCValue;
signed int pwmValue;

void setup() {
   Serial.begin(9600);
  pinMode(RCPin, INPUT);
  // put your setup code here, to run once:

pinMode(7, OUTPUT); 
pinMode(5, OUTPUT); 
}

void loop() {
  
  
   RCValue = pulseIn(RCPin, HIGH);
   pwmValue=abs(RCValue-1500);
       analogWrite(2,pwmValue);
   
  Serial.println(RCValue);
   Serial.println(pwmValue);
  
  if(RCValue>1500)
  {
    
  digitalWrite(7,HIGH);
  digitalWrite(5,LOW);
  }
  else
{
  digitalWrite(7,LOW);
  digitalWrite(5,HIGH);
}

}
