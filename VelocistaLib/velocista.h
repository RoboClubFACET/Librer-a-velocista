#ifndef VELOCISTA_h
#define VELOCISTA_h

#include "sensores.h"
#include "motor.h"

typedef struct {
	int pinMotorIzqPos;
	int pinMotorIzqNeg;
	int pinPwmIzq;
	int pinMotorDerPos;
	int pinMotorDerNeg;
	int pinPwmDer;
	int pinIr1;
	int pinIr2;
  int pinIr3;
  int pinIr4;
  int pinIr5;
} VelocistaConfig;

class Velocista {
public:
    Velocista(VelocistaConfig config);

private:
    Motor izq;
    Motor der;
    Infrarrojo ir1;
    Infrarrojo ir2;
    Infrarrojo ir3;
    Infrarrojo ir4;
    Infrarrojo ir5;
};

#endif
