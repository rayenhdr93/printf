#!/usr/bin/env bash

print()
{
	gcc -Wall -Werror -Wextra -Wno-format -pedantic -std=gnu89 printf.c  std_funcs.c  test.c  type_funcs.c

	if [ $(echo $?) = 0 ]; then

		valgrind --track-origins=yes ./a.out
		./a.out
		rm a.out

	else
		echo -e "\n Compilation error will not execute!"
	fi
}

itoa()
{
	gcc -Wall -Werror -Wextra -Wno-format -pedantic -std=gnu89  std_funcs.c  test1.c

	if [ $(echo $?) = 0 ]; then

		./a.out
		rm a.out

	else
		echo -e "\n Compilation error will not execute!"
	fi
}

strlen()
{
	gcc -Wall -Werror -Wextra -Wno-format -pedantic -std=gnu89  std_funcs.c  test2.c
	if [ $(echo $?) = 0 ]; then

		./a.out
		rm a.out

		else
			echo -e "\n Compilation error will not execute!"
	fi
}

string()
{
	gcc -Wall -Werror -Wextra -Wno-format -pedantic -std=gnu89 printf.c  std_funcs.c  test3.c  type_funcs.c
	if [ $(echo $?) = 0 ]; then

		./a.out
		rm a.out

		else
			echo -e "\n Compilation error will not execute!"
	fi
}

complex()
{

	gcc -Wall -Werror -Wextra -Wno-format -pedantic -std=gnu89 printf.c  std_funcs.c  test4.c  type_funcs.c
	if [ $(echo $?) = 0 ]; then

		./a.out
		rm a.out

		else
			echo -e "\n Compilation error will not execute!"
	fi
}


case $1 in
	print)
		print
		;;
	itoa)
		 itoa
	;;
	strlen)
		strlen
		;;
	string)
		string
		;;
	complex)
		complex
		;;
	*)
		echo "Type a test name!"
		;;

esac
