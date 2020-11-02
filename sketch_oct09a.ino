int byt=8;
char poslat[]={0,0,0,0,1,1,1,1};

void setup() 
{
    Serial.begin(9600);  
    // wait for the serial port to connect. Required for Leonardo/Micro native USB port only
    while (!Serial) {  ;  }
}
void loop() 
{
  int i;
    Serial.print(235);
delay(1000);
}
