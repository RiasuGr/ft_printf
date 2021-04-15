/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sabenet <sabenet@student.42nice.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/14 06:04:39 by sabenet           #+#    #+#             */
/*   Updated: 2021/04/14 06:04:39 by sabenet          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ft_printf.h"

/*
    * Remplace une data
    . peut avoir une data avant ou apres
        DATA AVANT 10. Place 10 espace
        DATA APRES .5 Affiche que les 5 premier char ou jusqu'a '\0'
        if -10. Les espace seront placer apres le texte
		%10 print x espace avant char
		0 Ne fonctionne que pour type diuxX
*/

int main()
{
	int a;
	a = printf(" -%-*c* -%-*c* ", 2, 0, -2, 0);
	printf("\n");
	printf("%d\n", a);
	printf("----------\n");
	a = ft_printf(" -%-*c* -%-*c* ", 2, 0, -2, 0);
	printf("\n");
	printf("%d\n", a);
	return 0;
}
/*       
to do ft_before
		//TEST(1, print("%c", '0'));
        //TEST(2, print(" %c ", '0'));
        //TEST(3, print("10%c", '0'));
       	//TEST(4, print("%10c", '0'));
        //TEST(5, print("-10%c", '0'));
      	//TEST(6, print("%-10c", '0'));
        //TEST(7, print("%-10c", '0'));
        //TEST(8, print("%*c", 1, '0'));
        //TEST(9, print("%*c", 0, '0'));
        //TEST(10, print("%*c", 2, '0'));
        //TEST(11, print("%*c", -2, '0'));
        //TEST(12, print("%*c", 0, '0'));
        //TEST(13, print("%*c", 10, '0'));
        //TEST(14, print("%*c", -10, '0'));
        //TEST(15, print("%*c%*c", -10, '0', 10, '1'));
        //TEST(16, print("*%c%*c", '0', 10, '1'));
        //TEST(17, print("%*c%c*", -10, '0', '1'));
        //TEST(18, print("%-10c*",'0'));
        //TEST(19, print("%-10c%*c%c*",'0', 10, '1', '2'));
        //TEST(20, print("%c%c%c*",'0', '1', '2'));
        //TEST(21, print("%-c%-c%c*", 1, '0', 0));
        //TEST(22, print("%c", '0' - 256));
        //TEST(23, print("%c", '0' + 256));
        //TEST(24, print("%c", 0));
        //TEST(25, print("0%c", 0));
        //TEST(26, print("%c", -129));
        //TEST(27, print("%c", 128));
        //TEST(28, print("%-*c", 10, '1'));
        //TEST(29, print(" -%*c* -%-*c* ", -2, 0, 2, 0));
        TEST(30, print(" -%-*c* -%-*c* ", 2, 0, -2, 0));
        //TEST(31, print(" -%*c* -%-*c* ", -1, 0, 1, 0));
        TEST(32, print(" -%-*c* -%-*c* ", 2, 0, -2, 0));
        //TEST(33, print(" -%-2c* -%2c* ", 0, 0));
*/