/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshimaok <rshimaok@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 08:35:07 by rshimaok          #+#    #+#             */
/*   Updated: 2022/09/15 08:35:07 by rshimaok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**free_all(char **str)
{
	size_t	i;

	i = 0;
	while (str[i] != NULL)
	{
		free(str[i]);
		i++;
	}
	free(str);
	return (NULL);
}

static size_t	count_block(const char *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		if (*s != c)
		{
			count++;
			while (*s != c && *s)
				s++;
		}
		while (*s == c && *s)
			s++;
	}
	return (count);
}

static char	**split_copy(char const *s, char c, char **dest, size_t block)
{
	size_t	i;
	size_t	len;

	i = 0;
	while (*s && i < block)
	{
		len = 0;
		while (*s && *s == c)
			s++;
		while (s[len] && s[len] != c)
			len++;
		if (len != 0)
		{
			dest[i] = ft_substr(s, 0, len);
			if (!(dest[i]))
				return (free_all(dest));
			i++;
		}
		s += len;
	}
	dest[i] = NULL;
	return (dest);
}

char	**ft_split(char const *s, char c)
{
	char	**dest;
	size_t	block;

	if (!s)
		return (NULL);
	block = count_block(s, c);
	dest = (char **)malloc(sizeof(char *) * (block + 1));
	if (!dest)
		return (NULL);
	return (split_copy(s, c, dest, block));
}

// int	main(void)
// {
// 	char str1[] = "abc//defg/h";
// 	char str2[] = "--1-2--3---4----5-----6";
// 	char str3[] = "    ";
// 	char str4[] = "\0";
// 	char sep1 = '/';
// 	char sep2 = 0;
// 	char sep3 = ' ';
// 	char sep4 = '\0';
// 	char **ans = NULL;
// 	int i;

// 	printf("------1-----\n");
// 	ans = ft_split(str1, sep1);
// 	if(!ans)
// 		printf("null\n");
// 	else{
// 	for (i = 0; ans[i] != NULL; i++)
// 		printf("%s\n", ans[i]);
// 	}
// 	free(ans);
// 	printf("------2-----\n");
// 	ans = ft_split(str2, sep2);
// 	if(!ans)
// 		printf("null\n");
// 	else{
// 	for (i = 0; ans[i] != NULL; i++)
// 		printf("%s\n", ans[i]);
// 	}
// 	free(ans);
// 	printf("------3-----\n");
// 	ans = ft_split(str3, sep3);
// 	if(!ans)
// 		printf("null\n");
// 	else{
// 	for (i = 0; ans[i] != NULL; i++)
// 		printf("%s\n", ans[i]);
// 	}
// 	free(ans);
// 	printf("------4-----\n");
// 	ans = ft_split(str4, sep1); //str = \0
// 	if(!ans)
// 		printf("null\n");
// 	else{
// 	for (i = 0; ans[i] != NULL; i++)
// 		printf("%s\n", ans[i]);
// 	}
// 	free(ans);
// 	printf("------5-----\n");
// 	ans = ft_split(str2, sep4);  //sep = \0
// 	if(!ans)
// 		printf("null\n");
// 	else{
// 	for (i = 0; ans[i] != NULL; i++)
// 		printf("%s\n", ans[i]);
// 	}
// 	free(ans);
// 	printf("------6-----\n");
// 	ans = ft_split(str2, sep3);  //sep is not in str
// 	if(!ans)
// 		printf("null\n");
// 	else{
// 	for (i = 0; ans[i] != NULL; i++)
// 		printf("%s\n", ans[i]);
// 	}
// 	free(ans);
// 	return (0);
// }