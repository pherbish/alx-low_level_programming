#include "3_calc.h"
#include <stdio.h>
#include <stdlib.h>
/*
 * op_add - addstwo numbers
 * @a :first integer
 * @b: second integer
 * Return : sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substract two numbers
 * @a :first number
 * @b : second number
 * Return: the difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul-finds products of two numbers
 * @a : first number
 * @b : second number
 * Return : product
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - devides two numbers
 * @a: first number
 * @b: second number
 * Return :the result of devision
 */
int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod- finds the modulus of two numbers
 * @a :the first Number
 * @b: the second number
 * Return : the results
 */
int op_mod(int a, int b)
{
	return (a % b);
}
