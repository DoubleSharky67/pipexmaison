

//_____________________________________________________________________________


#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdio.h> //a virer

/*-----TEST D'ENVOI D'UNE CHAINE DE CARACTERES-----
int	main(void)
{
	int	fd[2];
	int	pid;
	char	str[100];

	if (pipe(fd) == -1)
		return 1;
	pid = fork();
	if (pid < 0)
		return 1;
	if (pid == 0)
	{
		printf("Entrez une phrase :\n");
		read(0, str, sizeof(char) * 100);
		str[99] = '\0';
		write(fd[1], str, sizeof(char) * 100);
	}
	else
	{
		wait(NULL);
		read(fd[0], str, sizeof(char) * 100);
		printf("jai lu : %s", str);
	}
}
*/

//-----TEST DE COMMANDE------------------------------
int	main(void)
{
	

}







