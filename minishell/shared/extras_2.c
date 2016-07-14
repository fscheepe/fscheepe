#include "minishell.h"

void		ft_putstr_n(char *s)
{
	int		i;

	i = 0;
	while (s[i])
		ft_putchar(s[i++]);
}

int		closeshell(void)
{
	ft_putstr_n("\e[1;1H\e[2J");
	ft_putstr("\033[32mBye bye!\033[0m");
	return (-2);
}

int		initshell(void)
{
	ft_putstr_n("\033[32m|Evilbottom|>: \033[0m");
	return (0);
}

int		dobuiltin(t_cmd s_cmd, char **env)
{
	int		status;
	int		i;
	t_cd		s_cd;

	i = -1;
	if (ft_strcmp(s_cmd.cmd, "exit") == 0)
		if ((status = closeshell()))
			return (status);
	if (ft_strcmp(s_cmd.cmd, "clear") == 0)
	{
		ft_putstr_n("\e[1;1H\e[2J");
		return (0);
	}
	if (ft_strcmp(s_cmd.flags[0], "env") == 0)
	{
		while (env[++i])
			ft_putstr(env[i]);
		return (0);
	}
	if (ft_strcmp(s_cmd.flags[0], "cd") == 0)
	{
		chdir(s_cmd.flags[1]);
		return (0);
	}
	if (ft_strcmp(s_cmd.flags[0], "setenv") == 0)
	{
		setenv(s_cmd.flags[1], s_cmd.flags[2], 1);
		return (0);
	}
	if (ft_strcmp(s_cmd.flags[0], "unsetenv") == 0)
	{
		unsetenv(s_cmd.flags[1]);
		return (0);
	}
	return (-1);
}

int		fixecho(t_cmd s_cmd, char *str)
{
	if ((str[0] == '"') && (str[ft_strlen(str) - 1] == '"'))
	{
		// Remove double quotes...
		ft_putstr("It has double quotes.");
	}
	return (-1);
}