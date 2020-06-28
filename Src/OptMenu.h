#ifndef _HINT_
#define _HINT_

typedef struct//StrGrp
{
  char Str[20];
}StrGrp;

typedef struct
 {
   int X, Y;
   int StartX, EndX;
   int StartY, EndY;
 }PicRange;

#include <stdio.h>
#include <string.h>
#include "Color.h"
#include "Output.h"
#include "Menu.h"
#include "WinAPI.h"
void OptMenu(PageStatus *pStat);
void InitOption(StrGrp *pOpt);
void ShowOption(StrGrp *p, int SelectedItem);
void Polish(int CurrentItem, int SelectedItem);
void EndPolish();
void OptFinalScore(PageStatus *pStat);

#endif
