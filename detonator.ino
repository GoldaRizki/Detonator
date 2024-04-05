
// detonator

#define BUZZER 8
#define TRIGGER 10

int suara;

void setup() {
  // put your setup code here, to run once:

pinMode(BUZZER, OUTPUT);
pinMode(TRIGGER, OUTPUT);

digitalWrite(TRIGGER, HIGH);


beep(5, 1000);
beep(10, 500);
beep(20, 100);

digitalWrite(TRIGGER, LOW);
delay(4000);
digitalWrite(TRIGGER, HIGH);

}

void loop() {
  // put your main code here, to run repeatedly:

}

void beep(int interval, int waktu){

  suara = waktu / 3; 

  for(int i=0;i<interval;i++){
  
    digitalWrite(BUZZER, HIGH);
    delay(suara);
    digitalWrite(BUZZER, LOW);
    delay(waktu);

  }

}
