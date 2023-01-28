/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshimaok <rshimaok@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 17:47:50 by rshimaok          #+#    #+#             */
/*   Updated: 2022/09/19 17:47:50 by rshimaok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	unsigned int	e;
	unsigned int	nb;
	unsigned int	temp;

	e = 1;
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		nb = -n;
	}
	else
		nb = n;
	temp = nb;
	while (temp > 9)
	{
		temp /= 10;
		e *= 10;
	}
	while (e > 0)
	{
		ft_putchar_fd((nb / e % 10) + '0', fd);
		e /= 10;
	}
}

// int main(void){
// 	ft_putnbr_fd(0,1);
// 	printf("\n");
// 	ft_putnbr_fd(100,1);
// 	printf("\n");
// 	ft_putnbr_fd(-1234,1);
// 	printf("\n");
// 	ft_putnbr_fd(-2147483648,1);
// 	printf("\n");
// 	ft_putnbr_fd(2147483647,1);
// 	printf("\n");
// 	ft_putnbr_fd(2147483648,1);
// 	printf("\n");

// 	return 0;
// }