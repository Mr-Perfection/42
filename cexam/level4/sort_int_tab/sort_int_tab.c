void swap(int *tab, unsigned int i, unsigned int j)
{
	int temp = tab[i];
	tab[i] = tab[j];
	tab[j] = temp;
}

void sort_int_tab(int *tab, unsigned int size)
{
	if (tab == 0)
		return ;
	unsigned int i, j;
	for (i = 0; i < size; ++i)
	{
		for(j = i; j < size; ++j)
		{
			if (tab[j] < tab[i])
				swap(tab, i, j);
		}
	}
}
