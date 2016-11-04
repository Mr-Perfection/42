#include <unistd.h>

int main(void)
{
	char c = 'a';
	char temp = c;
	while (c <= 'z')
	{
		if (c % 2 == 0)
		{
			temp = c - 32;
			write(1, &temp, 1);
		}
		else
			write(1, &c, 1);
		c++;
	}
	write(1,"\n",1);
}
