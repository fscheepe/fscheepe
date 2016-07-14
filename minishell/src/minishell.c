#include "minishell.h"

int					main(void)
{
	extern char	**environ;
	t_cmd			s;
	int				status;
	
	s.running = 1;
	ft_putstr_n("\e[1;1H\e[2J");
	while (s.running == 1)
	{
		status = doshell(s, environ);
		if (status == -1)
			ft_putstr("\033[31mError: Unknown command!\033[0m");
		if (status == -2)
			s.running = 0;
	}
	return (0);
}
