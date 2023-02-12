#include "ProcBar.h"

void process_bar()
{
  char bar[NUM];
  memset(bar, '\0', sizeof(bar));
  const char *lable = "|/-\\";//spin 

  int i = 0;
  while(i <= 100)
  {
    printf("[%-100s][%-3d%%][%c]\r", bar, i, lable[i%4]);
    fflush(stdout);//refresh cache
    bar[i++] = '#';
    usleep(30000);
  }
  printf("\n");
}
