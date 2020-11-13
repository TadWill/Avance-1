//Avance #1 del Proyecto
//Tadeo Andres Willis Lozano 
//A00829341
//13/11/2020

//--------------------------------------------------

//Proyecto hasta ahora:
//		Crear un pequeño videojuego en base a puros characteres.
//		Todavia falta realizar el diseño del videojuego.
#include<string>

//Independientemente de cual sera el diseño del videojuego,
//El usuario podra moverlo utilizando el teclado, por lo que
//el personaje o objeto del juego se movera en un plano de x y y.

//Se crea una clase del personaje y su movimiento, a traves de x y y.

class Personaje{
	//los atributos principales seran las coordenadas de x y y.
	int x, y;
public:
	//Se hace un "Constructor" para poder manejar los parametros de x y y.
	Personaje(int x, int y);
	//Aqui se escribiran unas funciones de "mentiras" que se pueden intuir en base a lo que se
	//quiere lograr.
	void dibujar();
	//dibujar, nos ayudara a imprimir el personaje o objeto que el usuario movera.
	void borrar();
	//borrar nos ayudara a eliminar los "restos" de la funcion dibujar, para que el objeto sea uno solo.
	void movimiento();
	//en esta funcion se creara el movimiento que el usuario proporicione al objeto.
	
};

//Mas adelante se definiran las funciones para que se pueda crear el personaje y su movimiento.




int main(){
	


	
	
	
	
	
	
	
	
	return 0;
}
