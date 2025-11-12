/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   minishell.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sllabres <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/12 15:50:25 by sllabres          #+#    #+#             */
/*   Updated: 2025/11/12 16:14:30 by sllabres         ###   ########.fr       */
/*   Updated: 2025/11/12 16:14:16 by sandomin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}

int	ft_putstr(char *str)
{
	int	i;
	
	i = 0;
	while (str[i])
	{
		i++;
	}
	return(i);
}

int	main(void)
{
	printf("%s", "Hola Mundo!");
	return (0);
}
