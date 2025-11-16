
#include <unistd.h>

//char	**ft_matriz(int na, int nb, int nc, int nd);

void	matrgen()
{
	char	na;
	char	nb;
	char	nc;
	char	nd;

	na = '1';
	nb = '1';
	nc = '1';
	nd = '1';
	while (na < '5')
	{
		nb = na + 1;
		while(nb < '5')
		{
			nc = nb + 1;
			while (nc < '5')
			{
				nd = nc + 1;
				while (nd < '5')
				{
					write(1, &na , 4);
					write(1, &nb , 4);
					write(1, &nc , 4);
					write(1, &nd , 4);
					write(1, "\n", 4);
					nd++;
				}
				if ( nd > '4')
					nd = '0';
				nc++;
			}
			if ( nc > '4')
				nc = '0';
			nb++;
		}
		if ( nb > '4')
			nb = '0';
		na++;
		if (na > '4')
			na = '0';
	}
}

/*char    **ft_matriz(int na, int nb, int nc, int nd)
{
	int     rown;
	int     coln;
	int     irow;
	int     icol;
	char    matrx[rown][coln];

	rown = 4;coln = 4;
	while (irow < rown)
	{
		icol = 0;
		while (icol < coln)
		{
			write(1, &na + '0', 1);
			write(1, &nb + '0', 1);
			write(1, &nc + '0', 1);
			icol++;
			write(1, &nd + '0', 1);
		}
		write(1,"\n", 1);
		irow++;
	}
	return (**matrx);
}*/

int     main(void)
{
         matrgen();
         return (0);
}
