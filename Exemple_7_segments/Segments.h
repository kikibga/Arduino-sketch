void Segments(int num)
{
   switch(num)
   {
     case 0:
      PORTD=B00000011;
      digitalWrite(8,HIGH);
     break;
     case 1:
      PORTD=B11100111;
      digitalWrite(8,HIGH);
     break;
     case 2:
      PORTD=B10010011;
      digitalWrite(8,LOW);
     break;
     case 3:
      PORTD=B11000011;
      digitalWrite(8,LOW);
     break;
     case 4:
      PORTD=B01100111;
      digitalWrite(8,LOW);
     break;
     case 5:
      PORTD=B01001011;
      digitalWrite(8,LOW);
     break;
     case 6:
      PORTD=B00001011;
      digitalWrite(8,LOW);
     break;
     case 7:
      PORTD=B11100011;
      digitalWrite(8,HIGH);
     break;
     case 8:
      PORTD=B00000011;
      digitalWrite(8,LOW);
     break;
     case 9:
      PORTD=B01000011;
      digitalWrite(8,LOW);
     break;
   }
}
