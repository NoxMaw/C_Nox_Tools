#include <stdarg.h>

typedef struct table
{
	char *type;
	/**
	 * Este punteros void se encarga de recibir cualquier
	 * valor necesario para ejecutar la funcion deseada.
	 * es sólo un puntero ya que la idea es pasar los valroes
	 * uno por uno a medida que la string es leída.
	 */
	int (*fun)(void *a);
} table;

/**
 * getFunction - Descripcion corta no aplica
 *
 * Return: (*function)(void *)
 * Descripcion: Esta funcion se encarga de identificar
 * que función debe ser operada en el parametro pasado a ella.
 * En caso de error retorna NULL.
 */
 int (*getFunction(char *funType))(void *)
 {
	 int i = 0;
	 
	 table funselector{
		{'c', funChar};
		{'d', funInt};
		{'i', funInt};
		{'e', funMante};
		{'E', funMantE};
		{'f', funFloat};
		{'g', funChseFE};
		{'G', funChseFe};
		{'o', funOctal};
		{'s', funString};
		{'u', funUnInt};
		{'x', funHexa};
		{'p', funPtrAddr};
		{'n', funStrLnght};
		{'%', funOperand};
		{NULL, NULL};
	};
	
	while (i < 15)
	{
		if ((*funselector[i].type) == *funtype)
			return (*funselector[i].fun); 		//Si el tipo es identificado, retorna la funcion correspondiente
		i++;
	}
	return (NULL);
 }
 
 /**
 * Por hacer: Loop en (*format + i) que identifique si format[i] == '%'
 * Si format[i] == '%' entonces || i + 1 |>>| operation = format[i] |||
 * Eso signifca que operation = lo que sea que esta despues de '%'
 * Entonces asignamos el valor de getFunction(operation); a funPtr;
 * finalmente llamamos a funPtr(va_arg (holds, int)
 */
int _printf (const char *format, ...)
{
	int i = 0, varCnt = 0;
	char operation;
	void *funPtr;
						/** maybe add a variable that gobbles up the strings as some sort of buffer before printing them
						* in the following function, so we can easily send that variable to write() before moving on
						* to the function operation
						*/
	if (format != NULL && sizeof(*format) != 0)
		while(format[i++] != NULL) //gets the n of characters stored in format, excluding NULL
			if (format[i] == '%')
				varCnt++;		   //gets the num of %'s in format
	else
		exit (-1);
	
	if (varCnt > 0)
	{
		va_list (arguments, varCnt);
		va_start (arguments, varCnt);
	}
	
	
}