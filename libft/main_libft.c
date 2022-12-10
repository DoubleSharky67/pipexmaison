/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_libft.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ffeaugas <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/26 12:11:28 by ffeaugas          #+#    #+#             */
/*   Updated: 2022/10/02 15:36:16 by ffeaugas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include "libft.h"
#include <stdlib.h>


char ft_test(unsigned int i, char *str)
{
	char c;

	c = str[i] + 1;
	return (c);
}

void ft_test2(unsigned int i, char *str)
{
	str[i] += 1;
}

int	main(void)
{
	size_t i;

//---------------------ft_isalpha-------------------------
printf("\n\n---------------------ft_isalpha-------------------------\n");

	int c;

	c = 'o';
	if (ft_isalpha(c))
		printf("C'est un alpha\n");
	else
		printf("C'est PAS un alpha\n");

//---------------------ft_isdigit-------------------------
printf("\n\n---------------------ft_isdigit-------------------------\n");


	c = '5';
	if (ft_isdigit(c))
		printf("C'est un digit\n");
	else
		printf("C'est PAS un digit\n");

//---------------------ft_isalnum-------------------------
printf("\n\n---------------------ft_isalnum-------------------------\n");


	c = '4';
	if (ft_isalnum(c))
		printf("C'est un alnum\n");
	else
		printf("C'est PAS un alnum\n");

//---------------------ft_isascii-------------------------
printf("\n\n---------------------ft_isascii-------------------------\n");


	c = 127;
	if (ft_isascii(c))
		printf("C'est un ascii\n");
	else
		printf("C'est PAS un ascii\n");
//	if (isascii(c))
//		printf("REF : C'est un ascii\n");
//	else
//		printf("REF : C'est PAS un ascii\n");


//---------------------ft_isprint-------------------------
printf("\n\n---------------------ft_isprint-------------------------\n");


	c = 126;
	if (ft_isprint(c))
		printf("C'est print\n");
	else
		printf("C'est PAS print\n");


//---------------------ft_strlen-------------------------
printf("\n\n---------------------ft_strlen-------------------------\n");


	printf("ft_strlen donne : %ld\n", ft_strlen("zzz"));
	printf("strlen donne : %ld\n", strlen("zzz"));


//---------------------ft_memset-------------------------
printf("\n\n---------------------ft_memset-------------------------\n");


	char strmems[50];

	strcpy(strmems, "glouglou");
	ft_memset(strmems, '1', sizeof(4));
	printf("%s\n", strmems);
	
//---------------------ft_bzero-------------------------
printf("\n\n---------------------ft_bzero-------------------------\n");


	int test2;
	int *ptr2;

	ptr2 = &test2;
	test2 = 9;
	ft_bzero(&test2, sizeof(test2));
	
	i = 0;
		
	while (i < sizeof(test2))
	{
		if (test2 + i == 0)
			printf("0\n");
		else
			printf("%d\n", *(ptr2 + i));
		i++;
	}

//---------------------ft_memcpy-------------------------
printf("\n\n---------------------ft_memcpy-------------------------\n");


	char *srcmemcpy;
	char destmemcpy[50];
	srcmemcpy = "glouglou";
	
	ft_memcpy(destmemcpy, srcmemcpy, sizeof(char) * strlen(srcmemcpy));
//	ft_memcpy(destmemcpy, srcmemcpy, 2);

	i = 0;
	while (i < sizeof(char) * strlen(srcmemcpy))
	{
//		printf("%d\n", *(srcmemcpy + i));
//		printf("%d\n", *(destmemcpy + i));
		printf("%c", *(destmemcpy + i));
		i++;
	}

//---------------------ft_memmove-------------------------
printf("\n\n---------------------ft_memmove-------------------------\n");

	char *srcmemmove;
	char destmemmove[50];
	srcmemmove = "glouglou";

	ft_memcpy(destmemmove, srcmemmove, sizeof(char) * 20);
	i = 0;
	while (i < strlen(srcmemmove))
	{
		printf("%c", *(destmemmove + i));
		i++;
	}

//---------------------ft_strlcpy-------------------------
printf("\n\n---------------------ft_strlcpy-------------------------\n");

	char destlcpy[50];
	printf("%ld\n", ft_strlcpy(destlcpy, "bzzglou", 10));
	printf("%s\n", destlcpy);

//---------------------ft_strlcat-------------------------
printf("\n\n---------------------ft_strlcat-------------------------\n");

	char destlcat[50];

	strcpy(destlcat, "glouglou");
	printf("%ld\n", ft_strlcat(destlcat, "bzzglou", 40));
	printf("%s\n", destlcat);

//---------------------ft_toupper-------------------------
printf("\n\n---------------------ft_toupper-------------------------\n");

	printf("%d\n", toupper(122));
	printf("%d\n", ft_toupper(122));

//---------------------ft_tolower-------------------------
printf("\n\n---------------------ft_tolower-------------------------\n");

	printf("%d\n", tolower(67));
	printf("%d\n", ft_tolower(67));

//---------------------ft_strchr-------------------------
printf("\n\n---------------------ft_strchr-------------------------\n");

	char *stre1;

	stre1 = "glougloubre";
	printf("%s\n", strchr(stre1, 'o'));
	printf("%s\n", ft_strchr(stre1, 'o'));

//---------------------ft_strrchr-------------------------
printf("\n\n---------------------ft_strrchr-------------------------\n");

	printf("%s\n", strrchr(stre1, 'o'));
	printf("%s\n", ft_strrchr(stre1, 'o'));

//---------------------ft_strncmp-------------------------
printf("\n\n---------------------ft_strncmp-------------------------\n");

	printf("%d\n", strncmp("glou", "gloup", 1));
	printf("%d\n", ft_strncmp("glou", "gloup", 1));

//---------------------ft_memchr-------------------------
printf("\n\n---------------------ft_memchr-------------------------\n");

	printf("%p\n", memchr(stre1, '\0', 100));
	printf("%p\n", ft_memchr(stre1, '\0', 100));

//---------------------ft_memcmp-------------------------
printf("\n\n---------------------ft_memcmp-------------------------\n");

	printf("%d\n", memcmp("bouBou", "boubou", 0));
	printf("%d\n", ft_memcmp("bouBou", "boubou", 0));

//---------------------ft_strnstr-------------------------
printf("\n\n---------------------ft_strnstr-------------------------\n");

	printf("%s\n", ft_strnstr("wqdqwfqwfglouwdqfq", "glou", 100));

//---------------------ft_atoi-------------------------
printf("\n\n---------------------ft_atoi-------------------------\n");

	printf("%d\n", atoi("	\n 0"));
	printf("%d\n", ft_atoi("   \n 0"));

//---------------------ft_calloc-------------------------
printf("\n\n---------------------ft_calloc-------------------------\n");

	printf("%p\n", calloc(3, 0));
	printf("%p\n", ft_calloc(3, 0));

//---------------------ft_strdup-------------------------
printf("\n\n---------------------ft_memcpy-------------------------\n");

	char *strd;
	strd = "glouglou";
	printf("%s\n", strdup(strd));
	printf("%s\n", ft_strdup(strd));

//---------------------ft_substr-------------------------
printf("\n\n---------------------ft_substr-------------------------\n");


	char *strbz;

	strbz = "glouglouglouuuu";
	printf("%s\n", ft_substr(strbz, 2, 25));

	char *s1bz;
	char *s2bz;

//---------------------ft_strjoin-------------------------
printf("\n\n---------------------ft_strjoin-------------------------\n");


	s1bz = "glou";
	s2bz = "ploufplouf";
	printf("%s\n", ft_strjoin(s1bz, s2bz));

//---------------------ft_strtrim-------------------------
printf("\n\n---------------------ft_strtrim-------------------------\n");


	char *s3bz;
	char *setbz;

	s3bz = "glouglou4545";
	setbz = "gl5";
	printf("%s\n", ft_strtrim(s3bz, setbz));

//---------------------ft_split-------------------------
printf("\n\n---------------------ft_split-------------------------\n");


	char **tabz;
	tabz = ft_split("bbbbabbbbaabbb", 'b');
	i = 0;
	while (tabz[i])
	{
		printf("%s\n", tabz[i]);
		i++;
	}

//---------------------ft_itoa-------------------------
printf("\n\n---------------------ft_itoa-------------------------\n");


	printf("%s\n", ft_itoa(2147483647));


//---------------------ft_strmapi-------------------------
printf("\n\n---------------------ft_strmapi-------------------------\n");

	char (*f)(unsigned int, char*);
	f = &ft_test; 
	printf("%s\n", ft_strmapi("aaaaaaa", f));

//---------------------ft_striteri-------------------------
printf("\n\n---------------------ft_striteri-------------------------\n");

	void (*f2)(unsigned int, char*);
	char strteri[5] = "bbbb";
	f2 = &ft_test2;
	ft_striteri(strteri, f2);
	printf("%s\n", strteri);


//---------------------ft_putchar_fd-------------------------
printf("\n\n---------------------ft_putchar_fd-------------------------\n");

	ft_putchar_fd('Z', 1);

//---------------------ft_putstr_fd-------------------------
printf("\n\n---------------------ft_putstr_fd-------------------------\n");

	ft_putstr_fd("glouglou", 1);

//---------------------ft_putendl_fd-------------------------
printf("\n\n---------------------ft_putendl_fd-------------------------\n");

	ft_putendl_fd("glouglou", 1);

//---------------------ft_putnbr_fd-------------------------
printf("\n\n---------------------ft_putnbr_fd-------------------------\n");

	ft_putnbr_fd(2147483647, 1);

}
