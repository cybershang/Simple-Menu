#include "Help.h"
void Help(PageStatus *pStat)
  {
    system("cls");

    int Continue = 1;
    while (Continue)
      {
        system("cls");
        ShowHelp();
        OperateHelp(&Continue);
      }
    pStat->Enter = 0;
    system("cls");
  }

void ShowHelp()
  {
    GoToXY(23,5);
    printf("Help\n");
    GoToXY(8,6);
    BlueBlack();
    printf("You can use q/Esc to quit any page");
}

void OperateHelp(int *Continue)
  {
    char Key;
    if (kbhit)
      Key = getch();
    if (Key == 113)//q
      *Continue = 0;
    if (Key == 27)//ESC
      *Continue = 0;
  }
