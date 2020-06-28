#include "Color.h"
void ChangeColor(int ColorSerial)
{ //just make a line break, this API is too long!
  SetConsoleTextAttribute
  (GetStdHandle(STD_OUTPUT_HANDLE), ColorSerial);
}

void WhiteBlack()
  {
    ChangeColor(15);
  }
void BlueBlack()
  {
    ChangeColor(11);
  }
void RedBlack()
  {
    ChangeColor(12);
  }
void YellowBlack()
  {
    ChangeColor(14);
  }

void BlackWhite()
  {
    ChangeColor(240);
  }

void GreenBlack()
  {
    ChangeColor(10);
  }
// void PurpleBlack()
//   {
//     ChangeColor(13);
//   }
// Beep(Frequency, Time);
void RedRed()
  {
    ChangeColor(972);
  }

void BlueBlue()
  {
    ChangeColor(563);
  }

void GreyBrick()
  {
    ChangeColor(119);
  }
void PurplBrick()
  {
    ChangeColor(733);
  }
void GreenBrick()
  {
    ChangeColor(682);
  }
void YellowBrick()
  {
    ChangeColor(750);
  }
void WhiteBrick()
  {
    ChangeColor(767);
  }
