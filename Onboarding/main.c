/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: elouannh <elouannh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/20 21:02:34 by elouannh          #+#    #+#             */
/*   Updated: 2024/11/20 21:02:34 by elouannh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	main(void)
{
	char	enemy1[257];
	char	enemy2[257];
	int		dist1;
	int		dist2;

	while (1)
	{
		scanf("%s", enemy1);
		scanf("%d", &dist1);
		scanf("%s", enemy2);
		scanf("%d", &dist2);
		if (dist1 < dist2)
			printf("%s\n", enemy1);
		else
			printf("%s\n", enemy2);
	}
	return (0);
}
