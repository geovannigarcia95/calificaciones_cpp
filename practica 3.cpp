#include <iostream>
using namespace std; 
main()

{
	float practica1, practica2, practica3, pt, teorica, teorica2, teorica3, tt, participacion;
	int final;
	cout << "ingresar la primera nota" <<endl;
	cin >> practica1;
	cout << "ingresar la segunda nota" <<endl;
	cin >> practica2;
	cout << "ingresar la tercera nota" <<endl;
	cin >> practica3; 
	pt=(practica1+practica2+practica3)/3;
	pt=pt*.30;
	cout << "ingresar la primera nota teorica" <<endl;
	cin >> teorica;
	cout << "ingresar la segunda nota teorica" <<endl;
	cin >> teorica2;
	cout << "ingresar la tecera nota teorica" <<endl;
	cin >> teorica3;
	tt=(teorica+teorica2+teorica3)/3;
	tt=tt*.60;
	cout << "ingresar la participacion" <<endl;
	cin >> participacion; 
	participacion=participacion*.10;
	final=tt+participacion+pt;
	cout << "Tu calificacion final es : " <<final<< "";
}

