/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshimaok <rshimaok@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 10:37:14 by rshimaok          #+#    #+#             */
/*   Updated: 2022/08/03 07:55:21 by rshimaok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	i;
	size_t	c;
	size_t	s2_len;
	char	*p1;

	i = 0;
	s2_len = ft_strlen(s2);
	p1 = (char *)s1;
	if (s2_len == 0)
		return (p1);
	while (i < len && p1[i] != '\0')
	{
		c = 0;
		while (p1[i + c] != '\0' && s2[c] != '\0' && p1[i + c] == s2[c] && i
			+ c < len)
		{
			c++;
		}
		if (c == s2_len)
			return (&p1[i]);
		i++;
	}
	return (NULL);
}

//int	main(void)
//{
//	char s1[20] = "ABCDABDE";

//	printf("No.1\n");
//	printf("you;%s\n", ft_strnstr(s1, "ABD", 8)); //ABDE
//	printf("ans;%s\n", strnstr(s1, "ABD", 8));
//	printf("No.2\n");
//	printf("you;%s\n", ft_strnstr(s1, "ABD", 7)); //ABDE
//	printf("ans;%s\n", strnstr(s1, "ABD", 7));
//	printf("No.3\n");
//	printf("you;%s\n", ft_strnstr(s1, "ABD", 0)); //null
//	printf("ans;%s\n", strnstr(s1, "ABD", 0));
//	printf("No.4\n");
//	printf("you;%s\n", ft_strnstr(s1, "ABD", 6)); //null
//	printf("ans;%s\n", strnstr(s1, "ABD", 6));
//	printf("No.5\n");
//	printf("you;%s\n", ft_strnstr(s1, "", sizeof(s1))); //ABCDABDE
//	printf("ans;%s\n", strnstr(s1, "", sizeof(s1)));
//	printf("No.6\n");
//	printf("you;%s\n", ft_strnstr(s1, "XZ", sizeof(s1))); // null
//	printf("ans;%s\n", strnstr(s1, "XZ", sizeof(s1)));
//	printf("No.7\n");
//	printf("you;%s\n", ft_strnstr("", "XZ", -1)); //null
//	printf("ans;%s\n", strnstr("", "XZ", -1));
//	printf("No.8\n");
//	printf("you;%s\n", ft_strnstr(NULL, "1", 0)); // null
//	printf("ans;%s\n", strnstr(NULL, "1", 0));
//	printf("No.9\n");
//	printf("you;%s\n", ft_strnstr("1", NULL, sizeof(s1))); //segfo
//	printf("ans;%s\n", strnstr("1", NULL, sizeof(s1)));
//	return (0);
//}