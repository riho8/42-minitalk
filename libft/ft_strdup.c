/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsihmaok <rshimaok@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/14 12:20:47 by rshimaok          #+#    #+#             */
/*   Updated: 2022/09/18 09:24:20 by rsihmaok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *src)
{
	char	*dest;
	size_t	len;

	len = ft_strlen(src) + 1;
	dest = (char *)malloc(len);
	if (dest == NULL)
		return (NULL);
	ft_strlcpy(dest, src, len);
	return (dest);
}

// int main(void)
// {
// 	char *str1 = "Hello";
// 	char *str2 = " ";
// 	char *s;
// 	char *t;
// 	s = strdup(str1);
// 	printf("ans: %s\n", s);
// 	t = ft_strdup(str1);
// 	printf("you: %s\n", t);
// 	free(t);
// 	free(s);
// 	s = strdup(str2);
// 	printf("ans: %s\n", s);
// 	t = ft_strdup(str2);
// 	printf("you: %s\n", t);
// 	free(t);
// 	free(s);
// 	return (0);
// }