bool gameOver ()  
{
  if (y <= 11 || y >= 59 || x >= 1 || x >= 119)
 {
    Oled.setCursor(0,10);
    Oled.print("GAME OVER!");
    return false;
 }
    else
  {
    return false;
  }
}


