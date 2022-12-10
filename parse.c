
#include "pipex.h"
#include <unistd.h>
#include <stdlib.h>
#include <stdio.h> //a virerrr

//-----------------------------------------------------------------------------

void	ft_get_paths(char **envp, t_data *data)
{
	int	i;

	i = 0;
	while (!ft_strncmp_pipex(envp[i], "PATH=", 5))
		i++;
	data->path = ft_split(envp[i] + 5, ':');
}

int	ft_check_cmd(char **cmd, char **path_cmd, t_data *data)
{
	char	*cmd_path;
	int	i;

	i = 0;
	while (data->path[i])
	{
		cmd_path = ft_strjoin_sep(data->path[i], cmd[0], '/');
		if (!access(cmd_path, 0))
		{
			*path_cmd = ft_strdup(cmd_path);
			free(cmd_path);
			return (0);
		}
		free(cmd_path);
		i++;
	}
	return (1);
}

int	ft_parse_cmds(char **argv, t_data *data)
{
	data->cmd1 = ft_split(argv[2], ' ');
	data->cmd2 = ft_split(argv[3], ' ');
	if (ft_check_cmd(data->cmd1, &data->path_cmd1, data))
		return (1);
	if (ft_check_cmd(data->cmd2, &data->path_cmd2, data))
		return (1);
	return (0);
}
