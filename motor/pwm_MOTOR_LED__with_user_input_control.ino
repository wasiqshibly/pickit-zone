void setup() {
pinMode(9,OUTPUT);
Serial.begin(9650);

}

void loop() {

   if (Serial.available() > 0) {
                int p = Serial.parseInt();

      
                Serial.println(p,DEC);
  if(p==1)
  {
  p+=90;
analogWrite(9,p);
  }
  else if(p==2)
  {

  p+=250;
analogWrite(9,p);
    
  }
}
  
  // put your main code here, to run repeatedly:

}
