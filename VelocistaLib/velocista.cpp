#include "Arduino.h"
#include "velocista.h"

Velocista::Velocista(VelocistaConfig config) :  izq(config.pinMotorIzqPos, config.pinMotorIzqNeg, config.pinPwmIzq),
                                                der(config.pinMotorDerPos, config.pinMotorDerNeg, config.pinPwmDer),
                                                ir1(config.pinIr1, 0),
                                                ir2(config.pinIr2, 0),
                                                ir3(config.pinIr2, 0),
                                                ir4(config.pinIr2, 0),
                                                ir5(config.pinIr2, 0)
{
    
}