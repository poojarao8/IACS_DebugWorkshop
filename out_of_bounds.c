//Source: http://valgrind.org/gallery/linux_mag.html
//sample2.c, a program that tries to access memory beyond the end of an array

#include <stdlib.h>
#include <stdio.h>

int main(void) {
  char *chptr;
  char *chptr1;
  int i = 1;
  chptr = (char *) malloc(512);
  chptr1 = (char *) malloc (512);

  for ( i; i <= 513; i++ ) {
    chptr[i] = '?';        /* error when i = 513 invalid write */
    chptr1[i] = chptr[i];  /* error when i = 513 invalid read and write */
  }

  free(chptr1);
  free(chptr);
}

