/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   misc_cd2.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slee <marvin@42.fr>                        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/16 15:44:16 by slee              #+#    #+#             */
/*   Updated: 2017/06/16 15:44:18 by slee             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include "../includes/minishell.h"
#include "../libft/includes/libft.h"

char	*create_cwd(t_sh *shell)
{
	char	*wd;

	if (shell && (wd = get_env_value("PWD", shell->env)))
	{
		wd = ft_strdup(wd);
	}
	else if ((wd = malloc(sizeof(char) * CWD)))
	{
		wd = getcwd(wd, CWD);
	}
	return (wd);
}
