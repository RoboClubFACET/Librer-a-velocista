#ifndef VELOCISTAERROR_H
#define VELOCISTAERROR_H

#include "sensores.h"
#include "velocista.h"

class VelocistaError{
  /// Contructor
  /**
  * @param puntero de tipo Velocista.
  */
  VelocistaError(Velocista * velocista);

private:
  //retorna el diferencial de los sensores, un número entre 0 y 1024(por ahora solo tres sensores)
  // resta sensor 1-2 y 2-3 y suma ambos resutados eso retorna
  float obtenerDiferencialSensores();

  //Pendiente 1/1024
  const float pendiente_ = 0.0009765625;

public:

  //y = 1/1024.x + 0
  float calcularError();


};

#endif
