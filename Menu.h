#ifndef _MENU_
#define _MENU_

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

typedef struct//PageStatus
{
  char Key;
  int Enter;
  int Item, LastItem;
  int FinalScore;
  int Played;//See if user Played
}PageStatus;

#include "OptMenu.h"
#include "Game.h"

void Menu();
void InitMenu(PageStatus *pStat);
void Jump(PageStatus *pStat);

void OperateMenu(PageStatus *pStat);
void UpItem(PageStatus *pStat);
void DownItem(PageStatus *pStat);
void ResetItem(PageStatus *pStat);

void Exit(PageStatus *pStat);
#include "WinAPI.h"
#include "Color.h"
#include "Help.h"

#endif
