#include <unistd.h>

int main (int argc, char* argv[])
{
	if (argc >= 2)
	{
		char c;
		int r;
		const char* arr = argv[1];
		while(*arr != '\0')
		{
			if (*arr >= 'a' && *arr <= 'z')
				r = *arr - 'a' + 1;
			else if (*arr >= 'A' && *arr <= 'Z')
				r = *arr - 'A' + 1;
			while (--r >= 0)
			{
				write(1, arr, 1);
			}
			arr++;
		}
	}
	write(1, "\n",1);
}
