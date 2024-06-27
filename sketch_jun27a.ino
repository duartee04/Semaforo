#define led_verde 32
#define led_verde2 21
#define led_amarelo 26
#define led_amarelo2 4
#define led_vermelho 14
#define led_vermelho2 18
#define echo 35
#define trig 12

void setup() {
  pinMode(led_vermelho, OUTPUT);
  pinMode(led_amarelo, OUTPUT);
  pinMode(led_verde, OUTPUT);
  pinMode(led_verde2, OUTPUT);
  pinMode(led_amarelo2, OUTPUT);
  pinMode(led_vermelho2, OUTPUT);
  pinMode(echo, INPUT);
  pinMode(trig, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  digitalWrite(led_vermelho, HIGH);
  digitalWrite(led_verde2, HIGH);
  digitalWrite(led_vermelho2, LOW);

  digitalWrite(trig, HIGH);
  delay(1);
  digitalWrite(trig, LOW);

  int distancia = pulseIn(echo, HIGH) * 0.0343 / 2;

  Serial.println(distancia);
  delay(100);
  if(distancia <= 20){
    delay(2000);
  digitalWrite(led_verde2, LOW);
  digitalWrite(led_amarelo2, HIGH);
  delay(2000);
  digitalWrite(led_amarelo2, LOW);
  digitalWrite(led_vermelho, LOW);
  digitalWrite(led_vermelho2, HIGH);
  digitalWrite(led_verde, HIGH);
  delay(5000);
  digitalWrite(led_verde, LOW);
  digitalWrite(led_amarelo, HIGH);
  delay(2000);
   digitalWrite(led_amarelo, LOW);
  digitalWrite(led_vermelho2, LOW);
  }
}
