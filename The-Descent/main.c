/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elouannh <elouannh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 13:14:29 by elouannh          #+#    #+#             */
/*   Updated: 2024/11/20 13:14:29 by elouannh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int	main(void)
{
	int	max;
	int	imax;
	int	mountain_h;
	int	i;

	while (1)
	{
		max = 0;
		imax = 0;
		i = 0;
		while (i < 8)
		{
			scanf("%d", &mountain_h);
			if (mountain_h > max)
			{
				imax = i;
				max = mountain_h;
			}
			i++;
		}
		printf("%d\n", imax);
	}
	return (0);
}
