/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yomai-va <yomai-va@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 13:31:26 by yomai-va          #+#    #+#             */
/*   Updated: 2018/12/28 20:29:44 by yomai-va         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

/*
void	ft_is_negative(int n);

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int		main(int argc, char **argv)
{

	if (argc >= 1)
		ft_is_negative(atoi(argv[1]));
	return (0);
}

//MAIN STRDUP
int main()
{
    char *p1 = "Raja";
    char *p2;
    p2 = ft_strdup(p1);
 
    printf("Duplicated string is : %s", p2);
    return 0;
}

//MAIN FT RANGE

int main()
{

	int i = 0;
	int *p1;
	p1 = ft_range(5, 8);
	while (i < 3)
	{
    printf("%d", p1[i]);
	i++;
	}
    return 0;
}

//MAIN FT MEMSET
int main () {
   char str[50];

   strcpy(str,"This is string.h library function");
   puts(str);
	printf("Fonction memset \n");
   memset(str,'$',7);
   puts(str);
   printf("My ft_memset \n");

   ft_memset(str,'$',7);
   puts(str);
   
   return(0);
}

//MAIN BZERO

int main () {
   char str[50];

   strcpy(str,"This is string.h library function");
   puts(str);
   printf("My bzero \n");
   ft_bzero(str, 7);
   puts(str);

   return(0);
}

//MAIN MEMCPY

int main () {
   const char src[50] = "http://www.tutorialspoint.com";
   char dest[50];
   strcpy(dest,"Heloooo!!");
   printf("Before memcpy dest = %s\n", dest);
   memcpy(dest, src, strlen(src)+1);
   printf("After memcpy dest = %s\n", dest);
   ft_memcpy(dest, src, strlen(src)+1);
   printf("After ft_memcpy dest = %s\n", dest);

   return(0);
}

//MAIN MEMMOVE


int main () {
   char dest[] = "oldstring";
   const char src[]  = "newstring";

   printf("Before memmove dest = %s, src = %s\n", dest, src);
   ft_memmove(dest, src, 9);
   printf("After memmove dest = %s, src = %s\n", dest, src);

   return(0);
}

//MAIN MEMCCPY
char* msg = "This is the string: not copied";

int main( void )
{
    char buffer[80];

    memset( buffer, '\0', 80 );
    ft_memccpy( buffer, msg, ':', 80 );

    printf( "%s\n", buffer );
    
    return NULL;
}

// MAIN MEMCHR

int main () {
   const char str[] = "http://www.tutorialspoint.com";
   const char ch = '.';
   char *ret;
	
	ret = memchr(str, ch, strlen(str));
	   printf("MEMCHR VALUE String after |%c| is - |%s|\n", ch, ret);

   ret = ft_memchr(str, ch, strlen(str));
	// printf("The value of(my value return) d1 + i is : %c\n", *(d1 + i));


   printf("MY FTMEMCHR VALUE String after |%c| is - |%s|\n", ch, ret);

   return(0);
}

//MAIN MEMCMP

int main () {
   char str1[15];
   char str2[15];
   int ret;

   memcpy(str1, "abcdef", 6);
   memcpy(str2, "ABCDEF", 6);

   ret = ft_memcmp(str1, str2, 1);

   if(ret > 0) {
      printf("str2 is less than str1");
   } else if(ret < 0) {
      printf("str1 is less than str2");
   } else {
      printf("str1 is equal to str2");
   }

   return(0);
}

//MAIN STRCHR

int main () {
   const char str[] = "http://www.tutorialspoint.com";
   const char ch = '.';
   char *ret;

   ret = ft_strchr(str, ch);
	//printf("The value of(my value return) s2+ i is : %c\n", *(s2 + i));
   printf("String after |%c| is - |%s|\n", ch, ret);

   return(0);
}

//MAIN STRRCHR

int main () {
   int len;
   const char str[] = "http://www.tutorialspoint.com";
   const char ch = '.';
   char *ret;

   ret = ft_strrchr(str, ch);

   printf("String after |%c| is - |%s|\n", ch, ret);
   
   return(0);
}

//MAIN STRNSTR


int	main(void)
{
	char str[50];
	char find[50];
	strcpy(str, "bonjour a toitoi camrade");
	strcpy(find, "a");
	printf("%lu\n", strlen(str));
	printf("vrai : %s\n", strnstr(str, find, 13));
	printf("mien : %s\n", ft_strnstr(str, find, 13));


	return (0);
}

// MAIN STRTRIM

int	main(void)
{
	const char s[100];
	char *str;
	//strcpy((char *)s, " ");
	strcpy((char *)s, "    HELLO     TOTO    ");
	printf("|%s|\n", s);
	str = ft_strtrim(s);
	printf("|%s|\n", str);
	
	return (0);
}

// MAIN STRSPLIT

int main()
{
	char s[1000000];
	char **z;

	strcpy(s, "a b c");
	z = ft_strsplit(s, ' ');

int i = 0;
	while (z[i])
		printf("|%s|\n", z[i++]);
}

//MAIN ITOA


int main(void)
{
	printf("%s\n", ft_itoa(123156));
	return (0);
}

MAIN FT LSTNEW

int main(void)
{
    t_list  *first;
    t_list  *new;
    
    new = ft_lstnew((char*)"slttt", 45);
    printf("%zu et %s\n", new->content_size, new->content);
    return (0);
}

MAIN FT LSTADD

int main()
{
    t_list *first;
    t_list *current;
    t_list *new;
    current = ft_lstnew((char*)"asdasdass", 87);
    ft_lstadd(&current, ft_lstnew((char*)"fffffff", 41));
    
    while (current)
    {
        printf("%zu\n", current->content_size);
        current = current->next;
    }
    return (0);
}

*/

// MAIN GNL

#include "get_next_line.h"

int	main()
{
	int		fd;
	char	*line;
	int		i = 0;

	fd = open("test.txt", O_RDONLY);

   int r;
// get_next_line(fd, &line);
// ft_putstr(line);

// while ((r = get_next_line(fd, &line)) > 0)
// {
// 	ft_putstr(line);
// 	ft_putchar('\n');
// 	i++;
// }
// while (get_next_line(fd, &line))
//          {
//             ft_putstr(line);
//             ft_putchar('\n');
//          }
while (i < 5)
{
	r = get_next_line(fd, &line);
	ft_putstr(line);
	ft_putchar('\n');
	i++;
}
	return (0);
}