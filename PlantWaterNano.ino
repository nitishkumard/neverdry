int motor1pin1 = 2;
int motor1pin2 = 3;

int motor2pin1 = 4;
int motor2pin2 = 5;

void setup() 
{
  // put your setup code here, to run once:
  pinMode(motor1pin1, OUTPUT);
  pinMode(motor1pin2, OUTPUT);
  pinMode(motor2pin1, OUTPUT);
  pinMode(motor2pin2, OUTPUT);

  //pinMode(9, OUTPUT); 
  //pinMode(10, OUTPUT);
}

void loop() 
{
  runPumpMotor("pump1",5000); 
  delay(3600000);
}

void runPumpMotor(String motorname, long duration) 
{
  if(motorname == "pump1")
  {
    //Controlling speed (0 = off and 255 = max speed):
    //analogWrite(9, 100); //ENA pin

    //Controlling spin direction of motors:
    digitalWrite(motor1pin1, HIGH);
    digitalWrite(motor1pin2, LOW);  
  }
  if(motorname == "pump2")
  {
    //Controlling speed (0 = off and 255 = max speed):
    //analogWrite(10, 100); //ENA pin

    //Controlling spin direction of motors:
    digitalWrite(motor1pin1, HIGH);
    digitalWrite(motor1pin2, LOW);  
  }
  delay(duration);
  stopPumpMotor(motorname);
}

void stopPumpMotor(String motorname) 
{
  if(motorname == "pump1")
  {
    //Controlling speed (0 = off and 255 = max speed):
    //analogWrite(9, 100); //ENA pin

    //Controlling spin direction of motors:
    digitalWrite(motor1pin1, LOW);
    digitalWrite(motor1pin2, LOW);  
  }
  if(motorname == "pump2")
  {
    //Controlling speed (0 = off and 255 = max speed):
    //analogWrite(10, 100); //ENA pin

    //Controlling spin direction of motors:
    //digitalWrite(motor2pin1, LOW);
    //digitalWrite(motor2pin2, LOW);
  }
  delay(2000);
}
