/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_reverse_alphabet.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myagiz <myagiz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 20:42:15 by myagiz            #+#    #+#             */
/*   Updated: 2022/08/25 00:26:40 by myagiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_reverse_alphabet(void)
{
	char	alfabe;

	alfabe = 'z';
	while (alfabe >= 'a')
	{
		write(1, &alfabe, 1);
		alfabe--;
	}
}
