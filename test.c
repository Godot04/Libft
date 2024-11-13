/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: opopov <opopov@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/11 13:24:50 by opopov            #+#    #+#             */
/*   Updated: 2024/11/13 15:17:18 by opopov           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

#include <ctype.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define RED "\033[0;31m"
#define GREEN "\033[0;32m"
#define BLUE "\033[0;34m"
#define RESET "\033[0m"

int main(void)
{
	// test isalpha function
	printf(BLUE "test isalpha function\n" RESET);
	char t1 = 'q';
	ft_isalpha(t1) == isalpha(t1)
	? printf(GREEN "result1: %d\nresult2: %d\n" RESET, ft_isalpha(t1), isalpha(t1))
	: printf(RED "result1: %d\nresult2: %d\n" RESET, ft_isalpha(t1), isalpha(t1));
	printf("\n");

	// test isdigit function
	printf(BLUE "test isdigit function\n" RESET);
	char t2 = 'S';
	ft_isdigit(t2) == isdigit(t2)
	? printf(GREEN "result1: %d\nresult2: %d\n" RESET, ft_isdigit(t2), isdigit(t2))
	: printf(RED "result1: %d\nresult2: %d\n" RESET, ft_isdigit(t2), isdigit(t2));
	printf("\n");

	// test isalnum function
	printf(BLUE "test isalnum function\n" RESET);
	char t3 = 'l';
	ft_isalnum(t3) == isalnum(t3)
	? printf(GREEN "result1: %d\nresult2: %d\n" RESET, ft_isalnum(t3), isalnum(t3))
	: printf(RED "result1: %d\nresult2: %d\n" RESET, ft_isalnum(t3), isalnum(t3));
	printf("\n");

	// test isascii function
	printf(BLUE"test isascii function\n" RESET);
	char t4 = 125;
	ft_isascii(t4) == isascii(t4)
	? printf(GREEN "result1: %d\nresult2: %d\n" RESET, ft_isascii(t4), isascii(t4))
	: printf(RED "result1: %d\nresult2: %d\n" RESET, ft_isascii(t4), isascii(t4));
	printf("\n");

	// test isprint function
	printf(BLUE"test isprint function\n" RESET);
	char t5 = '~';
	ft_isprint(t5) == isprint(t5)
	? printf(GREEN "result1: %d\nresult2: %d\n" RESET, ft_isprint(t5), isprint(t5))
	: printf(RED "result1: %d\nresult2: %d\n" RESET, ft_isprint(t5), isprint(t5));
	printf("\n");

	// test strlen function
	printf(BLUE"strlen function\n" RESET);
	char t6[] = "12345";
	ft_strlen(t6) == strlen(t6)
	? printf(GREEN"result1: %ld\nresult2: %ld\n" RESET, ft_strlen(t6), strlen(t6))
	: printf(RED"result1: %ld\nresult2: %ld\n" RESET, ft_strlen(t6), strlen(t6));
	printf("\n");


	// test memset function
	printf(BLUE"memset function\n" RESET);
	char str1[5] = {0};
	char str2[5] = {0};
	char c = 'A';
	int a = 0;
	ft_memset(str1, c, sizeof(str1) - 1);
	memset(str2, c, sizeof(str2) - 1);
	str1[sizeof(str1) - 1] = '\0';
	str2[sizeof(str2) - 1] = '\0';
	while(str1[a] == str2[a] && str1[a] != '\0' && str2[a] != '\0')
	{
		a++;
	}
	str1[a] == str2[a]
	? printf(GREEN"result1: %s\nresult2: %s\n" RESET, str1, str2)
	: printf(RED"result1: %s\nresult2: %s\n" RESET, str1, str2);
	printf("\n");


	// test bzero function
	printf(BLUE"bzero function\n" RESET);
	char str_1[] = "CoolWords123";
	char str_2[] = "CoolWords123";
	int a1 = 0;
	ft_bzero(str_1, sizeof(str_1));
	bzero(str_2, sizeof(str_2));
	while(str_1[a1] == str_2[a1] && str_1[a1] != '\0' && str_2[a1] != '\0')
	{
		a1++;
	}
	str_1[a1] == str_2[a1]
	? printf(GREEN"result1: %s\nresult2: %s\n" RESET, str_1, str_2)
	: printf(RED"result1: %s\nresult2: %s\n" RESET, str_1, str_2);
	printf("\n");


	// test memcpy function
	printf(BLUE"memcpy function\n" RESET);
	char src[] = "CoolWords123";
	char dest1[20];
	char dest2[20];
	int a2 = 0;
	ft_memcpy(dest1, src, 4);
	memcpy(dest2, src, 4);
	while(dest1[a2] == dest2[a2] && dest1[a2] != '\0' && dest2[a2] != '\0')
	{
		a2++;
	}
	dest1[a2] == dest2[a2]
	? printf(GREEN"result1: %s\nresult2: %s\n" RESET, dest1, dest2)
	: printf(RED"result1: %s\nresult2: %s\n" RESET, dest1, dest2);
	printf("\n");


	// test memmove function
	printf(BLUE"memmove function\n" RESET);
	char buffer1[20] = "1234567890";
	char buffer2[20] = "1234567890";
	int a10 = 0;
	memmove(buffer2 + 5, buffer1, 5);
	ft_memmove(buffer1 + 5, buffer1, 5);
	while(buffer1[a10] == buffer2[a10] && buffer1[a10] && buffer2[a10])
	{
		a10++;
	}
	buffer1[a10] == buffer2[a10]
	? printf(GREEN"result1: %s\nresult2: %s\n" RESET, buffer1, buffer2)
	: printf(RED"result1: %s\nresult2: %s\n" RESET, buffer1, buffer2);
	printf("\n");



	// test strlcpy function
	// printf(BLUE"strlcpy function\n" RESET);
	// char src1[] = "Hello!";
	// char dest_1[20];
	// char dest_2[20];
	// size_t	t11 = ft_strlcpy(dest_1, src1, 5);
	// size_t	t22 = strlcpy(dest_2, src1, 5);
	// t11 == t22
	// ? printf(GREEN"result1: %s\nresult2: %s\n" RESET, dest_1, dest_2)
	// : printf(RED"result1: %s\nresult2: %s\n" RESET, dest_1, dest_2);
	// printf("\n");


	// test strlcat function
	// printf(BLUE"strlcat function\n" RESET);
	// char src2[] = "Hello ";
	// char dest_11[20] = "CoolGuy";
	// char dest_22[20] = "CoolGuy";
	// strlcat(dest_22, src2, 11) == ft_strlcat(dest_11, src2, 11)
	// ? printf(GREEN"result1: %s\nresult2: %s\n" RESET, dest_11, dest_22)
	// : printf(RED"result1: %s\nresult2: %s\n" RESET, dest_11, dest_22);
	// printf("\n");


	// test toupper function
	printf(BLUE"toupper function\n" RESET);
	char test = 'a';
	toupper(test) == ft_toupper(test)
	? printf(GREEN"result1: %c\nresult2: %c\n" RESET, ft_toupper(test), toupper(test))
	: printf(RED"result1: %c\nresult2: %c\n" RESET, ft_toupper(test), toupper(test));
	printf("\n");


	// test tolower function
	printf(BLUE"tolower function\n" RESET);
	char test1 = 'B';
	tolower(test1) == ft_tolower(test1)
	? printf(GREEN"result1: %c\nresult2: %c\n" RESET, ft_tolower(test1), tolower(test1))
	: printf(RED"result1: %c\nresult2: %c\n" RESET, ft_tolower(test1), tolower(test1));
	printf("\n");

	// test strchr function
	printf(BLUE"strchr function\n" RESET);
	char *st = "Hello World!";
	char ch = 'o';
	strchr(st, ch) == ft_strchr(st, ch)
	? printf(GREEN"result1: %s\nresult2: %s\n" RESET, ft_strchr(st,ch), strchr(st,ch))
	: printf(RED"result1: %s\nresult2: %s\n" RESET, ft_strchr(st,ch), strchr(st,ch));
	printf("\n");


	// test strrchr function
	printf(BLUE"strrchr function\n" RESET);
	char *st1 = "Hello World!";
	char ch1 = 'o';
	strrchr(st1, ch1) == ft_strrchr(st1, ch1)
	? printf(GREEN"result1: %s\nresult2: %s\n" RESET, ft_strrchr(st1,ch1), strrchr(st1,ch1))
	: printf(RED"result1: %s\nresult2: %s\n" RESET, ft_strrchr(st1,ch1), strrchr(st1,ch1));
	printf("\n");


	// test strncmp function
	printf(BLUE"strncmp function\n" RESET);
	char str_111[] = "CoolWord1234";
	char str_222[] = "CoolWord1234";
	size_t az = 12;
	ft_strncmp(str_111, str_222, az) == strncmp(str_111, str_222, az)
	? printf(GREEN"result1: %d\nresult2: %d\n" RESET, ft_strncmp(str_111, str_222, az), strncmp(str_111, str_222, az))
	: printf(RED"result1: %d\nresult2: %d\n" RESET, ft_strncmp(str_111, str_222, az), strncmp(str_111, str_222, az));
	printf("\n");


	// test memchr function
	// printf(BLUE"memchr function\n" RESET);
	// const char sttr1[] = "Point.IsHere.<-";
	// const char sttr2[] = "Point.IsHere.<-";
	// char chch = '.';
	// char *ress1 = memchr(sttr1, chch, 13);
	// char *ress2 = ft_memchr(sttr2, chch, 13);
	// ress1 == ress2
	// ? printf(GREEN"result1: %s\nresult2: %s\n" RESET, ress1, ress2)
	// : printf(RED"result1: %s\nresult2: %s\n" RESET, ress1, ress2);
	// printf("\n");


	// test memcmp function
	printf(BLUE"memcmp function\n" RESET);
	char buff1[] = "CoolProga123";
	char buff2[] = "CoolProga123";
	size_t azz = 3;
	ft_memcmp(buff1, buff2, azz) == memcmp(buff1, buff2, azz)
	? printf(GREEN"result1: %d\nresult2: %d\n" RESET, ft_memcmp(buff1, buff2, azz), memcmp(buff1, buff2, azz))
	: printf(RED"result1: %d\nresult2: %d\n" RESET, ft_memcmp(buff1, buff2, azz), memcmp(buff1, buff2, azz));
	printf("\n");


	// test strnstr function
	// printf(BLUE"strnstr function\n" RESET);
	// char *tstring1 = "I love points ...";
	// char *tstring2 = "I love points ...";
	// char *tch = "points";
	// size_t gh = 17;
	// ft_strnstr(tstring1, tch, gh) == strnstr(tstring1, tch, gh)
	// ? printf(GREEN"result1: %s\nresult2: %s\n" RESET, ft_strnstr(tstring1, tch, gh), strnstr(tstring2, tch, gh))
	// : printf(RED"result1: %s\nresult2: %s\n" RESET, ft_strnstr(tstring1, tch, gh), strnstr(tstring2, tch, gh));
	// printf("\n");


	// test atoi function
	printf(BLUE"atoi function\n" RESET);
	char *fstring1 = "\n -1234,5f";
	char *fstring2 = "\n -1234,5f";
	ft_atoi(fstring1) == atoi(fstring2)
	? printf(GREEN"result1: %d\nresult2: %d\n" RESET, ft_atoi(fstring1), atoi(fstring2))
	: printf(RED"result1: %d\nresult2: %d\n" RESET, ft_atoi(fstring1), atoi(fstring2));
	printf("\n");



	return (0);
}
