#include<unistd.h>

int main(void)
{
	char c = 'a';
	char temp;
	for(int i = 25; i >= 0; --i)
	{
		/*this will be the odd number*/
		temp = c + i;
		if (i % 2 != 0)
		{
			write(1, &temp, 1); 
		}
		else /*capitalize the character.*/
		{
			temp = temp - 32;
			write(1, &temp , 1);
		}
	}
	write(1, "\n", 1);
}
