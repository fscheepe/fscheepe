#include "minishell.h"

int		doexecs(t_cmd s, char **environ)
{
	pid_t		father;
	int		status;

	if ((s.path = findexec(s.flags[0], environ)))
	{
		father = fork();
		if (father > 0)
			wait(&status);
		if (father == 0)
			status = execve(s.path, s.flags, NULL);
	}
	return (0);
}

int		execexists(char *cmd, char **env)
{
	int		i;
	int		j;
	char		**list;
	char		**paths;
	
	i = 0;
	j = 0;
	while ((env[i]) && (cmd != NULL))
	{
		list = ft_strsplit(env[i], '=');
		if (ft_strcmp(list[0], "PATH") == 0)
		{
			paths = ft_strsplit(list[1], ':');
			while (paths[j])
			{
				paths[j] = ft_strjoin(paths[j], "/");
				paths[j] = ft_strjoin(paths[j], cmd);
				if (access(paths[j], F_OK) == 0)
					return (0);
				j++;
			}
		}
		i++;
	}
	return (-1);
}

int		doshell(t_cmd s, char **environ)
{
	int	status;

	initshell();
	s.cmd = get_next_line(0);
	s.flags = ft_strsplit(s.cmd, ' ');
	if ((execexists(s.flags[0], environ) == 0) && (ft_strcmp(s.cmd, "clear") != 0) && (ft_strcmp(s.cmd, "env") != 0))
	{
		if (ft_strcmp(s.flags[0], "echo") == 0)
		{
			fixecho(s, s.flags[1]);
			return (status);
		}
		if ((status = doexecs(s, environ)))
			return (status);
	}
	else
		if ((status = dobuiltin(s, environ)))
			return (status);
	return (0);
}

char		*findexec(char *cmd, char **env)
{
	t_env	s;
	int		i;
	int		j;
	
	i = 0;
	j = 0;
	while (env[i])
	{
		s.list = ft_strsplit(env[i], '=');
		if (ft_strcmp(s.list[0], "PATH") == 0)
		{
			s.paths = ft_strsplit(s.list[1], ':');
			while (s.paths[j])
			{
				s.paths[j] = ft_strjoin(s.paths[j], "/");
				s.paths[j] = ft_strjoin(s.paths[j], cmd);
				if (access(s.paths[j], F_OK) == 0)
					return (s.paths[j]);
				j++;
			}
		}
		i++;
	}
	return (NULL);
}
