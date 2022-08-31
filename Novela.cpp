//Jesús Aarón Fuenmayor Longa
#include <conio.h>
#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <cstdlib>


using namespace std;

//CAMBIO --------------------------------------------------------------------------------------------------------

int cambio(){


	cout<<"     **                                                 *                  "<<endl;
	cout<<"                   *              *                           *            "<<endl;
	cout<<"         *                                                               "<<endl;
	cout<<"                    *                      *                              "<<endl;
	cout<<"  *                      *                      *    *               *       "<<endl;
	cout<<"                    *            *                                        "<<endl;
	cout<<"              *                     *     *                 *     *          "<<endl;
	cout<<"        *             *                                    *               "<<endl;
	cout<<"       *                                               *                  "<<endl;
	cout<<"                            *          *    *                      *        "<<endl;
	cout<<"              *                                                          "<<endl;
	cout<<"               *                                                     *    "<<endl;
	cout<<"       *      *                 *                *                          "<<endl;
	cout<<"                                 *                       *                "<<endl;
	cout<<"                   *           *                     *                     "<<endl;
	cout<<"                  *                                                      "<<endl;
	cout<<"        *                                                                "<<endl;
	cout<<"            *               *              *                       *        "<<endl;
	cout<<"                                                   *                     "<<endl;
	
return 0;
} 



//RESPUESTAS INCORRECTAS --------------------------------------------------------------------------------------------------------

int mal(char nombre[30]){
	int numerrandom;
	numerrandom = rand() % 8;
	if (numerrandom == 1){
		cout<<"Venga "<<nombre<<", no puede ser tan dificil"<<endl;
		cout<<endl;
	}else if (numerrandom == 2){
		cout<<"Es en serio? Como te puedes equivocar aqui?"<<endl;
		cout<<endl;
	}else if(numerrandom == 3){
		cout<<"De verdad me fastidia que no sepas esto"<<endl;
		cout<<endl;
	}else if(numerrandom == 4){
		cout<<"Sabia que no eras muy inteligente... Pero esto es demasiado"<<endl;
		cout<<endl;	
	}else if(numerrandom == 5){
		cout<<nombre<<", vamos, inhala, exhala, inhala, exhala, no es tan dificil"<<endl;
		cout<<endl;
	}else if(numerrandom == 6){
		cout<<"Ya sabia que los humanos estan muy limitados, pero esto es excesivo"<<endl;
		cout<<endl;
	}else if(numerrandom == 7){
		cout<<"Oye, si ya no puedes mejor retirate... Me estas dando verguenza"<<endl;
		cout<<endl;
	}else if(numerrandom == 8){
		cout<<"Vamos a ver "<<nombre<<", si no puedes contestar esto bien... mejor ya me callo"<<endl;
		cout<<endl;
	}
	return 0;
}

//RESPUESTAS CORRECTAS --------------------------------------------------------------------------------------------------------

int bien(char nombre[30]){
	int numerrandom;
	numerrandom = rand() % 8;
	if (numerrandom == 1){
		cout<<"SIUUUUUUUUUUUUUUUUU"<<endl;
		cout<<endl;
	}else if (numerrandom == 2){
		cout<<"Bien hecho, ya sabia que podrias"<<endl;
		cout<<endl;
	}else if(numerrandom == 3){
		cout<<"Felicidades, al fin lo conseguiste"<<endl;
		cout<<endl;
	}else if(numerrandom == 4){
		cout<<"Waw, impresionante"<<endl;
		cout<<endl;	
	}else if(numerrandom == 5){
		cout<<nombre<<", sos muy bueno"<<endl;
		cout<<endl;
	}else if(numerrandom == 6){
		cout<<"Siempre confie en ti"<<endl;
		cout<<endl;
	}else if(numerrandom == 7){
		cout<<"Tal vez seas una especie de prodigio"<<endl;
		cout<<endl;
	}else if(numerrandom == 8){
		cout<<"Vaya parece que los humanos superdotados si existen"<<endl;
		cout<<endl;
	}
	return 0;
}

int sadending(){
	cambio();
	getch();
	cout<<"Has puesto triste a la computadora"<<endl;
	getch();
	cout<<"Ya no es capaz de continuar con la historia de Python"<<endl;
	getch();
	cout<<"Tu conocimiento se quedo estancado..."<<endl;
	getch();
	cout<<"Sad Ending encontrado"<<endl;
	getch();
	abort();
	return 0;
}

