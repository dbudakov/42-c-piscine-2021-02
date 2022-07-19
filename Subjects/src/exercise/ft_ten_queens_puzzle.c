#include "../../include/libft.h"

#define BEGIN 0
#define END 10
#define SIZE_ARR_MASK 30


static void ft_ten_queens_puzzle_init_str(char str[10][10])
{
    int line = 0;
    int column = 0;

    while (line < 10)
    {
        while (column < 10)
            str[line][column++] = '.';
        column = 0;
        line++;
    }
}

static void ft_ten_queens_puzzle_init_mask(char *back_column, char *back_line)
{
    int i = 0;
    
    while(i < SIZE_ARR_MASK)
    {
        back_line[i] = -1;
        back_column[i] = -1;
        i++;
    }
}

static int ft_ten_queens_puzzle_set_mask_point(char *back_column, char *back_line, int column, int line)
{
    int o = 0;
    while ((back_column[o] != -1) && (o < SIZE_ARR_MASK))
        o++;
    back_column[o] = column;
    back_line[o] = line;
    if ((back_column[o] == 0) && (back_line[o] == 9))
        return 1;    
    return 0;
}

static void ft_ten_queens_puzzle_rewrite_mask(char *back_column, char *back_line, int column)
{
    int c = 0;

    while(c < SIZE_ARR_MASK)
    {
        if (back_column[c] > column)
        {   
            back_column[c] = -1;
            back_line[c] = -1;
        }
        c++;
    }
}

static void ft_ten_queens_puzzle_continue(char str[10][10], int column)
{
    int line = 0;

    while(str[column][line] != 'X' &&  str[column][line] != '.')
        line++;
    str[column][line] = 'X';
}

static void ft_ten_queens_puzzle_set_points(char str[10][10], int column, int line)
{
    int buffer = 0;
    int buffer_line = 0;

    buffer = column;
    while(column < 10)
        str[line][column++] = 'X';
    column = buffer;
    buffer_line = line;
    line++;
    while(column < 10 && line < 10)
        str[line++][column++] = 'X';
    column = buffer;
    line = buffer_line - 1;
    while(line > 0 - 1 && column < 10)
        str[line--][column++] = 'X';
    column = buffer;
}

static void ft_ten_queens_puzzle_clean(char str[10][10])
{
    int line = 0;
    int column = 0;

    while (line < 10)
    {
        while (column < 10)
            str[line][column++] = '.';
        column = 0;
        line++;
    }
}

static int ft_ten_queens_puzzle_set_mask(char str[10][10], char *back_column, char *back_line)
{
    int a = 0;
    ft_ten_queens_puzzle_clean(str);
    while(back_column[a] != -1 && a < SIZE_ARR_MASK)
    {
        str[back_line[a]][back_column[a]] = 'X';
        a++;
    }
    return a;
}

static void ft_ten_queens_puzzle_output(char str[10][10])
{
    int j = 0, k = 0;
    
    while(k < 10)
    {
        while(j < 10)
        {
            if (str[j][k] != 'X' && str[j][k] != '.') 
                ft_putchar(str[j][k]);
            j++;
        }
        j = 0;
        k++;
    }   
    ft_putchar('\n');
}

/* задача: расставить 10 королев на шахматной доске, без пересечений                            */
/*                                                                                              */
/* Механика следующая, проинициализируйте таблицу и маску в пустые занчения                     */
/* Королева ставится в первый свободный слот, после чего закрываются слоты на которые она       */
/* может ходить. Если в текущей колонке нет свободных слотов, возвращаемя на одну колонку       */
/* назад и находим тупиковую позицию королевы, добавляем ее в маску и обнуляем шахматную доску, */
/* но уже с закрым тупиковым слотом из маски, теперь последняя королева встанет на следующий    */
/* слот а не на закрытый. Тупиковые слоты помечаются закрытыми, поэтому если в колонке          */
/* все слоты тупиковые то механизм получения ячеек маски возвращает нас еще на одну колонку     */
/* назад и помечает текущее положение королевы тупиковым и всю ветку тупиковых слотов,          */
/* для колонок старше текущей(новая веха), у новой вехи чистая ветка                            */
/* выход(return) осуществляется если тупиковым назначается 10 линия первой колонки  т.е.        */
/* конец таблицы. Вывод удачной комбинации происходит в случае если счетчик  колонок            */
/* доходит до 10, это значит что в 10'ой колонке установилась королева                          */
int ft_ten_queens_puzzle(void)
{
    int flag_mask = 1;
    int column = 0;
    int line = 0;
    int end = 0;
    int num_result = 0;
    char str[10][10];    
    char back_line[SIZE_ARR_MASK];
    char back_column[SIZE_ARR_MASK];

    ft_ten_queens_puzzle_init_mask(back_column, back_line);
    ft_ten_queens_puzzle_init_str(str); 
    while(column < END)
    {   
        if (0 == flag_mask)
            flag_mask = ft_ten_queens_puzzle_set_mask(str, back_column, back_line);
        
        if ('.' == str[line][column])
        {
            str[line][column++] = line + 48;
            ft_ten_queens_puzzle_set_points(str, column, line);
            line = BEGIN - 1;
        }
        
        if (END == column)
        {
            num_result++;
            ft_ten_queens_puzzle_output(str);
            ft_ten_queens_puzzle_continue(str, column);
            line = END;
        }
        
        if (line > (END - 1))
        {
            column--;
            line = BEGIN;
            while('X' == str[line][column])
                line++;
            ft_ten_queens_puzzle_rewrite_mask(back_column, back_line, column);
            end = ft_ten_queens_puzzle_set_mask_point(back_column, back_line, column, line);
            if (end)
                return num_result;
            column = BEGIN;
            line = BEGIN;
            flag_mask = 0;
        }
        else
            line++;
    }   
    ft_putstr("\n");
    return num_result;
}