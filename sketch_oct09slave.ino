int byt=8;
int prijem[8];
byte LED = 2;
char c=' ';
int a;
void setup() 
{
   pinMode(LED, OUTPUT);
   Serial.begin(9600);
   Serial.println("START");
}
 
 
void loop()
{

        if(Serial.available()){
        a=Serial.parseInt();
        
        Serial.print(a);
      Serial.println("\n");
        }
   }
 
