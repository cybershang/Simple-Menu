#include <windows.h>
#include "WinAPI.h"

void HideCursor()
  {
    HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
    CONSOLE_CURSOR_INFO CursorInfo;
    GetConsoleCursorInfo(handle, &CursorInfo);
    CursorInfo.bVisible = 0;
    SetConsoleCursorInfo(handle, &CursorInfo);
  }//too hard
void SetWindowSize()
  {
    system("mode con cols=51 lines=20");
  }
void FullScreen()
  {
    HWND hwnd = GetForegroundWindow();
    int cx = GetSystemMetrics(SM_CXSCREEN);            /* 屏幕宽度 像素 */
    int cy = GetSystemMetrics(SM_CYSCREEN);            /* 屏幕高度 像素 */

    LONG l_WinStyle = GetWindowLong(hwnd,GWL_STYLE);   /* 获取窗口信息 */
    /* 设置窗口信息 最大化 取消标题栏及边框 */
    SetWindowLong(hwnd,GWL_STYLE,(l_WinStyle | WS_POPUP | WS_MAXIMIZE) & ~WS_CAPTION & ~WS_THICKFRAME & ~WS_BORDER);

    SetWindowPos(hwnd, HWND_TOP, 0, 0, 50, 50, 0);
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
