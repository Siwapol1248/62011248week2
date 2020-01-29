int clk_pin = 13; //SHCP
int latch_pin = 10; //STCP
int data_pin = 11; //DS

void setup()
{
  pinMode(clk_pin, OUTPUT);
  pinMode(latch_pin, OUTPUT);
  pinMode(data_pin, OUTPUT);
}

void loop()
{
  for (int i = 0; i < 16; i++)
  {
    digitalWrite(latch_pin, LOW);
    for (int c = 0; c < 16; c++)
    {
      if (c == i)
      {
        digitalWrite(data_pin, HIGH);
      }
      else
      {
        digitalWrite(data_pin, LOW);
      }
      digitalWrite(clk_pin, HIGH);
      digitalWrite(clk_pin, LOW);
    }
    digitalWrite(latch_pin, HIGH);
    delay(100);
  }
}
