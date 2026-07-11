int in = 2;
int out = 3;
void setup(){
	pinMode(in,INPUT);
	pinMode(out,OUTPUT);
}
voidloop(){
	int sensorValue = digitalRead(in);
	if(sensorValue == HIGH){
		digitalWrite(out,HIGH);
		delay(2000);
	}
	else{
		digitalWrite(OUT,LOW);
	}
}
