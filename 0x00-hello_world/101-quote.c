#include <unistd.h>

/**
 * main - Entry point of the program
 *
 * Description: This program prints the specified message to the standard error
 * using the `write` function and returns 1 to indicate an error.
 *
 * Return: Always 1 (Error)
 */
int main(void)
{
    char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

    write(2, message, 59); /* 59 is the length of the message */
    return (1);
}