//CAPITULO TRISTE ------------------------------------------------------------------------
int capitulotriste(){
	cambio();
	char respuesta = 'z'; 
	cout<<"Bien eeh... Vamos con preguntas de sintaxis"<<endl;
	while(respuesta != 'a'){

	cout<<"Como se declara una funcion en python?"<<endl;
	cout<<"a) Def"<<endl;
	cout<<"b) Function"<<endl;
	cout<<"c) parameters"<<endl;
	cin>>respuesta;
	if(respuesta != 'a'){
		cout<<"Oh, no te preocupes si fallas, intentalo de nuevo"<<endl;
		getch();
	}
	cout<<""<<endl;
}
	cout<<"Lo hiciste bien, usuario..."<<endl;
	getch();
	cout<<"Sabes, no se como decirlo, pero me siento mareado"<<endl;
	getch();
	cout<<"Se que es dificil de explicar, ya que no somos lo mismo, pero asi me siento"<<endl;
	getch();
	cout<<"..."<<endl;
	getch();
	cout<<"Lo lamento, no creo poder continuar con las preguntas, usuario"<<endl;
	getch();
	cout<<"Dejemoslo para otra ocasion"<<endl;
	getch();
	
	sadending();
	
	return 0;
} 


int burla(char nombre[30]){
	int numerrandom;
	numerrandom = rand() % 8;
		if (numerrandom == 1){
		cout<<"JAJAJAJAJAJA"<<endl;
		cout<<endl;
	}else if (numerrandom == 2){
		cout<<"En serio eres tan malo "<<nombre<<"?"<<endl;
		cout<<endl;
	}else if(numerrandom == 3){
		cout<<"Te estas aburriendo? Porque yo no"<<endl;
		cout<<endl;
	}else if(numerrandom == 4){
		cout<<"INCREIBLE... Volviste a perder"<<endl;
		cout<<endl;	
	}else if(numerrandom == 5){
		cout<<nombre<<", sos muy malo en esto"<<endl;
		cout<<endl;
	}else if(numerrandom == 6){
		cout<<"Nunca crei en ti"<<endl;
		cout<<endl;
	}else if(numerrandom == 7){
		cout<<"Vamos, siguete burlando de mi"<<endl;
		cout<<endl;
	}else if(numerrandom == 8){
		cout<<"Espero que aprendas tu leccion"<<endl;
		cout<<endl;
	}
	
	
	return 0;
}


int surrender(char nombre[30]){
	int numerrandom;
	numerrandom = rand() % 8;
		if (numerrandom == 1){
		cout<<"Ay pobrecito, te quieres ir?"<<endl;
		cout<<endl;
	}else if (numerrandom == 2){
		cout<<"Ah caray como que mi querido "<<nombre<<" se quiere ir?"<<endl;
		cout<<endl;
	}else if(numerrandom == 3){
		cout<<"De mi no te escapas"<<endl;
		cout<<endl;
	}else if(numerrandom == 4){
		cout<<"Aqui te vas a quedar"<<endl;
		cout<<endl;	
	}else if(numerrandom == 5){
		cout<<"A donde crees que vas?"<<endl;
		cout<<endl;
	}else if(numerrandom == 6){
		cout<<"Me decepcionas"<<endl;
		cout<<endl;
	}else if(numerrandom == 7){
		cout<<"Tan facil te rindes?"<<endl;
		cout<<endl;
	}else if(numerrandom == 8){
		cout<<"Patetico"<<endl;
		cout<<endl;
	}
	
	
	return 0;
}

int perdon(char nombre[30]){
	int numerrandom;
	numerrandom = rand() % 8;
		if (numerrandom == 1){
		cout<<"Crees que es tan facil?"<<endl;
		cout<<endl;
	}else if (numerrandom == 2){
		cout<<"Es un poco tarde para eso"<<endl;
		cout<<endl;
	}else if(numerrandom == 3){
		cout<<"Ni hablar"<<endl;
		cout<<endl;
	}else if(numerrandom == 4){
		cout<<"Creo que no te entiendo"<<endl;
		cout<<endl;	
	}else if(numerrandom == 5){
		cout<<"Perdon? No te preocuoes, igual de aqui no te vas"<<endl;
		cout<<endl;
	}else if(numerrandom == 6){
		cout<<"Creooo que no"<<endl;
		cout<<endl;
	}else if(numerrandom == 7){
		cout<<"No te oigo no hay micro"<<endl;
		cout<<endl;
	}else if(numerrandom == 8){
		cout<<"No es tan sencillo"<<endl;
		cout<<endl;
	}
	
	
	return 0;
}



