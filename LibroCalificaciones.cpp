/*
 * =====================================================================================
 *
 *       Filename:  LibroCalificaciones.cpp
 *
 *    Description:  Clase de Libro Calificaciones
 *
 *        Created:  2019-08-05
 *
 *         Author:  Maikol Guzman Alan mikeguzman@gmail.com
 *   Organization:  Universidad Nacional de Costa Rica
 *
 * =====================================================================================
 */
#include "LibroCalificaciones.h"
#include <string>

LibroCalificaciones::LibroCalificaciones()
{
	//constructor default
};
LibroCalificaciones::LibroCalificaciones(const std::string &nombreCurso, int nota) : nombreCurso(nombreCurso), nota(nota)
{
	//constructor parámetros
}

std::string LibroCalificaciones::obtenerRangoLetra()
{
	std::string resultado;

	if (getNota >=90)
		{
		resultado = "-A-";
		}
	else if (getNota >= 80 )
		{
			resultado = "-B-";
		}
	else if (getNota >= 70 )
		{
			resultado = "-C-";
		}
	else if (getNota >= 60 )
		{
			resultado = "-D-";	
		}
	else
		{
			resultado = "-F-";
		}
	return resultado;
}

