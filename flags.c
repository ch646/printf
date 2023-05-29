#include "main.h"


/**
 * get_flag - turns on flags if _printf finds
 * @s: character holding the flag
 * @f: pointer to the struct flags where flag is
 *
 * Return: 1 if a flag turned on, 0 otherwise
 */
int get_flag(char s, flags_t *f)
{
	int j = 0;


	switch (s)

	{
	case '+':
	f->plus = 1;
	j = 1;
	break;

	case ' ':
	f->space = 1;
	j = 1;
	break;

	case '#':
	f->hash = 1;
	j = 1;
	break;

	}
	return (j);
}
