/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   reader.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/16 15:45:40 by slee              #+#    #+#             */
/*   Updated: 2017/06/16 15:45:42 by slee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include "libft.h"
#include "minishell.h"
#include <signal.h>
#include "../includes/minishell.h"
#include "../libft/includes/libft.h"

static char	*ft_compile(char *left, char *buf)
{
	char	*tmp;

	tmp = buf;
	buf = ft_strjoin(left, buf);
	free(tmp);
	ft_strdel(&left);
	return (buf);
}

static void	ft_again(char *buf, t_sh *shell)
{
	if (isatty(0))
		display_prompt(shell);
	ft_strclr(buf);
}

char		*get_line(t_sh *shell)
{
	char	*buf;
	char	*left;
	ssize_t	ret;

	if (isatty(0))
		display_prompt(shell);
	buf = ft_strnew(READ);
	left = NULL;
	signal(SIGINT, ft_callback_handler);
	while ((ret = read(0, buf, READ)))
	{
		buf[ret] = '\0';
		if (left && buf[0])
			buf = ft_compile(left, buf);
		if (is_real_line(buf))
			return (buf);
		else if (is_enter(buf))
			ft_again(buf, shell);
		else
			left = ft_move_and_clean(buf);
	}
	ft_free(left);
	ft_free(buf);
	shell->exit = 1;
	return (NULL);
}
