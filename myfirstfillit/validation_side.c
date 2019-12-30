#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include "fillit.h"
#include <string.h>

// int validationtetr()
// {

	
// }

int	main(void)
{
	char	*tetr;
	char 	*str;
	int		res;
	int		fd;
	int 	ret;
	int 	count = 0;
	char	*temp;
	char 	**map;
	int 	i = 0;
	int 	j = 0;
	int 	k = 0;
	int 	h = 0;
	int 	size;
	int 	side = 0;
	char buf[22];

	int test = 0;

	//Попробовать использовать get_next_line для чтения тетроминок В этот раз должно получится!!!


	fd = open("tetrominos", O_RDONLY);  			//in the real programm we must open second argument!
	// 												//MUST DO VALIDATE INPUT FILES

	// while ((ret = read(fd, buf, 21)) > 0)          //Считываем по 21 символу с файла
	// {
	// 	buf[ret] = '\0';
	// 	if (!str)
	// 		str = ft_strnew(0);
	// 	temp = ft_strjoin(str, buf);
	// 	ft_strdel(&str);
	// 	str = temp;
	// 	// if (ft_strchr(buf, '\0'))               //Возможна валидация, если читает последнюю тетроминку!!(21 символ = \0)
	// 	// 	ret = ..
	// 	count++;
	// }








	str = ft_strnew(0);
	while ((ret = read(fd, buf, 21)) > 0)
	{
		buf[ret] = '\0';
		temp = ft_strjoin(str, buf);
		ft_strdel(&str);
		str = temp;
		count++; 									//Сколько у нас есть фигур
	}
	char** arr = ft_strsplit(str, '\n');

	t_tetr *head = NULL;

	t_tetr *tetrominos = (t_tetr*)malloc(sizeof(t_tetr));
	tetrominos->coordx = arr[3][3];
	int figura = 0;

	
	while (i < 4)        //Находит координаты тетроминок!! Колличество тетраминок тоже из валидации
	{					//написать валидацию на количество тетромино, опираясь на одинокий '\n' 
		j = 0;

		while (j < 4)
		{
			if (arr[i][j] == '#')
			{
				tetrominos->x[figura] = i;		//Разместить тетроминку на мапе!! Доделать завтра!!
				tetrominos->y[figura] = j;
				figura++;
			}
			j++;
		}
		i++;
	}
	int minx;
	int miny;
	minx = tetrominos->x[0];
	miny = tetrominos->y[0];
	i = 1;
	while (i < 4)			//Ищет минимальный х и у!
	{
		if (tetrominos->x[i] < minx)
			minx = tetrominos->x[i];
		if (tetrominos->y[i] < miny)
			miny = tetrominos->y[i];
		i++;
	}
	printf("%d\n", minx);
	printf("%d\n", miny);
	i = 0;
	while (i < 4)			//Нормализует тетроминку вычетом минимального значения!
	{
		tetrominos->x[i] -= minx;
		tetrominos->y[i] -= miny;
		printf("%d\n", tetrominos->x[i]);
		printf("%d\n", tetrominos->y[i]);
		i++;
	}


	map = (char **)malloc(sizeof(char *) * count); 	//Умножить на размер мапы, взять из валидации мапы
	while (i < 6)									//СОздание Мапы
	{
		map[i] = (char *)malloc(sizeof(char *));
		j = 0;
		while (j < 6) 
		{
			map[i][j] = '.';
			j++;
		}
		i++;
	}




	// i = 0;
	// j = 0;
	// figura = 0;
	// while (i < 5)
	// {
	// 	j = 0;
	// 	while (j < 5)
	// 	{
	// 		if (tetrominos->x[figura] ==)
	// 		j++;
	// 	}
	// 	printf("\n");
	// 	i++;
	// }

	// i = 0;
	// j = 0;
	// k = 0;
	// h = 0;


	//printf("%d\n", tetrominos->y[0]);





	// while (i < 5)
	// {
	// 	j = 0;
	// 	while (j < 5)
	// 	{
	// 		if (arr[i][j] == '#')
	// 		{
	// 			kek->figura = arr[i][j];
	// 			kek->next = (t_tetr *)malloc(sizeof(t_tetr));
	// 		}
	// 		j++;
	// 	}
	// 	i++;
	// }
	// while (kek){
	// 	printf("%c\n", kek->figura);
	// 	kek = kek->next;
	// }







	// kek = (t_tetr *)malloc(sizeof(t_tetr));
	// boshka = kek;
	// kek->x = arr[3][3];                //Запись в лист координаты всех частей тетроминошек!!!
	// kek->next = (t_tetr *)malloc(sizeof(t_tetr));
	// kek = kek->next;
	// kek->y = arr[3][2];

	// printf("%c\n", boshka->x);
	// printf("%c\n", boshka->y);
	// while (boshka)
	// {
	// 	printf("%c\n", boshka->x);
	// 	boshka = boshka->next;
	// }

	// if (arr) {
	// 	printf( "%s\n", arr[ 0 ] ); // "qwerty"
	// 	printf( "%s\n", arr[ 1 ] ); // "asdfgh"
	// 	printf( "%s\n", arr[ 2 ] ); // ""
	// 	printf( "%s\n", arr[ 3 ] ); // "zxcvbn"
	// 	printf( "%s\n", arr[ 4 ] ); // NULL
	// 	printf( "%s\n", arr[ 5 ] ); 
	// 	printf( "%s\n", arr[ 6 ] ); 
	// 	// free( arr );
	// }

	// str = (char **)malloc(sizeof(char *) * 5 + 1); //Умножить на размер мапы, взять из валидации мапы
	
	// while (i < 5)                                  //Тут должна быть проверка с кол-вом тетроминошек
	// {
	// 	str[i] = (char *)malloc(sizeof(char) * 9 + 1);
	// 	i++;
	// }

	// while ((ret = read(fd, buf, 5)) > 0)
	// {
	// 	buf[ret] = '\0';
		

	// }




	// printf("%s\n", str);
	// printf("%c\n", str[15]);						//Хранится считанный файл в str (Просто коммент)

	// map = (char **)malloc(sizeof(char *) * count); 	//Умножить на размер мапы, взять из валидации мапы
	// while (i < 6)
	// {
	// 	map[i] = (char *)malloc(sizeof(char *));
	// 	j = 0;
	// 	while (j < 6) 
	// 	{
	// 		map[i][j] = '.';
	// 		j++;
	// 	}
	// 	i++;
	// }

	// i = 0;
	// j = 0;

	//JUST OUTPUT!!!!!!!!!!!!NO MORE!!!!!!!!!!!!
	// i = 0;
	// j = 0;
	// while (i < 6)
	// {
	// 	j = 0;
	// 	while (j < 6)
	// 	{
	// 		//if ()
	// 		printf("%c", map[i][j]);
	// 		j++;
	// 	}
	// 	printf("\n");
	// 	i++;
	// }
	// //JUST OUTPUT!!!!!!!!!!!NO MORE!!!!!!!!!!!!!!
	// return (0);
}