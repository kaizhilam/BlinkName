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

void morse(char text)
{
    switch(text)
    {
        case 'a':
            dot();
            dash();
            break;
        case 'b':
            dash();
            dot();
            dot();
            dot();
            break;
        case 'c':
            dash();
            dot();
            dash();
            dot();
            break;
        case 'd':
            dash();
            dot();
            dot();
            break;
        case 'e':
            dot();
            break;
        case 'f':
            dot();
            dot();
            dash();
            dot();
            break;
        case 'g':
            dash();
            dash();
            dot();
            break;
        case 'h':
            dot();
            dot();
            dot();
            break;
        case 'i':
            dot();
            dot();
            break;
        case 'j':
            dot();
            dash();
            dash();
            dash();
            break;
        case 'k':
            dash();
            dot();
            dash();
            break;
        case 'l':
            dot();
            dash();
            dot();
            dot();
            break;
        case 'm':
            dash();
            dash();
            break;
        case 'n':
            dash();
            dot();
            break;
        case 'o':
            dash();
            dash();
            dash();
            break;
        case 'p':
            dot();
            dash();
            dash();
            dot();
            break;
        case 'q':
            dash();
            dash();
            dot();
            dash();
            break;
        case 'r':
            dot();
            dash();
            dot();
            break;
        case 's':
            dot();
            dot();
            dot();
            break;
        case 't':
            dash();
            break;
        case 'u':
            dot();
            dot();
            dash();
            break;
        case 'w':
            dot();
            dash();
            dash();
            break;
        case 'x':
            dash();
            dot();
            dot();
            dash();
            break;
        case 'y':
            dash();
            dot();
            dash();
            dash();
            break;
        case 'z':
            dash();
            dash();
            dot();
            dot();
            break;
    }
}

void loop()
{
    morse('k');
    morse('a');
    morse('i');
}
