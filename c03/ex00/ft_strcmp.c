/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myagiz <myagiz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 14:18:25 by myagiz            #+#    #+#             */
/*   Updated: 2022/09/04 14:31:39 by myagiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	unsigned int	i;

	i = 0;
	while (s1[i] == s2[i] && (s1[i] != '\0' || s2[i] != '\0'))
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>

int	main()
{
	printf("%d", ft_strcmp("yagiz", "yagjz"));
	printf("\n%d", ft_strcmp("Merhaba", "Me"));
	printf("\n%d", ft_strcmp("Me", "Merhaba"));
	printf("\n%d", ft_strcmp("Merhaba", "Merhaba"));
}
*/
