/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshimaok <rshimaok@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 09:14:04 by rshimaok          #+#    #+#             */
/*   Updated: 2022/07/22 11:09:26 by rshimaok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
	{
		return (1);
	}
	return (0);
}

// char the_chars[] = { 'A', 0x80, '~' };

// #define SIZE sizeof( the_chars ) / sizeof( char )

// int main( void )
// {
//     unsigned long i;
// 	int result;

//     for( i = 0; i < SIZE; i++ ) {
//         result = ft_isascii( (unsigned)the_chars[i]);
// 		printf( "%c: %d\n",the_chars[i],result);
//     }

//     return (0);
// }