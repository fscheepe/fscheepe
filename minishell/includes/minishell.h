#ifndef MINISHELL_H
# define MINISHELL_H

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <wait.h>
#include "libft.h"
#include "get_next_line.h"

typedef struct	s_cmd
{
	int				running;
	char				*cmd;
	char				**flags;
	char				*path;
}						t_cmd;

typedef struct	s_env
{
	char				**list;
	char				**paths;
	char				*path;
}						t_env;

typedef struct	s_cd
{
	char				*dir;
}						t_cd;

char					*findexec(char *cmd, char **env);
void					ft_putstr_n(char *str);
int					closeshell(void);
int					initshell(void);
int					execexists(char *cmd, char **env);
int					doshell(t_cmd s, char **environ);
char					*findexec(char *cmd, char **env);
int					dobuiltin(t_cmd s, char **env);
int					fixecho(t_cmd s_cmd, char *str);

#endif
