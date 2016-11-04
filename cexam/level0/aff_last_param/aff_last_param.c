#include<unistd.h>

int ft_strlen(char *str)
{
	int i = 0;
	while (str[i])
		i++;
	return (i);
}

int main( int argc, char *argv[])
{
	/*if arguments count is < 2 including a.out then print new line and return.*/
	if (argc >= 2)
	{
		write(1, argv[argc - 1] , ft_strlen(argv[argc - 1]));
	}
	write(1,"\n",1);
	return (0);
}
