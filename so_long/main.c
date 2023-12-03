/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jubaldo <jubaldo@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/04 12:35:37 by jubaldo           #+#    #+#             */
/*   Updated: 2023/11/10 11:31:43 by jubaldo          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int	main(int ac, char **av)
{
	t_long	so_long;

	variables_init(&so_long);
	if (ac == 1)
		error_msg(&so_long, "Type a map to open");
	if (ac > 2)
		error_msg(&so_long, "Invalid arguments (too many)");
	parsing(&so_long, av[1]);
	display(&so_long);
	return (0);
}
