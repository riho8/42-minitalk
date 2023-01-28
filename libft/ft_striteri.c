/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rshimaok <rshimaok@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/19 17:47:01 by rshimaok          #+#    #+#             */
/*   Updated: 2022/09/19 17:47:01 by rshimaok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_striteri(char *s, void (*f)(unsigned int, char*))
{
	size_t	idx;

	idx = 0;
	if (!s || !f)
		return ;
	while (s[idx])
	{
		f((unsigned int)idx, &(s[idx]));
		idx++;
	}
}

// int main(void){
// 	char *str = "abcde";
// 	ft_striteri(str,func);
// 	printf("%s\n",str);
// 	return 0;
// }