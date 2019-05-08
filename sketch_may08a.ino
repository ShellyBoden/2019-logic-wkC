int btn = 2;
int led = 13;
int btnState=0;
void setup() {
  // put your setup code here, to run once:
  pinMode(led,OUTPUT);
  pinMode(btn,INPUT);
  digitalWrite(btn,HIGH);
}

void loop() {
  // put your main code here, to run repeatedly:
  btnState = digitalRead(btn);
  if(btnState==HIGH){
    digitalWrite(led,LOW);
  }
  else{
    digitalWrite(led,HIGH);
  }
}
