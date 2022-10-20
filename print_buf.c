#include "main.h"

/**
  *print_buf - prints the buffer
  *@buf: pointer to buffer
  *@nbuf: number of bytes to print
  *Return: number of bytes to print
  */

int print_buf(char *buf, unsigned int nbuf)
{
	return (write(1, buf, nbuf));
}
