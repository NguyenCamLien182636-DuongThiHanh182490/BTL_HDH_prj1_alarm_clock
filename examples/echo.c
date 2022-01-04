#include <stdio.h>
#include <syscall.h>

int
main (int argc, char **argv)
{
  int i=0;

  for (i = 0; i < 10; i++)
    printf ("Demo by Cam Lien: %s ", i);
  printf ("\n");

  return EXIT_SUCCESS;
}
