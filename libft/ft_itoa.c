/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshimaok <rshimaok@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 08:34:46 by rshimaok          #+#    #+#             */
/*   Updated: 2022/09/15 08:34:46 by rshimaok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_digits(long long n)
{
	size_t	num;

	num = 0;
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n /= 10;
		num++;
	}
	return (num);
}

char	*ft_itoa(int n)
{
	char		*str;
	long long	nb;
	size_t		i;	

	i = 0;
	nb = n;
	if (n < 0)
	{
		nb *= -1;
		i++;
	}
	i += count_digits(nb);
	str = (char *)ft_calloc(i + 1, sizeof(char));
	if (!str)
		return (NULL);
	while (i-- > 0)
	{
		str[i] = nb % 10 + '0';
		nb /= 10;
	}
	if (n < 0)
		*str = '-';
	return (str);
}

// int main(void)
// {
// 	char *a;

// 	a = ft_itoa(8);
// 	printf("%s\n", a);
// 	free(a);
// 	a = ft_itoa(1234);
// 	printf("%s\n", a);
// 	free(a);
// 	a = ft_itoa(-10000000);
// 	printf("%s\n", a);
// 	free(a);
// 	a = ft_itoa(-456);
// 	printf("%s\n", a);
// 	free(a);
// 	a = ft_itoa(2147483647);
// 	printf("%s\n", a);
// 	free(a);
// 	a = ft_itoa(0);
// 	printf("%s\n", a);
// 	free(a);
// 	a = ft_itoa(-2147483648);
// 	printf("%s\n", a);
// 	free(a);
// 	return (0);
// }