
#include <stdlib.h>

//-----------------------------------------------------------------------------

static int	ft_strlen(const char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strdup(const char *str)
{
	char	*dup;
	int	i;

	if (!str)
		return (NULL);
	dup = malloc(sizeof(char) * (ft_strlen(str) + 1));
	i = 0;
	while (str[i])
	{
		dup[i] = str[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

char	*ft_strjoin_sep(const char *s1, const char *s2, char sep)
{
	char	*str;
	int	i;

	if (!s1 || !s2)
		return (NULL);
	str = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 2));
	i = 0;
	while (s1[i])
	{
		str[i] = s1[i];
		i++;
	}
	str[i] = sep;
	i = 0;
	while (s2[i])
	{
		str[ft_strlen(s1) + 1 + i] = s2[i];
		i++;
	}
	str[ft_strlen(s1) + 1 + i] = '\0';
	return (str);
}

int	ft_strncmp_pipex(const char *s1, const char *s2, int n)
{
	int	i;

	if (!s1 || !s2 || n <= 0)
		return (0);
	i = 0;
	while (s1[i] && s2[i] && i < n && s1[i] == s2[i])
	{
		i++;
		if (i == n)
			return (1);
	}
	return (0);
}
