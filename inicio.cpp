/*INTEGRANTES: MONTAÑO SOLIS , ERAS QUIÑONEZ, GILER ORDÓÑEZ,BAEZ ZAMORA,BECERRA CEDEÑO
  CURSO: 1RO "A" DE TICS
  TRABAJO GRUPAL
  
*/

#include<iostream>
#include<fstream>
#include<string.h>
#include<malloc.h>
#include<stdlib.h>
using namespace std;
#include "colaboradores.h"    
int main() 
{
	
	int da ,  ma,  aa, an,  mn,  dn, a,m,d;
	float peso,estatura,i;
	Persona motato;
	int op,flag;
	
	
	do{
	system("cls");
	cout<<"\n Datos Personales"<<endl<<endl;
	cout<<"1.-Ingresar y mostrar los datos personales \n";
	cout<<"2.-Mostrar la edad de la persona\n";
	cout<<"3.-Mostrar el indice comporal\n "; 
	cout<<"4.-Guardar archivo\n";
	cout<<"5.-Recuperar los datos desde el archivo txt y mostrarlos por pantalla \n";
	
	cout<<"0.-Salir del menu \n";
        cout<<" Ingrese una opcion : "; cin>>op;
	switch(op){
		case 1:
			
		motato.ingresar();
		motato.mostrar();
		break;
		cout<<"La edad que tiene es:";
	        case 2:
	        cout<<"-----------------------------------------------------"<<endl;	
	        cout<<"Ingrese la fecha actual (a-m-d): "; 
              cin>>aa>>ma>>da;
	        motato.caledad( aa,ma,da);
	        motato.mostraed();
				
		break;
		case 3:
	
		motato.calimc(i);
		
		break;
		case 4:
		
		motato.guardar();
		break;
		case 5:
	    motato.rym();
		break;
		
		}
		  if(op!=0){
			    cout << "Opcion no permitida !\n" <<  "Press Enter to continue\n";
    // pause the program until user input
	           flag=cin.ignore().get();
		  }		  
	if(op==0){
	cout<<"Salimos del Sistema: "<<endl;

	}
	}while(op!=0);
   system("pause");
	return (0);

}
