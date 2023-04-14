#include "main.h"
/**
  * append_text_to_file - agrega text al final del archivo
  * @filename: nombre del archivo
  * @text_content: contenido a agregar
  * Return: 1
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int i = 0, ar;

	if (filename == NULL)
		return (-1);
	if (text_content == NULL)
		text_content = "";
	while (text_content[i])
		i++;
	ar = open(filename, O_WRONLY | O_APPEND);
	if (ar == -1)
		return (-1);
	write(ar, text_content, i);
	return (1);
}
