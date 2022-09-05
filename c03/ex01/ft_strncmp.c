/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myagiz <myagiz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 14:32:38 by myagiz            #+#    #+#             */
/*   Updated: 2022/09/05 10:36:01 by myagiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (s1[i] == s2[i] && (i < n -1) && s1[i])
		i++;
	return (s1[i] - s2[i]);
}
/*
#include <stdio.h>

int	main()
{
	char	*s1 = "Yagiz";
	char	*s2 = "Yagjz";

	printf("%d", ft_strncmp(s1, s2, 5));
}
*/
