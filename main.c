/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mrouabeh <mrouabeh@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/03/21 11:25:36 by mrouabeh          #+#    #+#             */
/*   Updated: 2020/05/16 18:19:09 by mrouabeh         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libasm.h"

void test_strlen()
{
	printf("\033[0;32m\n=== ft_strlen === \n\033[0m");
	printf("M: Vide => %zu\n", ft_strlen(""));
	printf("R: Vide => %zu\n", strlen(""));
	printf("M: Normal => %zu\n", ft_strlen("Hello"));
	printf("R: Normal => %zu\n", strlen("Hello"));
	printf("M: Long => %zu\n", ft_strlen("Hello world; test1; test2; test3; test4; test5\n"));
	printf("R: Long => %zu\n", strlen("Hello world; test1; test2; test3; test4; test5"));
}

void test_strcmp()
{
	printf("\033[0;32m\n=== ft_strcmp === \n\033[0m");
	printf("Vide, Vide => %d\n", ft_strcmp("", ""));
	printf("Normal, Vide => %d\n", ft_strcmp("Hello", ""));
	printf("Vide, Normal => %d\n", ft_strcmp("", "World"));
	printf("Normal, Normal: same => %d\n", ft_strcmp("Hello", "Hello"));
	printf("Normal, Normal: diff => %d\n", ft_strcmp("Hello", "Hel"));
	printf("Normal, Normal: diff => %d\n", ft_strcmp("Hel", "Hello"));
}

void test_strcpy()
{
	char dest[100];
	printf("\033[0;32m\n=== ft_strcpy ===\n\033[0m");
	printf("Vide => %s\n", ft_strcpy(dest, ""));
	printf("Normal => %s\n", ft_strcpy(dest, "Hello"));
	printf("Long => %s\n", ft_strcpy(dest, "Hello world; test1; test2; test3; test4; test5"));
}

void test_strdup()
{
	printf("\033[0;32m\n=== ft_strdup ===\n\033[0m");
	printf("Vide => %s\n", ft_strdup(""));
	printf("Normal => %s\n", ft_strdup("Hello"));
	printf("Long => %s\n", ft_strdup("Hello world; test1; test2; test3; test4; test5"));
}

void test_write()
{

}

void test_read()
{
	int	fd;
	int ret;
	char buf[100];

	fd = open("read.txt", O_RDONLY);
	errno = 0;
	ret = read(fd, buf, 50);
	buf[50] = '\0';
	printf("[%d] %s\nerrno: %d\n", ret, buf, errno);
	close(fd);

	fd = open("read.txt", O_RDONLY);
	errno = 0;
	ret = ft_read(fd, buf, 50);
	buf[50] = '\0';
	printf("[%d] %s\nerrno: %d\n", ret, buf, errno);
	close(fd);


	errno = 0;
	ret = read(-1, buf, 50);
	buf[50] = '\0';
	printf("[%d] %s\nerrno: %d\n", ret, buf, errno);

	errno = 0;
	ret = ft_read(-1, buf, 50);
	buf[50] = '\0';
	printf("[%d] %s\nerrno: %d\n", ret, buf, errno);
}

int main()
{
	printf("\033[0;34m===== TEST LIBASM =====\n\033[0m");

	// test_strlen();
	// test_strcmp();
	// test_strcpy();
	// test_strdup();
	// test_write();
	test_read();
	return (0);
}