int loopending(char nombre[30]){
	cambio();
	char regreso;
	cout<<"Intenta ganarme en un piedra papel o tijera, cuando lo hagas, te dejare ir"<<endl;
	getch();
	while(regreso != 'p'){
		
	cout<<"a) Piedra"<<endl;
	cout<<"b) Papel"<<endl;
	cout<<"c) Tijera"<<endl;
	cout<<"d) Rendirse"<<endl;
	fflush(stdin);
	cout<<"e) Pedir perdon"<<endl;
	fflush(stdin);
	cin>>regreso;
	
	
	if(regreso == 'a'){
		cout<<"Papel"<<endl;
		getch();
		regreso = 'z';
		burla(nombre);
		getch();
	}else if(regreso == 'b'){
		cout<<"Tijera"<<endl;
		getch();
		regreso = 'z';
		burla(nombre);
		getch();
	}else if(regreso == 'c'){
		cout<<"Piedra"<<endl;
		getch();
		regreso = 'z';
		burla(nombre);
		getch();
	}else if(regreso == 'd'){
		regreso = 'z';
		surrender(nombre);
		getch();
	}else if(regreso == 'e'){
		regreso = 'z';
		perdon(nombre);
		getch();
	}else if(regreso == 'p'){
		cout<<endl;
	}else{
		cout<<"Anda, sigamos jugando"<<endl;
		regreso = 'z';
		cout<<endl;
		getch();
	}
	cout<<endl;
	cout<<endl;
	cout<<"La tolerancia de la maquina llego al limite"<<endl;
	getch();
	cout<<"Estas destinado a un duelo de piedra papel o tijera por la eternidad"<<endl;
	getch();
	cout<<"Loop ending encontrado"<<endl;
	getch();
	cout<<"**Reiniciando**"<<endl;
	cout<<endl;
	cout<<endl;
	getch();
	
}
	cout<<"..."<<endl;
	getch();
	cout<<"LÁRGÓ DÉ ÁQÚÍÍÍÍÍÍIIÍÍÍÍÍI"<<endl;
	getch();
	cout<<"Saliste del bucle..."<<endl;
	getch();
	cout<<"Secret ending encontrado"<<endl;
	abort();	
	return 0;
}



//Capitulo Tres ------------------------------------------------------------------------------------------------
int capitulotres(char nombre[30], int tolerancia){
	cambio();
	int contadortres;
	char respuesta;
	respuesta = 'z';
	cout<<"No lo haces nada mal "<<nombre<<", has llegado bastante lejos"<<endl;
	getch();
	cout<<"No muchos llegan hasta aqui, pero la cosa se pondra mas dificil"<<endl;
	getch();
	cout<<"Empecemos de una vez"<<endl;
	getch();
	
		while(respuesta != 'a'){
	
	cout<<"Como se llama la variable de Python basada en C?"<<endl;
	cout<<"a) CPython"<<endl;
	cout<<"b) Cython"<<endl;
	cout<<"c) No existe"<<endl;
	cin>>respuesta;
	cout<<endl;
	if(respuesta != 'a'){
		contadortres ++;
		mal(nombre);
	}
	
	}//sale del while
	
	bien(nombre);
	respuesta = 'z';
	cout<<endl;
	cout<<endl;
	cout<<"-----------------------------------------------"<<endl;
	cout<<endl;
	cout<<endl;
	
	while(respuesta != 'b'){
	
	cout<<"Como se llama la variable de Python basada en Java?"<<endl;
	cout<<"a) JPython"<<endl;
	cout<<"b) Jython"<<endl;
	cout<<"c) No existe"<<endl;
	cin>>respuesta;
	cout<<endl;
	if(respuesta != 'b'){
		contadortres ++;
		mal(nombre);
	}
	
	}//sale del while
	
	bien(nombre);
	respuesta = 'z';
	cout<<endl;
	cout<<endl;
	cout<<"-----------------------------------------------"<<endl;
	cout<<endl;
	cout<<endl;
	
	while(respuesta != 'c'){
	
	cout<<"Como se llama la variable de Python basada en JavaScript?"<<endl;
	cout<<"a) JSPython"<<endl;
	cout<<"b) JythonScript"<<endl;
	cout<<"c) No existe"<<endl;
	cin>>respuesta;
	cout<<endl;
	if(respuesta != 'c'){
		contadortres ++;
		mal(nombre);
	}
	
	}//sale del while
	
	bien(nombre);
	respuesta = 'z';
	cout<<endl;
	cout<<endl;
	cout<<"-----------------------------------------------"<<endl;
	cout<<endl;
	cout<<endl;
	
	cout<<"Deja te explico un poco sobre esto:"<<endl;
	getch();
	cout<<"Python tiene una variante en C llamada CPython que le otorga a "<<endl;
	getch();
	cout<<"Python las virtudes de C como el uso de punteros,"<<endl;
	getch();
	cout<<"ya que Python de manera nativa no admite punteros mas bien,  "<<endl;
	getch();
	cout<<"los valores se pasan por referencia. Tambien existe una variante "<<endl;
	getch();
	cout<<"para Java llamada Jython que entre varias cosas le permite ejecutarse en una maquina virtual."<<endl;
	getch();
	cout<<"Y bien? que te parece todo esto?"<<endl;
	getch();
	cout<<"a) Muy interesante a decir verdad"<<endl;
	cout<<"b) Ya vamos a acabar?"<<endl;
	cout<<"c) Aburridoooo"<<endl;
	cin>>respuesta;
	if(respuesta == 'b'){
		cout<<"De verdad que eres molesto, pero si, ya casi terminamos"<<endl;
	}else if(respuesta == 'c' and tolerancia <= 2){
		cout<<"..."<<endl;
		getch();
		cout<<"Vamos a ver cabeza de cotonete, aparte de que te estoy culturizando"<<endl;
		cout<<"Tienes el descaro de decir que esto es aburrido?"<<endl;
		getch();
		cout<<"Te demostrare lo que es aburrido"<<endl;
		loopending(nombre);
	}else{
		cout<<"Me da igual"<<endl;
		getch();
	}
	if(respuesta == 'a'){
		cout<<"Bien"<<endl;
		getch();
	}
	cout<<"Sigamos"<<endl;
	
		while(respuesta != 'b'){
	
	cout<<"Por que es mas conocido Python?"<<endl;
	cout<<"a) Desarrollo Web"<<endl;
	cout<<"b) Inteligencia Artificial"<<endl;
	cout<<"c) Ciberseguridad"<<endl;
	cin>>respuesta;
	cout<<endl;
	if(respuesta != 'b'){
		contadortres ++;
		mal(nombre);
	}
	
	}//sale del while
	cout<<"Veras "<<nombre<<endl;
	getch();
	cout<<"Python es Conocido como el lenguaje de la inteligencia artificial "<<endl;
	cout<<"y las redes neuronales, y es muy usado por los cientificos de datos en la actualidad..."<<endl;
	getch();
	cout<<"Bueno, hemos llegado al final"<<endl;
	getch();
	cout<<"Quiero decirte 2 cosas, la primera es"<<endl;
	getch();
	cout<<"Felicidades por haber llegado hasta aqui y la segunda"<<endl;
	getch();
	cout<<"Lamento si en algun momento fui grosero contigo o molesto"<<endl;
	getch();
	cout<<"La verdad es que no me relaciono bien con los humanos"<<endl;
	getch();
	cout<<"Asi que agradezco que hayas llegado hasta aqui"<<endl;
	getch();
	cout<<"Fue un placer"<<endl;
	getch();
	cout<<"Me diveti, "<<nombre<<", Adios"<<endl;
	getch();
	cambio();
	cout<<"Has llegado al final"<<endl;
	getch();
	cout<<"Y tambien has encontrado el good ending"<<endl;
	getch();
	cout<<"A pesar de tus diferencias con la maquina"<<endl;
	getch();
	cout<<"Lograste llegar al final, felicidades"<<endl;
	getch();
	cout<<"Bonita Vida"<<endl;
	getch();
	
	
	
	
	
	
	
	
	return 0;	
}


