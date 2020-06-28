#include "Menu.h"

#define ITEM 3//Now, we have 3 items on menu

void OptMenu(PageStatus *pStat)
  {
    if (pStat->Played)//If user has played once
        OptFinalScore(pStat);
    int SelectedItem = pStat->Item;
    StrGrp Option[5], *pOpt = Option;//Strings of Menu items
    InitOption(pOpt);
    ShowOption(pOpt, SelectedItem);
  }

void InitOption(StrGrp *pOpt)
  {
      strcpy(pOpt->Str, "New Game");
      pOpt++;
      strcpy(pOpt->Str, "Help");
      pOpt++;
      strcpy(pOpt->Str, "Exit");
      pOpt++;
      strcpy(pOpt->Str, "Setting");//This function is unfinished
      pOpt++;
      strcpy(pOpt->Str, "Summary");//unfinished too
  }

void ShowOption(StrGrp *pOpt, int SelectedItem)
  {
    for (int i = 0; i < ITEM; i++ , pOpt++)
      {
        GoToXY(22, 5+i);
        Polish(i, SelectedItem);
        puts(pOpt->Str);
        EndPolish();
      }
  }

void Polish(int CurrentItem, int SelectedItem)
  {
    if (CurrentItem == SelectedItem)
      BlackWhite();
  }

void EndPolish()
  {
      WhiteBlack();
  }

void OptFinalScore(PageStatus *pStat)
  {
    int FinalScore = pStat->FinalScore;
    GoToXY(19, 1);
    RedBlack();
    printf("--=Game Over--=");

    GoToXY(17, 2);
    YellowBlack();
    printf("Your FinalScore:%d", FinalScore);
    WhiteBlack();
  }
