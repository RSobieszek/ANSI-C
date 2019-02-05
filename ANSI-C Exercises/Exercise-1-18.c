/* x zastępuje EOF*/

#include <stdio.h> 

#define MAXLINE 1000 /*maksymalny rozmiar wiersza*/
#define IN 1
#define OUT 0

int get_lines(char wiersz[], int maxline);

int main()
{
  int len;                /*długość wiersza*/
  char wiersz[MAXLINE];    /*tablica do której zapisuje się wiersz*/
  
  while((len = get_lines(wiersz, MAXLINE)) > 0)
  {
    printf("%d\n", len);
    printf("%s", wiersz);  /* wypisanie wiersza zachowanego w pamięci */
  }
  return 0;
}

int get_lines(char wiersz[], int maxline)
{
  int c, i, state;
  
  state = OUT;
  
  for(i=0; i < (MAXLINE - 1) && (c = getchar()) != 'x' && c != '\n'; ++i)
  {
    if(c != ' ' && c != '\t')
    {
      state = IN;
      wiersz[i] = c;
    }  
    else if(state == OUT)
    {
      i = -1;
    }
    else
      wiersz[i] = c;
    
  } 
  
  if(c == '\n' && state != OUT)
  {
    wiersz[i] = c;
    ++i;
  }
  
  wiersz[i] = '\0';
  return i;
}