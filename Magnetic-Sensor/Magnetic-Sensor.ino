const int sensor = 7;

int state; // 0 close - 1 open wwitch

void setup()
{
	pinMode(sensor, INPUT_PULLUP);
}

void loop()
{
	state = digitalRead(sensor);
	
	if (state == HIGH){
    Serial.println("HIGH");
	}
	else{
		Serial.println("LOW");
	}
	delay(200);
}