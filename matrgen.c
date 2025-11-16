
#include <unistd.h>

char	**ft_matriz(char na, char nb, char nc, char nd);

void	matrgen(int	bc)
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
		while(nb < '5')
		{
			while (nc < '5')
			{
				while (nd < '5')
				{
					ft_matriz(na,nb,nc,nd);
					ft_matriz(nb,nc,nd,na);
					ft_matriz(nc,nd,na,nb);
					ft_matriz(nd,na,nb,nc);
					write(1,"\n",1);
					nd++;
				}
				if (nd > '4')
					nd = '1';
				nc++;
//				write(1,"\n",1);
			}
			if ( nc > '4')
				nc = '1';
			nb++;
		}
		if (nb > '4')
			nb = '1';
		na++;
		if (na > '4')
			break ;
	}
}

char    **ft_matriz(char na, char nb, char nc, char nd)
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
			write(1, &nb, 1);
			write(1, &nc, 1);
			write(1, &nd, 1);
			write(1,"\n", 1);
			icol++;
		}
//		write(1,"\n", 1);
		irow++;
	}
	write(1,"\n", 1);
	return (matrx);
}

int     main(void)
{
         matrgen(0);
         return (0);
}
