int val;
int tempPin = 1;

void setup()
{
  Serial.begin(9600);
}
void loop()
{
  val = analogRead(tempPin);
  float mv = ( val/1024.0)*5000; 
  float cel = mv/10;
  float celV = cel/100;
  float farh = (cel*9)/5 + 32;

  Serial.print("Requesting temperature");
  Serial.print(" .");
  Serial.print(".");
  Serial.print(".");
  Serial.print(".");
  Serial.print(".");
  Serial.print(".");
  Serial.print(".");
  Serial.print(".");
  Serial.print(".");
  Serial.println();

  Serial.print("TEMPRATURE = ");
  Serial.print(cel);
  Serial.print("*C");
  Serial.println();

  Serial.print("TEMPRATURE = ");
  Serial.print(farh);
  Serial.print("F");
  Serial.println();

  Serial.print("Volt = ");
  Serial.print(celV);
  Serial.print("V");
  Serial.println();

  delay(1000);

  /* uncomment this to get temperature in farenhite 
   Serial.print("TEMPRATURE = ");
   Serial.print(farh);
   Serial.print("*F");
   Serial.println();
   
   
   */
}


