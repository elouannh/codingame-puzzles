/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elouannh <elouannh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/26 14:07:56 by elouannh          #+#    #+#             */
/*   Updated: 2024/11/26 14:07:56 by elouannh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int	getdiff(int n)
{
	int	abs;

	abs = (n * (n > 0) - n * (n < 0));
	return (abs);
}

int	main(void)
{
	int	n;
	int	i;
	int	t;
	int	tmax;

	scanf("%d", &n);
	i = 0;
	tmax = 100000;
	while (i < n)
	{
		scanf("%d", &t);
		if (getdiff(t) < getdiff(tmax)
			|| (getdiff(t) == getdiff(tmax) && t > tmax))
			tmax = t;
		i++;
	}
	if (tmax == 100000)
		printf("%d\n", 0);
	else
		printf("%d\n", tmax);
	return (0);
}
