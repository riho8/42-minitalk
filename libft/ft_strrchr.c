/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshimaok <rshimaok@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 09:59:31 by rshimaok          #+#    #+#             */
/*   Updated: 2022/08/03 08:00:40 by rshimaok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	char	*p;
	char	ch;

	p = NULL;
	ch = (char)c;
	while (*s != '\0')
	{
		if (*s == ch)
			p = (char *)s;
		s++;
	}
	if (ch == '\0')
		return ((char *)s);
	return (p);
}

// int	main(void)
// {
// 	char test[20] = "12345345";

// 	printf("you;%s\n", ft_strrchr(test, '3'));  //345
// 	printf("ans;%s\n", strrchr(test, '3'));
// 	printf("you;%s\n", ft_strrchr(test, '1')); //12345345
// 	printf("ans;%s\n", strrchr(test, '1'));
// 	printf("you;%s\n", ft_strrchr(test, '9')); //null
// 	printf("ans;%s\n", strrchr(test, '9'));
// 	printf("you;%s\n", ft_strrchr(test, '\0')); //
// 	printf("ans;%s\n", strrchr(test, '\0'));
// 	printf("you;%s\n", ft_strrchr(NULL, '3')); //segfo
// 	printf("ans;%s\n", strrchr(NULL, '3'));

// 	return (0);
// }