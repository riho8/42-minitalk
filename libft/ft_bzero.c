/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshimaok <rshimaok@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 12:21:14 by rshimaok          #+#    #+#             */
/*   Updated: 2022/07/22 11:21:45 by rshimaok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *str, size_t n)
{
	ft_memset(str, 0, n);
}

// int main(void){
// 	char buf[] = "ABCDEFGHIJK";

// 	ft_bzero(buf + 2, 3);

// 	printf("ABCDEFGHIJK→%s\n", buf);

// 	return (0);
// }