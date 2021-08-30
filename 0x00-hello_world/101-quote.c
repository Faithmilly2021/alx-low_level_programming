#!/bin/bash
#include <stdio.h>
/**
*main- print exactly "and the piece of art isuseful"
*- Dora Korpar 2015-10
*followed by a new line, to the standard error
*Return: Always 1 (success)
*/
int main(void)
{
write(2, "and the piece of art is useful\" -Dora Korpar 2015-10-19 \n", 59);
return (1);
}
