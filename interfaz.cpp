#include <iostream>
#include <string>
#include <iomanip>
#include "funciones.h"

using namespace std;
void tabla_superior() {
	cout << setw(10) << "Tiempo(s)"
         << setw(15) << "Angulo(rad)"
         << setw(15) << "Altura(m)"
         << setw(15) << "Velocidad(m/s)"
         << setw(15) << "E.Potencial(J)"
         << setw(15) << "E.Cinetica(J)"
         << setw(15) << "E.Total(J)" << endl;


}