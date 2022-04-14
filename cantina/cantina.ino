
#define BUTTON_1               53
#define BUTTON_2               51
#define BUTTON_3               49
#define BUTTON_4               47
#define BUTTON_5               45
#define BUTTON_6               43
#define BUTTON_7               41
#define BUTTON_8               39
#define BUTTON_9               37
#define BUTTON_10              35
      
#define LED_1                  52 
#define LED_2                  50
#define LED_3                  48
#define LED_4                  46
#define LED_5                  44
#define LED_6                  42
#define LED_7                  40
#define LED_8                  38
#define LED_9                  36
#define LED_10                 34

#define PIN_BEEP              32
#define NEED_UPDATE_STATUS    2000 // 2seconds

bool active_1  = false;
bool active_2  = false;
bool active_3  = false;
bool active_4  = false;
bool active_5  = false;
bool active_6  = false;
bool active_7  = false;
bool active_8  = false;
bool active_9  = false;
bool active_10 = false;

unsigned long previous_1  = 0;
unsigned long previous_2  = 0;
unsigned long previous_3  = 0;
unsigned long previous_4  = 0;
unsigned long previous_5  = 0;
unsigned long previous_6  = 0;
unsigned long previous_7  = 0;
unsigned long previous_8  = 0;
unsigned long previous_9  = 0;
unsigned long previous_10 = 0;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  delay(10);
  pinMode(LED_1,OUTPUT);
  pinMode(LED_2,OUTPUT);
  pinMode(LED_3,OUTPUT);
  pinMode(LED_4,OUTPUT);
  pinMode(LED_5,OUTPUT);
  pinMode(LED_6,OUTPUT);
  pinMode(LED_7,OUTPUT);
  pinMode(LED_8,OUTPUT);
  pinMode(LED_9,OUTPUT);
  pinMode(LED_10,OUTPUT);

  digitalWrite(LED_1,LOW);
  digitalWrite(LED_2,LOW);
  digitalWrite(LED_3,LOW);
  digitalWrite(LED_4,LOW);
  digitalWrite(LED_5,LOW);
  digitalWrite(LED_6,LOW);
  digitalWrite(LED_7,LOW);
  digitalWrite(LED_8,LOW);
  digitalWrite(LED_9,LOW);
  digitalWrite(LED_10,LOW);

  pinMode(BUTTON_1,INPUT);
  pinMode(BUTTON_2,INPUT);
  pinMode(BUTTON_3,INPUT);
  pinMode(BUTTON_4,INPUT);
  pinMode(BUTTON_5,INPUT);
  pinMode(BUTTON_6,INPUT);
  pinMode(BUTTON_7,INPUT);
  pinMode(BUTTON_8,INPUT);
  pinMode(BUTTON_9,INPUT);
  pinMode(BUTTON_10,INPUT);
}

void buzzer(int port){
  Serial.print("BEEEEP ON ");
  Serial.println(port);
  digitalWrite(PIN_BEEP, HIGH);
  delay(300);
  digitalWrite(PIN_BEEP, LOW);
}

