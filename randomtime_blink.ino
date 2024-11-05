int randomtime; //crate the variable randomtime
int outputpin = 13; //setting the outputpin to 13

void setup() { // put your setup code here, to run once:
pinMode(outputpin, OUTPUT); //set pin 13 as output
randomtime = random(50, 5000); //genrate a random time between 50 and 1000 milliseconds
}

void loop() { // put your main code here, to run repeatedly:
digitalWrite(outputpin, HIGH); //set the outputpin high/on
delay(randomtime); //wait the random time
digitalWrite(outputpin, LOW); //set the outputpin low/off
delay(randomtime); //wait the random time
digitalWrite(outputpin, HIGH); //set the outputpin high/on
delay(randomtime); //wait the random time
digitalWrite(outputpin, LOW); //set the outputpin low/off
delay(randomtime); //wait the random time
randomtime = random(50, 5000); //genrate a new random time between 50 and 1000 milliseconds
}
/*
 By Hilding Lind
 Github @HildingL
 Hackclub slack @Hilding Lind
*/
