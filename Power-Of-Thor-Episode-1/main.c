/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elouannh <elouannh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 13:31:45 by elouannh          #+#    #+#             */
/*   Updated: 2024/11/20 13:31:45 by elouannh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int	main(void)
{
	int	light_x;
	int	light_y;
	int	initial_tx;
	int	initial_ty;
	int	t[2];
	int	remaining_turns;

	scanf("%d%d%d%d", &light_x, &light_y, &initial_tx, &initial_ty);
	t[0] = initial_tx;
	t[1] = initial_ty;
	while (1)
	{
		scanf("%d", &remaining_turns);
		fprintf(stderr, "x: %d/%d y: %d/%d\n", t[0], light_x, t[1], light_y);
		if (t[1] != light_y)
		{
			if (t[1] > light_y)
				printf("N");
			else
				printf("S");
			t[1] += (-(t[1] > light_y) + (t[1] < light_y));
		}
		if (t[0] != light_x)
		{
			if (t[0] > light_x)
				printf("W");
			else
				printf("E");
			t[0] += (-(t[0] > light_x) + (t[0] < light_x));
		}
		printf("\n");
	}
	return (0);
}
