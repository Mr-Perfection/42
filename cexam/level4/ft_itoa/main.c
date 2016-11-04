#include <stdio.h>
#include <stdlib.h>
char	*ft_itoa(int value);

char *ft_itoa(int nbr);
int main(void) {
  int value = 0;
  char *a = ft_itoa(value);
  printf("%s\n", a);
  free(a);
  return 0;
}
