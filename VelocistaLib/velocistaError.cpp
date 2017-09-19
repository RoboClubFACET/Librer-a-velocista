#include "Arduino.h"
#include "velocistaError.h"

VelocistaError::VelocistaError(Velocista * velocista)
{

}

float VelocistaError::obtenerDiferencialSensores()
{
  return ((velocista->ir1->lecturaAnagolica()-velocista->ir2->lecturaAnagolica())+(velocista->ir1->lecturaAnagolica()-velocista->ir3->lecturaAnagolica()))
}

float VelocistaError::calcularError()
{
  return (obtenerDiferencialSensores() * pendiente_);
}
