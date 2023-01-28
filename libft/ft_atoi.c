/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsihmaok <rshimaok@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 11:37:55 by rshimaok          #+#    #+#             */
/*   Updated: 2023/01/08 15:30:08 by rsihmaok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	size_t			i;
	unsigned long	num;
	int				sign;

	i = 0;
	num = 0;
	sign = 1;
	while ((str[i] >= 9 && str[i] <= 13) || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		num = (str[i] - 48) + (num * 10);
		i++;
	}
	num = (int)num;
	return (num * sign);
}

// int	main(void)
// {
// 	char str1[] = "123";
// 	char str2[] = " \n-2147483648";
// 	char str3[] = "+002147483647";
// 	char str4[] = "  -++++--0002147483647";
// 	char str5[] = "    +a123";
// 	printf("you: %d\n", ft_atoi(str1)); //-13256
// 	printf("ans: %d\n", atoi(str1));
// 	printf("you: %d\n", ft_atoi(str2)); //-2147483648
// 	printf("ans: %d\n", atoi(str2));
// 	printf("you: %d\n", ft_atoi(str3)); //2147483647
// 	printf("ans: %d\n", atoi(str3));
// 	printf("you: %d\n", ft_atoi(str4)); //0
// 	printf("ans: %d\n", atoi(str4));
// 	printf("you: %d\n", ft_atoi(str5)); //0
// 	printf("ans: %d\n", atoi(str5));
// 	return (0);
// }