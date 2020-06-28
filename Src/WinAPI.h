#ifndef _WINAPI_
#define _WINAPI_

void FullScreen();
void SetWindowSize();
void HideCursor();
void GoToXY(int x, int y);

void ChangeColor(int Color);
void ClearScreen();

void StartGameSound();
void GameOverSound();
void HitBrickSound();

void DecelImpact();

#endif
