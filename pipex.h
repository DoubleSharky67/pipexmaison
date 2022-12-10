
//-----------------------------------------------------------------------------

#ifndef PIPEX_H
# define PIPEX_H

typedef struct n_data
{
	int	fd[2];
	int	pid;
	int	fd_input;
	int	fd_output;
	char	**cmd1;
	char	**cmd2;
	char	*path_cmd1;
	char	*path_cmd2;
	char	**path;
}	t_data;

void    ft_get_paths(char **envp, t_data *data);
int	ft_parse_cmds(char **argv, t_data *data);
int     ft_strncmp_pipex(const char *s1, const char *s2, int n);
char    **ft_split(char const *s, char c); //a vireeer
char	*ft_strdup(const char *str);  //a vireeeer
char	*ft_strjoin_sep(const char *s1, const char *s2, char sep);

//Functions from error.c-------------------------------------------------------

int	input_error(void);
int	ft_check_error(int argc, char **argv);

#endif
