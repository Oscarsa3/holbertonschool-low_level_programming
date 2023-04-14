#include "main.h"
/**
  * create_file - crea un archivo
  * @filename: nombre del archivo
  * @text_content: contenido del archivo
  * Return: contenido
  */
int create_file(const char *filename, char *text_content)
{
	int i = 0, ar;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	while (text_content[i])
		i++;
	ar = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (ar == -1)
		return (-1);
	write(ar, text_content, i);
	return (1);
}
