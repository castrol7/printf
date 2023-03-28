#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define BUFFER_SIZE 1024

/**
*main - Entry point of the program
*
*Return: 0 on success, non-zero on failure
*/
int main(void)
{
char buffer[BUFFER_SIZE];
size_t nread;
FILE *fp = fopen("output.txt", "w");

if (fp == NULL)
{
perror("Failed to open file");
exit(EXIT_FAILURE);
}
while ((nread = fread(buffer, sizeof(char), BUFFER_SIZE, stdin)) > 0)
{
if (fwrite(buffer, sizeof(char), nread, fp) != nread)
{
perror("Failed to write to file");
exit(EXIT_FAILURE);
}
}
if (fclose(fp) != 0)
{
perror("Failed to close file");
exit(EXIT_FAILURE);
}
return (0);
}
