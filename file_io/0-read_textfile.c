#include "main.h"
/**
  * read_textfile - lee archivo
  * @filename: nombre del archivo
  * @letters: numero de letras a imprimir
  * Return: las letras
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t ar, le, e;
	char *txt;

	txt = malloc(letters);
	if (txt == NULL)
		return (0);
	if (filename == NULL)
		return (0);
	ar = open(filename, O_RDONLY);
	if (ar == -1)
	{
		free(txt);
		return (0);
	}
	le = read(ar, txt, letters);
	e = write(STDOUT_FILENO, txt, le);
	close(ar);
	return (e);
}
