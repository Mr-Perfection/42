#include <unistd.h>

void brainfuck(char *input)
{
	char buffer[2056] = {0};
	char *p;
	int n;

	p = buffer;
	while (*input)
	{
		if (*input == '>') ++p;
		if (*input == '<') --p;
		if (*input == '+') ++*p;
		if (*input == '-') --*p;
		if (*input == '.') write(1, p, 1);
		
		if (*input == '[')
		{
			n = 0;
			if (*p == 0)
				while (*input++)
				{
					if (*input == '[') n++;
					else if (*input == ']' && n == 0) break;
					else if (*input == ']') n--;
				}
		}
		if (*input == ']')
		{
			n = 0;
			if (*p)
			{
				while (*input--)
				{
					if (*input == ']') n++;
					if (*input == '[' && n == 0) break;
					if (*input == '[') n--;
				}
			}
		}
		input++;
	}

}

int main(int argc, char *argv[])
{
	if (argc == 2)
	{
		if (argv[1])
		brainfuck(argv[1]);
	}
	else
		write(1,"\n",1);
	return 0;
}