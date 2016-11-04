#include <stdlib.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
	if (argc == 4)
	{
		int a = atoi(argv[1]);
		char op = *argv[2];
		int b = atoi(argv[3]);

		if (op == '+')
			a += b;
		else if (op == '-')
			a -= b;
		else if (op == '*')
			a *= b;
		else if (op == '/')
			a /= b;
		else if (op == '%')
			a %= b;
		printf("%d", a);

	}	
	printf("\n");
}
