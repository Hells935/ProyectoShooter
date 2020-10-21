
#include <iostream>
#include <string>
using namespace std;

struct Vector {
	float x, y, z;
};

struct Jugador {
	string nombre;
	int ps;
	int armor;
	int nuevops;
	int nuevaArmor;
	Vector vector;

	void reducirPs(int damage) {
		if (armor > 0) {
			nuevaArmor = armor;
			nuevaArmor -= damage;
			if (damage > 200) {
				nuevops = armor - damage;
				ps = ps + nuevops;
				armor = 0;
			}
			else {
				armor -= damage;
			}
		}
		else if (armor == 0) {
			ps -= damage;
		};
	}
	int aumentarPs(int cantidad) {
		ps += cantidad;
		if (ps >= 100) {
			ps = 100;
		}
		return ps;
	}

	int aumentarArmor(int cantidad) {
		armor += cantidad;
		if (armor >= 200) {
			armor = 200;
		}
		return armor;
	}
};

int main()
{
	Jugador jugador;
	jugador.nombre = "Hells19";
	jugador.ps = 100;
	jugador.armor = 0;
	jugador.reducirPs(90);

	jugador.vector.x = jugador.vector.y = jugador.vector.z = 0;

	cout << jugador.nombre << " te dieron en la mera chompa, ahora tienes " << jugador.ps << " puntos de vida y " << jugador.armor
		<< " de armadura" << endl;
	cout << jugador.nombre << " te haz curado tio, tienes ahora " << jugador.aumentarPs(119) << " puntos de vida y " << jugador.aumentarArmor(219) << " de armadura" << endl;

}

// Ejecutar programa: Ctrl + F5 o menú Depurar > Iniciar sin depurar
// Depurar programa: F5 o menú Depurar > Iniciar depuración

// Sugerencias para primeros pasos: 1. Use la ventana del Explorador de soluciones para agregar y administrar archivos
//   2. Use la ventana de Team Explorer para conectar con el control de código fuente
//   3. Use la ventana de salida para ver la salida de compilación y otros mensajes
//   4. Use la ventana Lista de errores para ver los errores
//   5. Vaya a Proyecto > Agregar nuevo elemento para crear nuevos archivos de código, o a Proyecto > Agregar elemento existente para agregar archivos de código existentes al proyecto
//   6. En el futuro, para volver a abrir este proyecto, vaya a Archivo > Abrir > Proyecto y seleccione el archivo .sln
