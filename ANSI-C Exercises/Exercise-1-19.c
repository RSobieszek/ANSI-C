

#include <stdio.h>

#define MAXLINE 1000

char reverse(char tab[], int dw);

int main()
{
  /* dw - zmienna określająca długość wiersza*/
  int i, c;
  char tab[MAXLINE];
  
  c = 0;
  while (c != 'x')
  {
    for (i = 0; (c = getchar()) != '\n' && c != 'x'; ++i)
    {
      tab[i] = c;
    }

    reverse(tab, i);

  }
  return 0;
}

char reverse(char tab[], int dw)
{
  int j, k;
  char tabrev[MAXLINE]; /* odwrócona tablica*/
  
  --dw;           /*pomijam enter na końcu tab[] tak żeby się nie wypisywał lub nie chce przepisywać niezdefiniowanego indeksu z tablicy*/
  
//  for(j = 0; j <= MAXLINE; ++j)
//    tabrev[j] = '\0';
  
  for (j = 0; j <= dw; j++)
  {
    tabrev[j] = tab[dw-j];
  }
  
  tabrev[j] = '\0';
  
  printf("%s\n",tabrev);
  
}