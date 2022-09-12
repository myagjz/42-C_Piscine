/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myagiz <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/11 20:15:21 by myagiz            #+#    #+#             */
/*   Updated: 2022/09/11 20:33:30 by myagiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	x;

	x = 1;
	if (nb < 0)
		return (0);
	while (nb > 0)
	{
		x = x * nb;
		nb--;
	}
	return (x);
}

/*
#include <stdio.h>

int main(void)
{
	int x = ft_iterative_factorial(5);
	printf("%d\n", x);
}*/
