
#include <stdio.h>
#include <locale.h>
int
main ()
{

  setlocale (LC_ALL, "Portuguese");

  printf ("\nExercC-cio 1");

  int v[10], i, imp = 0, par = 0;

  for (i = 0; i < 10; i++)
    {
      printf ("\nEntre com um valor:  ");
      scanf ("%d", &v[i]);

      if (v[i] <= 0)
	{
	  printf ("Valor invC!lido");
	  break;
	}
    }
  printf ("Valores do Array\n");
  for (i = 0; i < 10; i++)
    printf (" %d", v[i]);

  printf ("\nValores pares do Array\n");
  for (i = 0; i < 10; i++)
    {
      if (v[i] % 2 == 0)
	{
	  printf (" %d", v[i]);
	}
    }
  printf ("\nValores C-mpares do Array\n");
  for (i = 0; i < 10; i++)
    {
      if (v[i] % 2 == 1)
	{
	  printf (" %d", v[i]);
	}
    }
}
