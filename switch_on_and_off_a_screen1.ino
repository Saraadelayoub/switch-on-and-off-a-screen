# define led 13
# define Button 8
int PresentButtonState=0;
int NextButtonState=0;
int Counter=0;
void setup()
{
  pinMode(Button,INPUT);
  pinMode(led,OUTPUT);
}

void loop()
{
  PresentButtonState=digitalRead(Button);
  if(PresentButtonState != NextButtonState)
  {
    if(PresentButtonState==1)
    {
      Counter++;
    }
  }
  NextButtonState = PresentButtonState;
  if(Counter % 2 ==0)
  {digitalWrite(led,HIGH);}
  else
  {digitalWrite(led,LOW);}
}