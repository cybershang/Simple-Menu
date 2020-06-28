#include <windows.h>
#include "WinAPI.h"

void HideCursor()
  {
    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO CursorInfo;
    GetConsoleCursorInfo(handle, &CursorInfo);
    CursorInfo.bVisible = 0;
    SetConsoleCursorInfo(handle, &CursorInfo);
  }

void SetWindowSize()
  {
    system("mode con cols=51 lines=20");
  }

void GoToXY(int x, int y)
  {
      COORD pos = {x,y};
      HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
      SetConsoleCursorPosition(handle, pos);
  }

void HitBoardSound()
  {
    int Board = 1200;
    Beep(Board, 100);
  }

void StartGameSound()
  {
    for ( int F = 500; F <= 700; F = F + 100)
      Beep(F, 100);
  }

void GameOverSound()
  {
    for ( int F = 700; F >= 500; F = F - 100)
      Beep(F, 100);
  }

void HitBrickSound()
  {
    int Brick = 3000;
    Beep(Brick,60);
  }


void ClearScreen()
  {
    system("cls");//ClearScreen
  }
