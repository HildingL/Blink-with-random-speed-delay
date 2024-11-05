int randomtime; //crate the variable randomtime


void setup() {
  // put your setup code here, to run once:
pinMode(13, OUTPUT); //set pin 13 as output
randomtime = random(5, 10000); //genrate a random time between 50 and 10000 milliseconds
}

void loop() {
  // put your main code here, to run repeatedly:
digitalWrite(13, HIGH); //set pin 13 high/on
delay(randomtime); //wait the random time
digitalWrite(13, LOW); //set pin 13 low/off
delay(randomtime); //wait the random time
}
