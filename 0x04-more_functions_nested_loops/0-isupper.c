#include "main.h"

/**
 * _isupper - uppercase letters
 * @O: character to check
 *
 * Return: 0 or 1
 */
int _isupper(int O)

{
	if (O >= 'A' && O <= 'Z')
		return (1);
	else
		return (0);

}