void loop() {
  unsigned long currentMillis = millis();
  //////////////////////////////////////////
  //////////////////////////////////////////
  // BUTTON DETECTION AND UPDATE:
  //////////////////////////////////////////
  //////////////////////////////////////////
  //////////////////
  // CAIXA 1
  //////////////////
  if(digitalRead(BUTTON_1)){
    if(currentMillis - previous_1 >= NEED_UPDATE_STATUS){
      previous_1 = currentMillis;  // Remember the time 
      active_1 = true;
      buzzer(1);
    }
  }
  //////////////////
  // CAIXA 2
  //////////////////
  if(digitalRead(BUTTON_2)){
    if(currentMillis - previous_2 >= NEED_UPDATE_STATUS){
      previous_2 = currentMillis;  // Remember the time 
      active_2 = true;
      buzzer(2);
    }
  }
  //////////////////
  // CAIXA 3
  //////////////////
  if(digitalRead(BUTTON_3)){
    if(currentMillis - previous_3 >= NEED_UPDATE_STATUS){
      previous_3 = currentMillis;  // Remember the time 
      active_3 = true;
      buzzer(3);
    }
  }
  //////////////////
  // CAIXA 4
  //////////////////
  if(digitalRead(BUTTON_4)){
    if(currentMillis - previous_4 >= NEED_UPDATE_STATUS){
      previous_4 = currentMillis;  // Remember the time 
      active_4 = true;
      buzzer(4);
    }
  }
  //////////////////
  // CAIXA 5
  //////////////////
  if(digitalRead(BUTTON_5)){
    if(currentMillis - previous_5 >= NEED_UPDATE_STATUS){
      previous_5 = currentMillis;  // Remember the time 
      active_5 = true;
      buzzer(5);
    }
  }
  //////////////////
  // CAIXA 6
  //////////////////
  if(digitalRead(BUTTON_6)){
    if(currentMillis - previous_6 >= NEED_UPDATE_STATUS){
      previous_6 = currentMillis;  // Remember the time 
      active_6 = true;
      buzzer(6);
    }
  }
  //////////////////
  // CAIXA 7
  //////////////////
  if(digitalRead(BUTTON_7)){
    if(currentMillis - previous_7 >= NEED_UPDATE_STATUS){
      previous_7 = currentMillis;  // Remember the time 
      active_7 = true;
      buzzer(7);
    }
  }
  //////////////////
  // CAIXA 8
  //////////////////
  if(digitalRead(BUTTON_8)){
    if(currentMillis - previous_8 >= NEED_UPDATE_STATUS){
      previous_8 = currentMillis;  // Remember the time 
      active_8 = true;
      buzzer(8);
    }
  }
  //////////////////
  // CAIXA 9
  //////////////////
  if(digitalRead(BUTTON_9)){
    if(currentMillis - previous_9 >= NEED_UPDATE_STATUS){
      previous_9 = currentMillis;  // Remember the time 
      active_9 = true;
      buzzer(9);
    }
  }
  //////////////////
  // CAIXA 10
  //////////////////
  if(digitalRead(BUTTON_10)){
    if(currentMillis - previous_10 >= NEED_UPDATE_STATUS){
      previous_10 = currentMillis;  // Remember the time 
      active_10 = true;
      buzzer(10);
    }
  }
  //////////////////////////////////////////
  //////////////////////////////////////////
  // TIMEOUT DETECTION AND UPDATE:
  //////////////////////////////////////////
  //////////////////////////////////////////
  //////////////////
  // CAIXA 1
  //////////////////
  if(currentMillis - previous_1 >= NEED_UPDATE_STATUS && active_1){
    active_1 = false;
  }
  //////////////////
  // CAIXA 2
  //////////////////
  if(currentMillis - previous_2 >= NEED_UPDATE_STATUS && active_2){
    active_2 = false;
  }
  //////////////////
  // CAIXA 3
  //////////////////
  if(currentMillis - previous_3 >= NEED_UPDATE_STATUS && active_3){
    active_3 = false;
  }
  //////////////////
  // CAIXA 4
  //////////////////
  if(currentMillis - previous_4 >= NEED_UPDATE_STATUS && active_4){
    active_4 = false;
  }
  //////////////////
  // CAIXA 5
  //////////////////
  if(currentMillis - previous_5 >= NEED_UPDATE_STATUS && active_5){
    active_5 = false;
  }
  //////////////////
  // CAIXA 6
  //////////////////
  if(currentMillis - previous_6 >= NEED_UPDATE_STATUS && active_6){
    active_6 = false;
  }
  //////////////////
  // CAIXA 7
  //////////////////
  if(currentMillis - previous_7 >= NEED_UPDATE_STATUS && active_7){
    active_7 = false;
  }
  //////////////////
  // CAIXA 8
  //////////////////
  if(currentMillis - previous_8 >= NEED_UPDATE_STATUS && active_8){
    active_8 = false;
  }
  //////////////////
  // CAIXA 9
  //////////////////
  if(currentMillis - previous_9 >= NEED_UPDATE_STATUS && active_9){
    active_9 = false;
  }
  //////////////////
  // CAIXA 10
  //////////////////
  if(currentMillis - previous_10 >= NEED_UPDATE_STATUS && active_10){
    active_10 = false;
  }
  //////////////////////////////////////////
  //////////////////////////////////////////
  // LED UPDATE:
  //////////////////////////////////////////
  //////////////////////////////////////////
  digitalWrite(LED_1,active_1);
  digitalWrite(LED_2,active_2);
  digitalWrite(LED_3,active_3);
  digitalWrite(LED_4,active_4);
  digitalWrite(LED_5,active_5);
  digitalWrite(LED_6,active_6);
  digitalWrite(LED_7,active_7);
  digitalWrite(LED_8,active_8);
  digitalWrite(LED_9,active_9);
  digitalWrite(LED_10,active_10);
}
