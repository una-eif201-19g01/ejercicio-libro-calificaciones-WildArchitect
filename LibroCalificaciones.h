/*
 * =====================================================================================
 *
 *       Filename:  LibroCalificaciones.h
 *
 *    Description:  Encabezado de la clase Libro Calificaciones
 *
 *        Created:  2019-08-05
 *
 *         Author:  Maikol Guzman Alan mikeguzman@gmail.com
 *   Organization:  Universidad Nacional de Costa Rica
 *
 * =====================================================================================
 */


#ifndef LIBROCALIFICACIONES_LIBROCALIFICACIONES_H
#define LIBROCALIFICACIONES_LIBROCALIFICACIONES_H

#include <string>

class LibroCalificaciones 
{
	std::string nombreCurso;
	int nota;
	std::string obtenerRangoLetra();

public:
	LibroCalificaciones();
	LibroCalificaciones(const std::string &nombreCurso; int nota);

	//Metodos
	std::string obtenerMensaje();
	//GET
	const std::string &getNombreCurso() const;
	//SET
	void setNombreCurso(const std::string &nombreCurso);
	//GET 
	int getNota() const;
	//SET
	void setNota(int nota);
};


#endif //LIBROCALIFICACIONES_LIBROCALIFICACIONES_H
