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

void	print_y(int t[], int light_y)
{
	if (t[1] != light_y)
	{
		if (t[1] > light_y)
			printf("N");
		else
			printf("S");
		t[1] += (-(t[1] > light_y) + (t[1] < light_y));
	}
}

void	print_x(int t[], int light_x)
{
	if (t[0] != light_x)
	{
		if (t[0] > light_x)
			printf("W");
		else
			printf("E");
		t[0] += (-(t[0] > light_x) + (t[0] < light_x));
	}
}

void	read_input(void)
{
	int	remaining;

	scanf("%d", &remaining);
}

int	main(void)
{
	int	light_x;
	int	light_y;
	int	initial_tx;
	int	initial_ty;
	int	t[2];

	scanf("%d%d%d%d", &light_x, &light_y, &initial_tx, &initial_ty);
	t[0] = initial_tx;
	t[1] = initial_ty;
	while (1)
	{
		read_input();
		print_y(t, light_y);
		print_x(t, light_x);
		printf("\n");
	}
	return (0);
}