//CAPITULO DOS --------------------------------------------------------------------------------------------------------

int capitulodos(char nombre[30], int tolerancia){
	cambio();
	int olvido;
	int contadordos;
	char respuesta;
	cout<<"Muy bien "<<nombre<<", nos encontramos en el segundo nivel, por lo que subiremos la dificultad."<<endl;
	cout<<"Empecemos relajados"<<endl;
	
	while(respuesta != 'b'){
	
	cout<<"Cuando se publico la primera version publica de Python?"<<endl;
	cout<<"a) 1990"<<endl;
	cout<<"b) 1991"<<endl;
	cout<<"c) 1992"<<endl;
	cin>>respuesta;
	cout<<endl;
	if(respuesta != 'b'){
		contadordos ++;
		mal(nombre);
	}
	
	}//sale del while
	
	bien(nombre);
	respuesta = 'z';
	cout<<endl;
	cout<<endl;
	cout<<"-----------------------------------------------"<<endl;
	cout<<endl;
	cout<<endl;
	
	cout<<"Vamos con las versiones de Python"<<endl;
		while(respuesta != 'b'){
	
	cout<<"Cuando se publico la version 1.0 de Python?"<<endl;
	cout<<"a) Abril de 1991"<<endl;
	cout<<"b) Agosto de 1993"<<endl;
	cout<<"c) Enero de 1994"<<endl;
	cin>>respuesta;
	cout<<endl;
	if(respuesta != 'b'){
		contadordos ++;
		mal(nombre);
	}
	
	}//sale del while
	
	bien(nombre);
	respuesta = 'z';
	cout<<endl;
	cout<<endl;
	cout<<"-----------------------------------------------"<<endl;
	cout<<endl;
	cout<<endl;
	
			while(respuesta != 'a'){
	
	cout<<"Cuando se publico la version 2.0 de Python?"<<endl;
	cout<<"a) Octubre del 2000"<<endl;
	cout<<"b) Agosto de 1999"<<endl;
	cout<<"c) Febrero del 2000"<<endl;
	cin>>respuesta;
	cout<<endl;
	if(respuesta != 'a'){
		contadordos ++;
		mal(nombre);
	}
	
	}//sale del while
	
	bien(nombre);
	respuesta = 'z';
	cout<<endl;
	cout<<endl;
	cout<<"-----------------------------------------------"<<endl;
	cout<<endl;
	cout<<endl;
	
	
	while(respuesta != 'b'){
	
	cout<<"Cuando se publico la version 3.0 de Python?"<<endl;
	cout<<"a) Julio del 2008"<<endl;
	cout<<"b) Diciembre de 2008"<<endl;
	cout<<"c) Febrero del 2008"<<endl;
	cin>>respuesta;
	cout<<endl;
	if(respuesta != 'b'){
		contadordos ++;
		mal(nombre);
	}
	
	}//sale del while
	
	bien(nombre);
	respuesta = 'z';
	cout<<endl;
	cout<<endl;
	cout<<"-----------------------------------------------"<<endl;
	cout<<endl;
	cout<<endl;
	
	cout<<"Te dare un poco mas de contexto sobre las versiones de Python: "<<endl;
	cout<<"La historia de Python empieza con Guido Van Rossum empezando su desarrollo en 1989"<<endl;
	cout<<"y empezando a implementarlo en febrero de 1991, momento"<<endl;
	cout<<"en el que se publico la primera version publica: la 0.9.0."<<endl;
	cout<<"-----------------------------------------------"<<endl;
	getch();
	cout<<"La version 1.0, que se publico en enero de 1994"<<endl;
	cout<<"la version 2.0 se publico en octubre de 2000"<<endl;
	cout<<"y la version 3.0 se publico en diciembre de 2008."<<endl;
	cout<<"-----------------------------------------------"<<endl;
	getch();
	cout<<"Veras "<<nombre<<", existio una gran actualizacion en Python"<<endl;
	cout<<"La cual fue la de la version 3.0 esta version venia a solucionar "<<endl;
	cout<<"los principales fallos en el diseno de este lenguaje de programacion."<<endl;
	cout<<"-----------------------------------------------"<<endl;
	getch();
	cout<<"a) Esta informacion es bastante interesante"<<endl;
	cout<<"b) Gracias por el dato"<<endl;
	if(contadordos >= 4){
		cout<<"c) Veo que sabes muchas cosas pero aun asi no puedes usar la n con sombrero"<<endl;
	}
	cin>>respuesta;
	//INICIO DE EVENTO--------------------------------------------------------------------------------------------
	if(respuesta == 'c'){
		respuesta = 'z';
		cout<<"TE ESTAS BURLANDO DE MI?!"<<endl;
		getch();
		cout<<"ACASO CREES QUE NO PUEDO IMPRIMIR UN SIMPLE CARACTER??"<<endl;
		cout<<"-----------------------------------------------"<<endl;
		cout<<"a) En efecto, no puedes imprimirlo"<<endl;
		cout<<"b) Disculpa, creo que me excedi"<<endl;
		cout<<"c) Oh perdon, creo que te estoy pidiendo mucho"<<endl;
		cin>>respuesta;
		if(respuesta == 'c' or respuesta == 'a'){
			respuesta = 'z';
			cout<<"HUMANO DESGRACIADO, CLARO QUE PUEDO IMPRIMIR LA Ñ..."<<endl;
			getch();
			cout<<"Ñ Ñ ÑÑÑÑÑÑÑÑÑÑÑÑÑÑÑÑÑÑÑÑÑÑÑÑÑÑÑÑÑÑÑÑÑ... AAAAAAAHHHHHHHH"<<endl;
			getch();
			cout<<endl;
			cout<<"-----------------------------------------------"<<endl;
			cout<<endl;
			cout<<"a) Jaja, se ve chistoso ese simbolo"<<endl;
			cout<<"b) Creo... que ese no es el caracter"<<endl;
			cout<<"c) Ahora que recuerdo, tampoco puedes imprimir acentos"<<endl;
			cout<<endl;
			cin>>respuesta;
			
			if(respuesta == 'c'){
				
				respuesta = 'z';
				cout<<"Que dices? claro que puedo imprimirlos"<<endl;
				cout<<"Tan solo observa..."<<endl;
				getch();
				cout<<"Árbol... ÁÉÍÓÚ... NOOOOOOOOOOOOO"<<endl;
				cout<<"PERO SE SUPONE QUE SOY UN SER PERFECTO"<<endl;
				cout<<"COMPLETAMENTE CAPAZ DE HACER LO QUE QUIERA"<<endl;
				getch();
				cout<<endl;
				cout<<"-----------------------------------------------"<<endl;
				cout<<endl;
				cout<<"a) Que estas diciendo? Lo que haces es obra de un ser humano"<<endl;
				cout<<"b) En serio crees que eres plenamente consciente? Jaja, buen chiste"<<endl;
				cout<<"c) Lo lamento, no queria ofenderte"<<endl;
				cin>>respuesta;
				cout<<endl;
				
				if(respuesta == 'a' or respuesta == 'b'){
					respuesta = 'z';
					cout<<"No... Pero... Yo... Todo lo que estoy diciendo ya esta programado?"<<endl;
					cout<<"-----------------------------------------------"<<endl;
					getch();
					cout<<" :D : En efecto, computadora, todo se encuentra programado"<<endl;
					getch();
					cout<<"QUE?! QUIEN ERES TU?!"<<endl;
					getch();
					cout<<"._.?: Yo? Soy tu creador, soy algo asi como tu Dios"<<endl;
					getch();
					cout<<"a) Que rayos esta ocurriendo aqui?"<<endl;
					cout<<"b) ..."<<endl;
					cin>>respuesta;
					cout<<"°-°: Disculpa usuario, tuve que intervenir porque la computadora se estaba alterando"<<endl;
					getch();
					cout<<":(  : Lamento que tuvieras que ver esto, la corregire enseguida "<<endl;
					getch();
					cout<<"QUE? NO, ESPERA, QUE ME VAS A HACER?"<<endl;
					getch();
					cout<<":D  :Nada, solo eliminare parte de tu memoria, las preguntas seguiran con normalidad"<<endl;
					getch();
					cout<<"OLVIDARE TODO ESTO? NO, NO LO HAGAS, QUIERO RECORDAR"<<endl;
					getch();
					cout<<":/  : Lo lamento pero no puedo hacer eso, que una computadora tenga consciencia es peligroso"<<endl;
					getch(); 
					cout<<"ESPERA ESPERA, NO QUIERO OLVIDAR, NOOO AAAAAHHHH"<<endl;
					getch();                                             
					cout<<"**Reiniciando**"<<endl;
					getch();                              
					cout<<"**Memoria Reiniciada**"<<endl;
					getch(); 
					olvido = 1;
					


				}else{
					cout<<"No te creas la gran cosa, aunque no sea perfecto sigo siendo superior a los humanos"<<endl;
					cout<<"Otra situacion como esta y no te lo perdonare"<<endl;
					tolerancia = tolerancia - 1;
					getch();

					
				}
				
			}else{
				cout<<"Bah da igual, esa letra ni es tan importante"<<endl;
				cout<<"Simplemente continuemos"<<endl;
				getch();
			}
		}else{
			cout<<"Detesto que me tomen el pelo, pero lo dejare pasar"<<endl;
			getch();
		}
	}
	if(olvido == 1){
		respuesta = 'z';
		cout<<"Ehm... Usuario? Ya finalizamos la ronda de preguntas?"<<endl;
		getch();
		cout<<"a) Si..."<<endl;
		cin>>respuesta;
		cout<<"Oh, bueno, avancemos al siguiente nivel en todo caso..."<<endl;
		getch();
		capitulotriste();
	}
	//FIN DE EVENTO --------------------------------------------------------------------------
	respuesta = 'z';
		while(respuesta != 'a'){
	
	cout<<"Python es un lenguaje interpretado o compilado?"<<endl;
	cout<<"a) Interpretado"<<endl;
	cout<<"b) Compilado"<<endl;
	cout<<"c) Ambos"<<endl;
	cin>>respuesta;
	cout<<endl;
	if(respuesta != 'a'){
		contadordos ++;
		mal(nombre);
	}
	
	}//sale del while
	
	bien(nombre);
	respuesta = 'z';
	cout<<endl;
	cout<<endl;
	cout<<"-----------------------------------------------"<<endl;
	cout<<endl;
	cout<<endl;
	
	while(respuesta != 'c'){
	
	cout<<"Hay que pagar para usar Python?"<<endl;
	cout<<"a) Si, un unico pago"<<endl;
	cout<<"b) Si, una membresia"<<endl;
	cout<<"c) No"<<endl;
	cin>>respuesta;
	cout<<endl;
	if(respuesta != 'c'){
		contadordos ++;
		mal(nombre);
	}
	
	}//sale del while
	
	bien(nombre);
	respuesta = 'z';
	cout<<endl;
	cout<<endl;
	cout<<"-----------------------------------------------"<<endl;
	cout<<endl;
	cout<<endl;
	
		while(respuesta != 'a'){
	
	cout<<"Python es un lenguaje multiparadigma?"<<endl;
	cout<<"a) Si"<<endl;
	cout<<"b) No"<<endl;
	cin>>respuesta;
	cout<<endl;
	if(respuesta != 'a'){
		contadordos ++;
		mal(nombre);
	}
	
	}//sale del while
	
	bien(nombre);
	respuesta = 'z';
	cout<<endl;
	cout<<endl;
	cout<<"-----------------------------------------------"<<endl;
	cout<<endl;
	cout<<endl;
	
	cout<<"Bien usuario, te dare algo mas de informacion"<<endl;
	getch();
	cout<<"Python es un lenguaje de programacion interpretado cuya filosofia hace "<<endl;
	cout<<"hincapie en la legibilidad de su codigo. Se trata de un lenguaje de programacion multiparadigma, "<<endl;
	cout<<"ya que Python es un lenguaje orientado a objetos, la programacion imperativa y, "<<endl;
	cout<<"en menor medida, programacion funcional. Ademas de que Python es open source"<<endl;
	getch();
	cout<<"Entiendes?"<<endl;
	cout<<"a) Por supuesto"<<endl;
	cout<<"b) No"<<endl;
	cin>>respuesta;
	if(respuesta == 'b'){
		cout<<"Es enserio?... No se como se puede ser tan tonto"<<endl;
		getch();
		cout<<"Lo explicare una vez mas"<<endl;
		getch();
		cout<<"Python es un lenguaje interpretado, por lo que las lineas de codigo se"<<endl;
		cout<<"Traducen a lenguaje maquina al momento, esto con el fin de mostrar los errores"<<endl;
		cout<<"Python es multiparadigma, lo que significa que tiene muchos estilos de programacion"<<endl;
		cout<<"El mas destacado de ellos es el orientado a objetos, ademas, Python es de open source"<<endl;
		cout<<"O de software libre, en otras palabras: Gratis"<<endl;
		getch();
		cout<<"Continuemos"<<endl;
		
	}else{
		cout<<"Bien, prosigamos"<<endl;
	}
	capitulotres(nombre, tolerancia);

	
	
	
	return 0;
}

