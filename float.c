#include <stdio.h>
int main()
{
  int a = 8;
  float b = 1.5;
  long c = 1.2545;
  short d = 54.88;
  char e = 'f';
  
  printf("/n size of int a %ld", sizeof(a));
  printf("/n size of float b %ld", sizeof(b));
  printf("/n size of long c %ld", sizeof(c));
  printf("/n size of short d %ld", sizeof(d));
  printf("/n size of char e %ld", sizeof(e));
  printf("/n");
  return 0;
}
