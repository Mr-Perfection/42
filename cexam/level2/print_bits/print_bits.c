
#include <unistd.h>
#include <stdio.h>
void	print_bits(unsigned char octet)
{
	int oct;
	int div;

	div = 128;
	oct = octet;
	while (div != 0)
	{
		if (div <= oct)
		{
			write(1, "1", 1);
			oct = oct % div;
		}
		else
		{
			write(1, "0", 1);
		}
		div = div / 2;
	}
}

void		reverse_number(int arr[])
{
	int i = 0;
	int j = 7;
	int temp;
	while (i < j)
	{
		temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;
		i++;
		j--;
	}
}
unsigned char	reverse_bit(unsigned char octet)
{
	int oct;
	int div;
	int arr[8];
	int i;
	int s;
	int answer;

	i = 0;
	div = 128;
	oct = octet;
	while (div != 0)
	{
		if (div <= oct)
		{
			arr[i] = 1;
			oct = oct % div;
		}
		else
		{
			arr[i] = 0;
		}
		div = div / 2;
	}

	//01100001
	//[01100001]
	reverse_number(arr);
	s = 1;
	answer = 0;
	for (i = 7; i >= 0; --i)
	{
		answer += s * arr[i];
		s *= 2;
	}
	// write(1,"\n",1);
	// print_bits((unsigned char) answer);
	// // printf("answer: %d\n", answer);
	return ((unsigned char) answer);
}

int main()
{
	print_bits('a');
	unsigned char  s = reverse_bit('a');
	// write(1, &s,1);
	return 0;
}