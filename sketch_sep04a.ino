

void loop() {
 
if(digitalread(pirpin)==low)
{
  digitalwrite(ledpin,LOW);
  if(takelowtime)
  {
    lowln=millis();
    takelowtime=false;
    Low phase
  }
  if(!locklow && millis()-lowln>pause)
  {
    locklow=true;
    Serial.print("motion ended at");
    Serial.print((millis()-pause)(1000));
    Serial.println("sec");
    delay(50);
    
    
  }
}
}
