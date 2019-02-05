#include <stdio.h>

#define MAXLINE 1000 /*maksymalny rozmiar wiersza*/

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
    if (len > max)
    {
      max = len;
      copy(longest, line);
    }
    
  if (max > 0) /*znaleziono wiersz*/
    printf("%s", longest);
  return 0;
}

/*getline: wczytaj wiersz do s, podaj jego długość */
int getliness(char s[], int lim)
{
  int c, i;
  
  for (i=0; i < (lim-1) && (c = getchar()) != 'x' && c != '\n'; ++i)
    s[i] = c;
  if (c == '\n')
  {
    s[i] = c;
    ++i;
  }
  s[i] = '\0';
  return i;
}

/* copy: przepisz from do to;   to musi być dostatecznie duże*/
void copy(char to[], char from[])
{
  int i;
  
  i = 0;
  while ((to[i] = from[i]) != '\0')
    ++i;
}