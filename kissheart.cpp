#include <iostream>
#include <cstdlib>
#include <thread>
#include <chrono>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
 
int main(int argc, char** argv) {
	bool loop_ropa = true, loop_ernesto = true, loop_gaby = true;
	int puntos, cont, manuel,ernesto, gabriel;
	cont,puntos,gabriel,manuel,ernesto=0;
	int resp[3];

	cout<< "¡Bienvenido a KissHeart!"<<endl<<"Un juego interactivo de romance donde tu eliges la historia"<<endl;
	cout<< "¡Comencemos!"<<endl;

	//Bucle Ropa bonita
	while(loop_ropa == true){
		cout<<"Despertaste luego de que tu madre te levantara. ¿Que decides ponerte?"<<endl;
		cout<<"1)Un buzo y un jean ancho"<<endl<<"2)Un vestido con estampado de fresitas"<<endl<<"3)Camisa con estampado de una banda de rock y un short"<<endl;
		cin>>resp[0];	
	
		switch(resp[0]){
			case 1: 
				gabriel=20;
				manuel=	manuel-20;
				loop_ropa = false;
				
				break;
			case 2: 
				manuel=20;
				ernesto=ernesto-20;
				loop_ropa = false;
				
				break;
			case 3: 
				ernesto=20;
				manuel=manuel-20;
				loop_ropa = false;
				
				break;
			default:
				cout<<"Ingrese uno de los numeros de cada respuesta"<<endl;
				loop_ropa = true;
				
				break;
		}
		#ifdef _WIN32
		system("cls");
		#endif
	}
	
	//Gabriel
	while (loop_gaby == true){
	
		cout<< "Vas de camino a la escuela y te llega un mensaje de tu novio. Te dice que quiere que hablen seriamente de su relación. ¿Que decides hacer?"<<endl;
		cout<<"1)Le respondes que se vean en el receso"<<endl<<"2)No le contestas porque ya no te interesa"<<endl;
		cin>>resp[1];
	
		switch(resp[1]){			
			case 1:
				gabriel=+30;	
				loop_gaby = false;
				break;

			case 2:
				gabriel=-20;
				loop_gaby = false;
				break;

			default: 
				cout<<"Ingrese uno de los numeros de cada respuesta"<<endl;
				break;
		}
		#ifdef _WIN32
		system("cls");
		#endif	
	}

	//ernesto
	while(loop_ernesto == true){
		cout<<"Mientras esperabas a que termine la clase, dos compañeros se jutaron en el centro y empezaron una batalla de rap."<<endl;
		cout<<"Esto te genera curiosidad y te acercas a ver"<<endl;
		cout<<"Uno de estos chicos se llama Ernesto y es el que termina ganando la batalla. Te mira y te guiña el ojo. "<<endl;
		cout<<"1)Le devuelves una sonricita."<<endl<<"2)Lo miras feo."<<endl;
		cin>>resp[2];
			
		switch(resp[2]){	
			case 1:
				ernesto=+30;
				cout<<"Ernesto se acerca a ti y se acomoda su cabello largo y negro. Te dice  “Hola chiquita“ con su voz gruesa y conversan un rato"<<endl;
				loop_ernesto = false;
				break;
			
			case 2:
				ernesto=-20;
				cout<<"Ernesto se asusta de tu mirada y te esquiva"<<endl;
				loop_ernesto = false;
				break;
				
			default: 
				cout<<"Ingrese uno de los numeros de cada respuesta"<<endl;
				break;
		}

		this_thread::sleep_for(std::chrono::seconds(5));

		#ifdef _WIN32
		system("cls");
		#endif	
	}
			
	//bucle de manuel
	
	cout<<"FIN";
	return 0;
}