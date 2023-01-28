/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshimaok <rshimaok@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/15 11:04:48 by rshimaok          #+#    #+#             */
/*   Updated: 2022/09/15 11:04:48 by rshimaok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	end;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	while (s1[start] && (ft_strchr(set, s1[start])))
		start++;
	while (start <= end && (ft_strrchr(set, s1[end])))
		end--;
	return (ft_substr((char *)s1, start, end - start + 1));
}

// int main(void)
// {
// 	char *new;
// 	char *set1 = "x";
// 	char *set2 = " ";

// 	new = ft_strtrim("xxx   xa bcdef xx  ", set1);
// 	printf("%s\n", new); // a bcdef
// 	free(new);
// 	new = ft_strtrim("      a bcdef  ", set2);
// 	printf("%s\n", new); // a bcdef
// 	free(new);
// 	new = ft_strtrim("  aaa    a bcdef  aaa", set1);
// 	printf("%s\n", new);
// 	free(new);
// 	new = ft_strtrim("*;|@#123456***", "*;|@");
// 	printf("%s\n", new);
// 	free(new);

// 	return (0);
// }