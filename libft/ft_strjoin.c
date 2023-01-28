/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshimaok <rshimaok@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 10:16:56 by rshimaok          #+#    #+#             */
/*   Updated: 2022/09/15 10:16:56 by rshimaok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char *s1, char *s2)
{
	char	*dest;
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (!s2)
		return (NULL);
	if (!s1)
	{
		s1 = (char *)malloc(1);
		s1[0] = '\0';
	}
	dest = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	if (!dest)
		return (NULL);
	while (s1[j])
		dest[i++] = s1[j++];
	j = 0;
	while (s2[j])
		dest[i++] = s2[j++];
	dest[i] = '\0';
	free(s1);
	return (dest);
}
// libft ver. revised in gnl
// char	*ft_strjoin(char const *s1, char const *s2)
// {
// 	char	*dest;
// 	size_t	len;
// 	size_t	i;

// 	i = 0;
// 	if (!s1 || !s2)
// 		return (NULL);
// 	len = ft_strlen(s1) + ft_strlen(s2);
// 	dest = (char *)malloc(len + 1);
// 	if (!dest)
// 		return (NULL);
// 	while (*s1)
// 	{
// 		dest[i] = *s1;
// 		s1++;
// 		i++;
// 	}
// 	while (*s2)
// 	{
// 		dest[i] = *s2;
// 		s2++;
// 		i++;
// 	}
// 	dest[i] = '\0';
// 	return (dest);
// }

// int	main(void)
// {
// 	char *str1 = "ABC";
// 	char *str2 = "DEF";
// 	char *str3 = "";
// 	char *str4 = NULL;
// 	char *new;

// 	new = ft_strjoin(str1, str2); // ABCDEF
// 	printf("%s\n", new);
// 	free(new);
// 	new = ft_strjoin(str1, str3); // ABC
// 	printf("%s\n", new);
// 	free(new);
// 	new = ft_strjoin(str3, str2); // DEF
// 	printf("%s\n", new);
// 	free(new);
// 	new = ft_strjoin(str3, str4); // NULL
// 	printf("%s\n", new);
// 	free(new);
// 	return (0);
// }