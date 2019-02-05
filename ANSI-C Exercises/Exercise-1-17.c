
#include <stdio.h>

#define MAXLINE 1000 /*maksymalny rozmiar wiersza*/
#define MAXLENGHT 15 /*długość wypisywanych wierszy*/

int getliness(char line[], int maxline);
void copy(char to[], char from[]);

/*wypisz najdłuższy wiersz*/

int main()
{
  int len;     /* długość bieżącego wiersza*/
  int max;      /* poprzednia max długość*/
  char line[MAXLINE];   /*bieżący wiersz z wejścia*/
  char longest[MAXLINE];  /*przechowywany maks wiersz*/
 
  max = 0;
  while ((len = getliness(line, MAXLINE)) > 0)
    if (len >= MAXLENGHT)
      printf("%s", line);
  return 0;
}

/*getline: wczytaj wiersz do s, podaj jego długość */
int getliness(char line[], int lim)
{
  int c, i;
  
  for (i=0; i < (lim-1) && (c = getchar()) != 'x' && c != '\n'; ++i)
    line[i] = c;
  if (c == '\n')
  {
    line[i] = c;
    ++i;
  }
  line[i] = '\0';
  return i;
}

