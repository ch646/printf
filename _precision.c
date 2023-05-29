#include "main.h"
/**
 * get_precision - Calculates the precision to  print
 * @format: Formatted string to print the arguments
 * @j: List of arguments to  print
 * @list: list  arguments.
 *
 *
 * Return: Precision.
 */
int get_precision(const char *format, int *j, va_list list)
{
	int cur_j = *i + 1;
	int precision = -1;


	if (format[cur_j] != '.')
	return (precision);
	precision = 0;
	for (cur_j += 1; format[cur_j] != '\0'; cur_++)
	{
	if (is_digit(format[cur_j]))
	{
	precision *= 10;
	precision += format[cur_j] - '0';
	}
	else if (format[cur_j] == '*')
	{
	cur_j++;
	precision = va_arg(list, int);
	break;
	}
	else
	break;
	}
	*j = cur_j - 1;
	return (precision);
}
