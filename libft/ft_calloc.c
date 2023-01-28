/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsihmaok <rshimaok@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/15 10:56:39 by rshimaok          #+#    #+#             */
/*   Updated: 2022/09/18 16:27:57 by rsihmaok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*block;

	if (count == 0 || size == 0)
	{
		count = 1;
		size = 1;
	}
	if (count > SIZE_MAX / size)
		return (NULL);
	block = malloc(count * size);
	if (!block)
		return (NULL);
	ft_bzero(block, count * size);
	return (block);
}

//int	main(void)
//{
//int *p;

//p = ft_calloc(4, 0);
//if (p == 0)
//{
//	printf("メモリが確保できません");
//	free(p);

//	return (0);
//}else{
//		printf("%p",p);
//}
//free(p);

//return (0);
//}