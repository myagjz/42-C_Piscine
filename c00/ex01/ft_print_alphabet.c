/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: myagiz <myagiz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/24 20:38:25 by myagiz            #+#    #+#             */
/*   Updated: 2022/08/25 00:24:53 by myagiz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	char	alfabe;

	alfabe = 'a';
	while (alfabe <= 'z')
	{
		write(1, &alfabe, 1);
		alfabe++;
	}
}
