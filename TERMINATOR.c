/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   TERMINATOR.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: edsole-a <edsole-a@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 19:59:43 by edsole-a          #+#    #+#             */
/*   Updated: 2025/11/16 21:41:58 by edsole-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//function(indexes[6][6])

//function(possible_matrix[24][6])
#include <stdio.h> 

int	compare_down(char indexes[6][6], char possible_matrix[24][6])
{
	int	i;
	int	h;
	int	c;
	int	k;

	i = 1;
	h = 0;
	while (i < 5)
	{
		k = 1;
		while (h < 24 && k == 1)
		{
			k = 0;
			if (indexes[0][i] == possible_matrix[h][0])
			{
				c = 1;
				while (c < 5)
				{
					if (indexes[c][i] != possible_matrix[h][c])
					{
						c = 5;
						k = 1;
						h++;
					}	
					c++;
				}
			}
			else
			{
				k = 1;
				h++;
			}
		}
		i++;
		if (h == 24)
			return (0);
	}
	return (1);
}

int	compare_up(char indexes[6][6], char possible_matrix[24][6])
{
	int	i;
	int	h;
	int	c;
	int	k;

	i = 1;
	h = 0;
	while (i < 5)
	{
		k = 1;
		while (h < 24 && k == 1)
		{
			k = 0;
			if (indexes[5][i] == possible_matrix[h][0])
			{
				c = 5;
				while (c > 1)
				{
					if (indexes[c][i] != possible_matrix[h][6 - c])
					{
						c = 1;
						k = 1;
						h++;
					}
					c--;
				}
			}
			else
			{
				k = 1;
				h++;
			}
		}
		i++;
		if (h == 24)
			return (0);
	}
	return (1);
}

int	compare_left(char indexes[6][6], char possible_matrix[24][6])
{
	int	i;
	int	h;
	int	c;
	int	k;

	i = 1;
	h = 0;
	while (i < 5)
	{
		k = 1;
		while (h < 24 && k == 1)
		{
			k = 0;
			if (indexes[i][0] == possible_matrix[h][0])
			{
				c = 1;
				while (c < 5)
				{
					if (indexes[i][c] != possible_matrix[h][c])
					{
						c = 5;
						k = 1;
						h++;
					}
					c++;
				}
				h++;
			}
			else
			{
				k = 1;
				h++;
			}
		}
		i++;
		if (h == 24)
			return (0);
	}
	return (1);
}

int	compare_right(char indexes[6][6], char possible_matrix[24][6])
{
	int	i;
	int	h;
	int	c;
	int	k;

	i = 1;
	h = 0;
	while (i < 5)
	{
		k = 1;
		while (h < 24 && k == 1)
		{
			k = 0;
			if (indexes[i][5] == possible_matrix[h][0])
			{
				c = 5;
				while (c > 1)
				{
					if (indexes[i][c] != possible_matrix[6 - c][h])
					{
						c = 5;
						k = 1;
						h++;
					}
					c--;
				}
			}
			else
			{
				k = 1;
				h++;
			}
		}
		i++;
		if (h == 24)
			return (0);
	}
	return (1);
}

int	compare(char indexes[6][6], char possible_matrix[24][6])
{
	if (!(compare_down(indexes, possible_matrix) 
		|| compare_up(indexes, possible_matrix) 
		|| compare_left(indexes, possible_matrix) 
		|| compare_right(indexes, possible_matrix)))
		return (0);
	return (1);
}

while (clue[i])
{
	idexes[i] = clue[i]
	i++;
}

int	main(void)
{
	char	possible_matrix[24][6] = {
		"14321",
		"14231",
		"14213",
		"14312",
		"14123",
		"14132",
		"21423",
		"21432",
		"22143",
		"22413",
		"22431",
		"23124",
		"23214",
		"23142",
		"23241",
		"23412",
		"23421",
		"31243",
		"31342",
		"32134",
		"32314",
		"32341",
		"31324",
		"41234"};
	char	indexes[6][6] = {
		"063210",
		"462341",
		"323412",
		"234122",
		"141232",
		"012220"};
	int	i = compare(indexes, possible_matrix);
	indexes = (char **)malloc(sizeof(char *) * 6);
	printf("%d", i);
	ft_fill_index(indexes, 0, "063210");
	ft_fill_index(indexes, 0, "463210");

	return (0);
const char		g_valid[24][6] = {
	"14321",
	"14231",
	"14213",
	"14312",
	"14123",
	"14132",
	"21423",
	"21432",
	"22143",
	"22413",
	"22431",
	"23124",
	"23214",
	"23142",
	"23241",
	"23412",
	"23421",
	"31243",
	"31342",
	"32134",
	"32314",
	"32341",
	"31324",
	"41234",
};14321",
	"14231",
	"14213",
	"14312",
	"14123",
	"14132",
	"21423",
	"21432",
	"22143",
	"22413",
	"22431",
	"23124",
	"23214",
	"23142",
	"23241",
	"23412",
	"23421",
	"31243",
	"31342",
	"32134",
	"32314",
	"32341",
	"31324",
	"41234",}
