/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsihmaok <rshimaok@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/10 12:24:24 by rshimaok          #+#    #+#             */
/*   Updated: 2022/09/21 13:35:46 by rsihmaok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dest;
	size_t	len_s;

	if (!s)
		return (NULL);
	len_s = ft_strlen(s);
	if (len > len_s)
		len = len_s;
	dest = (char *)malloc(len + 1);
	if (!dest)
		return (NULL);
	if (start > len_s)
		dest[0] = '\0';
	else
		ft_strlcpy(dest, s + start, len + 1);
	return (dest);
}

//int main(void){
// 	char *str = "ABCDEFGH";
// 	char *substr;

// 	substr = ft_substr(str,0,4);
// 	printf("%s\n",substr);
//	free(substr);
// 	substr = ft_substr(str,100,1); // start > len(str)
// 	printf("%s\n",substr);
//	free(substr);
// 	substr = ft_substr(str,3,100); // len > len(str)
// 	printf("%s\n",substr);
//	free(substr);
// 	substr = ft_substr(str,2,0); // len = 0
// 	printf("%s\n",substr);
//	free(substr);
// 	substr = ft_substr(NULL,3,2); // null
// 	printf("%s\n",substr);
// 	free(substr);

// 	return (0);
// }