/*
** LA_MUERTE PROJECT, 2022
** la_muerte
** file description:
** la_muerte.c
*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  int *i;
  for (;;)
    i = malloc(sizeof(i) * 100);
  return (EXIT_SUCCESS);
}
