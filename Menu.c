#include "Menu.h"

void Menu()
 {
    PageStatus Status, *pStat= &Status;
    HideCursor();//WindowsAPI
    SetWindowSize();//WindowsAPI
    InitMenu(pStat);
    while (1)
      {
        OptMenu(pStat);
        OperateMenu(pStat);
        Jump(pStat);//To game or help
        Exit(pStat);
      }
 }

void InitMenu(PageStatus *pStat)
  {
    int TopItem = 0, BottomItem = 3 - 1;
    pStat->Item = TopItem, pStat->LastItem = BottomItem;
    pStat->Enter = 0;
  }

void OperateMenu(PageStatus *pStat)
  {
    char Key;
    if (kbhit())//If hit keyboard
      Key = getch();
    pStat->Key = Key;
    if (Key == 72)
      UpItem(pStat);
    if (Key == 80)
      DownItem(pStat);
    if (Key == 13)
      pStat->Enter = 1;//Jump to page
    ResetItem(pStat);
  }
void Jump(PageStatus *pStat)//Jump to some pages
  {
    char Item = pStat->Item;
    char Enter = pStat->Enter;
    if (Enter)
      {
        if (Item == 0)
          Game(pStat);
        if (Item == 1)
          Help(pStat);
        if (Item == 2)
          exit(0);
      }
    Enter = 0;
  }

void UpItem(PageStatus *pStat)
  {
      pStat->Item = pStat->Item - 1;
  }
void DownItem(PageStatus *pStat)
  {
      pStat->Item = pStat->Item + 1;
  }
void ResetItem(PageStatus *pStat)
  {
    int NextItem = pStat->Item;
    int LastItem = pStat->LastItem;

    if (NextItem < 0)//Move above TopItem
      pStat->Item = pStat->LastItem;

    if (NextItem > LastItem)//move BottomItem
      pStat->Item = 0;
  }
void Exit(PageStatus *pStat)
  {
    char Key = pStat->Key;
    if (Key == 'q')
      exit(0);
    if (Key == 3)//Ctrl + c
      exit(0);
    if (Key == 27)//Esc
      exit(0);
  }
