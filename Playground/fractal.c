#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void DrawFract();

int main()
{
  DrawFract();
  return 0;
}

char* DrawLine(int lenght, int lol, char symb)
{
  char * row = (char *) malloc(100);
  for(int i = 0; i < lenght + 1; i++)
  {
    if(i % lol)
      row[i] = symb;
    else
      row[i] = ' ';

    // row[i] = '*';
  }
  return row;
}

void DrawFract()
{

  printf("%s\n", DrawLine(16, 17, 'a'));
  printf("%s\n", DrawLine(16, 2, 'a'));
  printf("%s\n", DrawLine(16, 3, 'a'));
  printf("%s\n", DrawLine(16, 5, 'a'));
  printf("◤");
}