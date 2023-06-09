#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints its own opcodes
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[]) {
    if (argc != 2) {
        printf("Error\n");
        return 1;
    }
    int num_bytes = atoi(argv[1]);
    if (num_bytes < 0) {
        printf("Error\n");
        return 2;
    }
    unsigned char *func = (unsigned char*)main;
    for (int i = 0; i < num_bytes; i++) {
        printf("%02x", *(func + i));
    }
    printf("\n");
    return 0;
}
