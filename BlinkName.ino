using namespace std;
int led = D7;

void setup() 
{
    pinMode(led, OUTPUT);
}

void dash()
{
    digitalWrite(led, HIGH);
    delay(1500);
    digitalWrite(led, LOW);
    delay(100);
}

void dot()
{
    digitalWrite(led, HIGH);
    delay(500);
    digitalWrite(led, LOW);
    delay(100);
}

void firstname() 
{
    //K
    dash();
    dot();
    dash();
    
    //A
    dot();
    dash();
    
    //I
    dot();
    dot();
}

void lastname()
{
    //L
    dot();
    dash();
    dot();
    dot();
    
    //A
    dot();
    dash();
    
    //M
    dash();
    dash();
}

void loop()
{
    firstname();
}
