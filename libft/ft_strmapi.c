/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshimaok <rshimaok@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 17:40:31 by rshimaok          #+#    #+#             */
/*   Updated: 2022/09/19 17:40:31 by rshimaok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	idx;
	char			*dest;

	idx = 0;
	if (!s || !f)
		return (NULL);
	dest = (char *)malloc(ft_strlen(s) + 1);
	if (!dest)
		return (NULL);
	while (s[idx])
	{
		dest[idx] = f(idx, s[idx]);
		idx++;
	}
	dest[idx] = '\0';
	return (dest);
}

// int main(void){
// 	char *str = "abcde";
// 	char *p;
// 	p = ft_strmapi(str,func);
// 	printf("[%s]\n",p);
// 	free(p);
// 	return 0;
// }
