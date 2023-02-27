/*/Acionamento Rele 
	@since 27/02/2023
	@version V1
	@author Wesley Paulino
/*/
void setup() {
  pinMode(7, OUTPUT);// connected to S terminal of Relay

}

void loop() {

digitalWrite(7,HIGH);// turn relay ON
delay(5000);// keep it ON for 5 seconds

digitalWrite(7, LOW);// turn relay OFF
delay(5000);// keep it OFF for 5 seconds

}
