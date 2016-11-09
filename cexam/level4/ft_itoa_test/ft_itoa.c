#include <stdlib.h>
#include  <stdio.h>
int	ft_strlen(const char *s)
{
	int i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}
void	ft_strrev(char **s, int start, int n)
{

	char c;
	int i = start;
	int j = n - 1;

	while (i < j)
	{
		c = *s[i];
		*s[i] = *s[j];
		i++;
		j--;
	}
}

char 	*ft_malloc(int n)
{
	//int i;
	char *s;
	if(!(s = (char *)malloc(n + 1)))
	printf("memory not allocated"); /*including null terminating value*/
	// for (i = 0; i <= n; ++i)
	// 	s[i] = 0;
	return (s);
}
void	ft_get_values(char *s,int start, int value)
{
	int i = start;
	while (value > 0)
	{

		s[i] = value % 10 + '0';
		printf("inside while loop == %c\n", s[i]);
		i++;
		value /= 10;
	}
	 s[i] = '\0';
	printf("%s is the inside ft_get_values\n", s);
}



char	*ft_itoa(int value)
{
	char *s;
	int len = 0;
	int temp = (value < 0) ? (value * -1) : value;
	if (value == 0)
	{
		s = ft_malloc(2);
		s[0] = '0'; 
		return (s);
	}
	while (temp > 0)
	{
		len++;
		temp /= 10;
	}
	printf("%d is the length\n", len);
	if (value < 0)
	{
		s = ft_malloc(len + 1);
		s[0] = '-';
		value *= -1;
		ft_get_values(s, 1, value);
		ft_strrev(&s, 1, len + 1);
	}
	else
	{
		s = (char *)malloc((sizeof(char) * len ) + 1); //ft_malloc(len);

		ft_get_values(s, 0, value);
		printf("%s is the ft_get_values\n", s);
		ft_strrev(&s, 0,len);
	}
	printf("%s is the answer\n", s);
	return (s);


}
