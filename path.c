/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   path.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: albben-a <albben-a@student.42madrid.c      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/16 14:01:23 by albben-a          #+#    #+#             */
/*   Updated: 2025/11/16 17:37:39 by albben-a         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int    ft_rowd(int crow, int ccol, int i, char paths[16][6], char matrix[6][6])
{
    int j;

    j = 0;
    while (crow <= 4)
    {
        while (ccol <= 4)
        {
            paths[i][j] = matrix[crow][ccol];
            j++;
            ccol++;
        }
        paths[i][j] = '\0';
        ccol = 0;
        j = 0;
        crow++;
        i++;
    }
    return (i);
}

int    ft_colup(int crow, int ccol, int i, char paths[16][6], char matrix[6][6])
{
    int j;

    j = 0;
    while (ccol <= 4)
    {
        while (crow <= 4)
        {
            paths[i][j] = matrix[crow][ccol];
            crow++;
            j++;
        }
        paths[i][j] = '\0';
        crow = 0;
        j = 0;
        ccol++;
        i++;
    }
    return (i);
}

int     ft_rowi(int crow, int ccol, int i, char paths[16][6], char matrix[6][6])
{
    int j;

    j = 0;
    while (crow <= 4)
    {
        while (ccol >= 1)
        {
            paths[i][j] = matrix[crow][ccol];
            ccol--;
            j++;
        }
        paths[i][j] = '\0';
        ccol = 5;
        j = 0;
        crow++;
        i++;
    }
    return (i);
}

int     ft_coldown(int crow, int ccol, int i, char paths[16][6], char matrix[6][6])
{
    int j;
    j = 0;
    while (ccol <= 4)
    {
        while (crow >= 1)
        {
            paths[i][j] = matrix[crow][ccol];
            crow--;
            j++;
        }
        paths[i][j] = '\0';
        crow = 5;
        j = 0;
        ccol++;
        i++;
    }
    return (i);
}

void    path_find(char matrix[6][6], char paths[16][6])
{
    int crow;
    int ccol;
    int i;

    crow = 1;
    ccol = 0;
    i = 0;
    i = ft_rowd(crow, ccol, i, paths, matrix);
    crow = 0;
    ccol = 1;
    i = ft_colup(crow, ccol, i, paths, matrix);
    crow = 1;
    ccol = 5;
    i = ft_rowi(crow, ccol, i, paths, matrix);
    crow = 5;
    ccol = 1;
    i = ft_coldown(crow, ccol, i, paths, matrix);
}

#include <stdio.h>

int main(void)
{
	char	paths[16][6];
    char matrix[6][6] = {{"123456"}, {"234561"}, {"345612"}, {"456123"}, {"561234"}, {"612345"}};
    int i;
    int j;

    i = 0;
    j = 0;
    path_find(matrix, paths);
    while (i <= 16)
    {
       printf("%s", paths[i]);
       printf("%c", '\n');
       i++;
    }
    return (0);
}
