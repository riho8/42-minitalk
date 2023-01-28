/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshimaok <rshimaok@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 09:13:51 by rshimaok          #+#    #+#             */
/*   Updated: 2022/07/22 11:04:58 by rshimaok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (ft_isalpha(c) || ft_isdigit(c))
	{
		return (1);
	}
	return (0);
}

// int main()
// {
//     char c;
//     int result;

//     c = '5';
//     result = ft_isalnum(c);
//     printf("%c:%d\n", c, result);

//     c = 'Q';
//     result = ft_isalnum(c);
//     printf("%c:%d\n", c, result);

//     c = 'l';
//     result = ft_isalnum(c);
//     printf("%c:%d\n", c, result);

//     c = '+';
//     result = ft_isalnum(c);
//     printf("%c:%d\n", c, result);

//     return (0);
// }