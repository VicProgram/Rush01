
#include <unistd.h>

char	ft_matriz(char na, char nb, char nc, char nd);

char	matrgen(void)
{
	char	na;
	char	nb;
	char	nc;
	char	nd;
	char	arr[24][4];

	na = '1';
	nb = '1';
	nc = '1';
	nd = '1';
	while (na < '5')
	{
		nb = '1';
		while(nb < '5')
		{
			nc= '1';
			while (nc < '5')
			{
				nd = '1';
				while (nd < '5')
				{
					write(1,&na,1);
					write(1,&nb,1);
					write(1,&nc,1);
					write(1,&nd,1);
					write(1, "\n", 1);	
					nd++;
				}
				nc++;
			}
			nb++;
		}
		na++;
	}
}









/*char    ft_matriz(char *aar)
{
	int     rown;
	int     coln;
	int     irow;
	int     icol;
	char	**matrx;

	rown = 4;
	coln = 4;
	irow = 0;
	while (irow < rown)
	{
		icol = 0;
		while (icol < coln)
		{
			write(1, &na, 1);
			icol++;
			write(1, &nb, 1);
			icol++;
			write(1, &nc, 1);
			icol++;
			write(1, &nd, 1);
			icol++;
			write(1,"\n", 1);
		}
//		write(1,"\n", 1);
		irow++;
	}
	write(1,"\n", 1);
	return (matrx);
}*/

int     main(void)
{
         matrgen();
         return (0);
}
