
#include <stdio.h> //a vireeer

//-----------------------------------------------------------------------------

int     input_error(void)
{
	printf("Input error, command shoud be /pipex f1 cmd1 cmd2 f2");
	//a changer en putstr
	return (1);
}

int     ft_check_error(int argc, char **argv)
{
	(void) argv;
	if (argc != 5)
		return (1);
	return (0);
}
