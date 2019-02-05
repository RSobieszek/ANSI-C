#include <stdio.h>

#define MAXLINE 10 /*maksymalny rozmiar wiersza - zmniejszony dla latwego test*/

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
    printf("%d", max);
    
  return 0;
}

/*getline: wczytaj wiersz do s (line), podaj jego długość */
int getliness(char s[], int lim)
{
  int c, i, j;
  
  j = 0;

    for (i = 0; (c = getchar()) != 'x' && c != '\n'; ++i) 
    {
        if (i < lim - 1)
            s[j++] = c;
    }
    if (c == '\n') 
    {
      s[j++] = c;
      ++i;
    }   
    s[j] = '\0';

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