/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mtrx.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vabad-ro <vabad-ro@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/15 14:02:23 by vabad-ro          #+#    #+#             */
/*   Updated: 2025/11/16 17:12:35 by vabad-ro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

{
	int	rown;	
	int	coln;
	int	irow;
	int	icol;	
	int	matr[rown][coln];

	rown = 4;
	coln = 4;		
	while (irow < rown)
	{
		icol = 0;		
		while (icol < coln)
		{		
			write(1, &a, 1);
			write(1, &b, 1);
			write(1, &c, 1);
			write(1, &D, 1);
			icol++;
		}
		write(1,"\n", 1);
		irow++;
	}
	return(matr);
}

/*int	main(void)
{
	ft_matrix(5, 5);
	return (0);
}
		//MAYBE WE SHOULD DELETE THIS MAIN
		//BUT TIS HERE TO CHECK
		//IN THE ARGS COMPR IT IS THE CALL TO THIS FUNCTION
*/