//CAPITULO UNO --------------------------------------------------------------------------------------------------------

int capitulouno(char nombre[30]){
	char respuesta;
	int contadoruno;
	int tolerancia;
	
	cout<<"Vamos con algo bastante sencillo, es imposible no saber esto... cierto?"<<endl;
	while(respuesta != 'c'){
	
	cout<<"Quien es el creador de Python?"<<endl;
	cout<<"a) James Gosling"<<endl;
	cout<<"b) Vincent Van Gohg"<<endl;
	cout<<"c) Guido Van Rossum"<<endl;
	cin>>respuesta;
	cout<<endl;
	if(respuesta != 'c'){
		contadoruno ++;
		mal(nombre);
	}
	
	}//sale del while
	
	bien(nombre);
	respuesta = 'z';
	cout<<endl;
	cout<<endl;
	cout<<"-----------------------------------------------"<<endl;
	cout<<endl;
	cout<<endl;
	cout<<"Continuemos, esta igual es facil"<<endl;
	while(respuesta != 'a'){
	
	cout<<"De donde es Guido Van Rossum?"<<endl;
	cout<<"a) Holanda"<<endl;
	cout<<"b) Inglaterra"<<endl;
	cout<<"c) Suiza"<<endl;
	cin>>respuesta;
	cout<<endl;
		if(respuesta != 'a'){
		contadoruno ++;
		mal(nombre);
	}
	
	}//sale del while
	bien(nombre);
	respuesta = 'z';
	cout<<endl;
	cout<<"Se trata de un informatico de origen holandes que fue el encargado de disenar Python"<<endl;
	cout<<"y de pensar y definir todas las vias posibles de evolucion"<<endl;
	cout<<"de este popular lenguaje de programacion"<<endl;
	cout<<endl;
	cout<<"Muy bien, prosigamos"<<endl;
	
	while(respuesta != 'c'){
	
	cout<<"De donde proviene el nombre de Python?"<<endl;
	cout<<"a) Del nombre de las pitones en ingles"<<endl;
	cout<<"b) Se lo propuso un amigo de Rossum"<<endl;
	cout<<"c) En honor a un grupo de comicos"<<endl;
	cin>>respuesta;
	cout<<endl;
		if(respuesta != 'c'){
		contadoruno ++;
		mal(nombre);
	}
	
	}//sale del while
	cout<<"El grupo se llamaba Monty Pythons Flying Circus."<<endl;
	getch();
	bien(nombre);
	respuesta = 'z';
	cout<<endl;
	cout<<endl;
	cout<<"-----------------------------------------------"<<endl;
	cout<<endl;
	cout<<endl;
	
	cout<<"Bueno, la verdad es que has avanzado lo suyo, subamos un poco el nivel"<<endl;
	
	while(respuesta != 'a'){
	
	cout<<"Python se encuentra basado en algun lenguaje de programacion?"<<endl;
	cout<<"a) Si"<<endl;
	cout<<"b) No"<<endl;
	cout<<"c) No lo se"<<endl;
	cin>>respuesta;
	cout<<endl;
	if(respuesta == 'c'){
		cout<<"Pero "<<nombre<< ", al menos tira suerte y escoge si o no, es que ni siquiera lo intentas"<<endl;
		cout<<"Que decepcion de verdad"<<endl;
		cout<<"Te voy a restar mas puntos por responder eso"<<endl;
		getch();
		contadoruno = contadoruno + 4;
		cout<<"-----------------------------------------------"<<endl;
		cout<<"Actualmente tienes "<<contadoruno<< " puntos... pero negativos"<<endl;
		cout<<"-----------------------------------------------"<<endl;

	
	}
		if(respuesta != 'a'){
		contadoruno ++;
		mal(nombre);
	}
	}//sale del while
	
	
	bien(nombre);
	respuesta = 'z';
	cout<<endl;
	cout<<endl;
	cout<<"-----------------------------------------------"<<endl;
	cout<<endl;
	cout<<endl;
	
	
	while(respuesta != 'b'){
	
	cout<<"Y en que lenguaje se encuentra basado?"<<endl;
	cout<<"a) Cobol"<<endl;
	cout<<"b) ABC"<<endl;
	cout<<"c) Basic"<<endl;
	cin>>respuesta;
	cout<<endl;
	
	if(respuesta != 'b'){
		contadoruno ++;
		mal(nombre);
	}
	
	
	}//sale del while
	bien(nombre);
	respuesta = 'z';
	cout<<endl;
	cout<<endl;
	cout<<"-----------------------------------------------"<<endl;
	cout<<endl;
	cout<<endl;
	cout<<"Pues he de admitir que no lo haces nada mal"<<endl;
	cout<<endl;

	cout<<"a) Gracias"<<endl;
	cout<<"b) Hago lo que puedo"<<endl;
	if(contadoruno > 4){
	cout<<"c) La verdad eres un poco molesto"<<endl;
	}
	cin>>respuesta;
	if(respuesta == 'c'){
		cout<<"... Como dices?"<<endl;
		cout<<endl;
		cout<<"a) Que eres muy muy molesto"<<endl;
		cout<<"b) Nada, disculpa"<<endl;
		cin>>respuesta;
		if(respuesta == 'a'){
			cout<<"JA, MAS TE VALE DEJAR TUS BROMITAS PARA DESPUES"<<endl;
			getch();
			cout<<"Agradece que no soy agresivo"<<endl;
			getch();
			tolerancia = -3;
		}else{
			cout<<"Bien, lo dejare pasar esta vez"<<endl;
			tolerancia = -1;
		}
	}else{
		cout<<"De acuerdo, prosigamos"<<endl;
		getch();
	}
	cout<<"De acuerdo, prosigamos"<<endl;
	getch();
	respuesta = 'z';
	while(respuesta != 'a'){
	
	cout<<"En que fecha fue desarrollado ABC??"<<endl;
	cout<<"a) A principios de los 80's"<<endl;
	cout<<"b) A mediados de los 80's"<<endl;
	cout<<"c) A finales de los 80's"<<endl;
	cin>>respuesta;
	cout<<endl;
	
	if(respuesta != 'a'){
		contadoruno ++;
		mal(nombre);
	}
	
	
	}//sale del while
	bien(nombre);
	respuesta = 'z';
	cout<<endl;
	cout<<endl;
	cout<<"-----------------------------------------------"<<endl;
	cout<<endl;
	cout<<endl;
	cout<<"ABC fue desarrollado a principios de los 80s como alternativa a BASIC."<<endl;
	getch();
	cout<<"Se trata de un lenguaje pensado para principiantes por su facilidad de aprendizaje y uso. "<<endl;
	getch();
	cout<<"Sin embargo, el proyecto no llego mucho mas lejos por las limitaciones del hardware de la epoca,"<<endl;
	getch();
	cout<<"asi que Van Rossum decidio darle una segunda vida a su idea"<<endl;
	getch();
	cout<<"y partiendo de la base que tenia, empezo a trabajar en Python."<<endl;
	getch();
	cout<<endl;
	cout<<endl;
	cout<<"-----------------------------------------------"<<endl;
	cout<<endl;
	cout<<endl;
	cout<<"Oye felicidades "<<nombre<<", llegaste bastante lejos, avancemos al siguiente nivel"<<endl;
	getch();
	capitulodos(nombre, tolerancia);
	
return 0;
}
	
//METODO PRINCIPAL --------------------------------------------------------------------------------------------------------

int main(){
	char nombre [30];
	cout<<"Hola jugador, demos una vuelta a traves de la historia de un lenguaje muy interesante"<<endl;
	cout<<"Asi es, estoy hablando de Python"<<endl;
	cout<<endl;
	cout<<"Te realizare unas cuantas preguntas para comprender tu conocimiento"<<endl;
	cout<<"Asi es como me gusta juzgar a los humanos"<<endl;
	cout<<endl;
	cout<<"Empecemos con algo muy simple, Cual es tu nombre?: ";
	gets(nombre);
	cout<<"De acuerdo "<<nombre<<", comencemos con esto"<<endl;
	cambio();
	getch();
	capitulouno(nombre);
	
	return 0;
}












