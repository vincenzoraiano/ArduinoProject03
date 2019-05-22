//First of all we must declare a variable for the command, 
//we will use a variable of type char

char LedCommand;

void setup() {
  //Initialize all the pins as an output.
  pinMode(6, OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(2, OUTPUT);

  //open the serial console
  Serial.begin(9600);
}
void loop() {
  
  //We are going to read the value from the serial by using Serial.read(),
  //and store that value inside the variable of type Char
  LedCommand=Serial.read();

  //Conditional cheking if W or w are entered then the withe pin is going HIGH
  //ans the other leds are goin to turn dowm and the message is printed to the console.
  if(LedCommand=='w'|| LedCommand=='W'){
    digitalWrite(6,HIGH);
    digitalWrite(5,LOW);
    digitalWrite(4,LOW);
    digitalWrite(3,LOW);
    digitalWrite(2,LOW);
    Serial.println("The white pin is ON");
  }else if(LedCommand=='y'||LedCommand=='Y'){
    digitalWrite(6,LOW);
    digitalWrite(5,HIGH);
    digitalWrite(4,LOW);
    digitalWrite(3,LOW);
    digitalWrite(2,LOW);
    Serial.println("The Yellow pin is ON");
  }else if(LedCommand=='g'||LedCommand=='G'){
    digitalWrite(6,LOW);
    digitalWrite(5,LOW);
    digitalWrite(4,HIGH);
    digitalWrite(3,LOW);
    digitalWrite(2,LOW);
    Serial.println("The Green pin is ON");
  }else if(LedCommand=='b'||LedCommand=='B'){
    digitalWrite(6,LOW);
    digitalWrite(5,LOW);
    digitalWrite(4,LOW);
    digitalWrite(3,HIGH);
    digitalWrite(2,LOW);
    Serial.println("The Blue pin is ON");
  }else if(LedCommand=='r'||LedCommand=='R'){
    digitalWrite(6,LOW);
    digitalWrite(5,LOW);
    digitalWrite(4,LOW);
    digitalWrite(3,LOW);
    digitalWrite(2,HIGH);
    Serial.println("The Red pin is ON");
  }
 }
