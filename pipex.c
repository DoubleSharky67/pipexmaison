
#include <unistd.h>
#include <fcntl.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdlib.h>
#include <stdio.h> //a virer
#include "pipex.h"

//----------------------------------------------------------------------------

void	ft_free_data(t_data *data)
{
	int	i;

	free(data->path_cmd1);
	free(data->path_cmd2);
	i = 0;
	while (data->path[i])
	{
		free(data->path[i]);
		i++;
	}
	free(data->path[i]);
	free(data->path);
}

int	ft_init_data(char **argv, t_data *data)
{
	if (ft_parse_cmds(argv, data))
		return (1);
	data->fd_input = open(argv[1], O_RDONLY);
	data->fd_output = open(argv[4], O_CREAT | O_RDWR | O_TRUNC, 0644);
	if (data->fd_input < 0 || data->fd_output < 0)
		return (1);
	pipe(data->fd);
	data->pid = fork();
	if (data->pid < 0)
		return (1);
	return (0);
}

int	ft_child_process(char **argv, char **envp, t_data *data)
{
	(void) argv;
	dup2(data->fd_input, STDIN_FILENO);
	dup2(data->fd[1], STDOUT_FILENO);
	close(data->fd[0]);
	close(data->fd_input);
	execve(data->path_cmd1, data->cmd1, envp);
	return (1);
}

int	ft_parent_process(char **argv, char **envp, t_data *data)
{
	(void) argv;
	wait(NULL);
	dup2(data->fd_output, STDOUT_FILENO);
	dup2(data->fd[0], STDIN_FILENO);
	close(data->fd[1]);
	close(data->fd_output);
	execve(data->path_cmd2, data->cmd2, envp);
	return (1);
}

int	main(int argc, char **argv, char **envp)
{
	t_data	data;

	ft_get_paths(envp, &data);
	if (ft_check_error(argc, argv))
		return (input_error());
	if (ft_init_data(argv, &data))
		return (input_error());
	if (!data.pid)
		ft_child_process(argv, envp, &data);
	else
		ft_parent_process(argv, envp, &data);
	ft_free_data(&data);
}
