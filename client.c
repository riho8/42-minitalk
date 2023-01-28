/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   client.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rsihmaok <rshimaok@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/25 14:22:03 by rsihmaok          #+#    #+#             */
/*   Updated: 2022/12/25 14:22:03 by rsihmaok         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft/libft.h"
#include <signal.h>
#include <stdlib.h>
#include <unistd.h>

size_t	g_arglen;

void	receive_signal(int sig)
{
	static size_t	count = 0;

	if (sig == SIGUSR1)
		count++;
	else
	{
		if (count == g_arglen)
		{
			ft_putstr_fd("Sucess\n", 1);
			exit(EXIT_SUCCESS);
		}
		else
		{
			ft_putstr_fd("Error\n", 1);
			exit(EXIT_FAILURE);
		}
	}
}

void	send_signal(int server_pid, char *str)
{
	int		digit;
	int		i;
	char	c;

	i = 0;
	while (str[i] != '\0')
	{
		digit = 8;
		c = str[i++];
		while (digit--)
		{
			if (c >> digit & 1)
				kill(server_pid, SIGUSR2);
			else
				kill(server_pid, SIGUSR1);
			usleep(100);
		}
	}
	digit = 8;
	while (digit--)
	{
		kill(server_pid, SIGUSR1);
		usleep(100);
	}
}

int	ft_atoi_2(const char *str)
{
	size_t			i;
	unsigned long	num;

	i = 0;
	num = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			num = (str[i] - 48) + (num * 10);
			i++;
		}
		else
			return (0);
	}
	return ((int)num);
}

int	main(int argc, char **argv)
{
	int	pid;

	g_arglen = ft_strlen(argv[2]);
	if (argc != 3 || !g_arglen)
		exit(EXIT_FAILURE);
	pid = ft_atoi_2(argv[1]);
	if (pid < 100 || pid > 99998 || kill(pid, 0) == -1)
		exit(EXIT_FAILURE);
	signal(SIGUSR1, receive_signal);
	signal(SIGUSR2, receive_signal);
	send_signal(pid, argv[2]);
	return (0);
}
