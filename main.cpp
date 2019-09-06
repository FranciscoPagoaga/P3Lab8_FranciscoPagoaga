#include <iostream>
#include <stdlib.h>
#include <sqlite3.h>
#include <string.h>

sqlite3 *conn;
sqlite3_stmt *res;
int error=0;
int rec_count =0;
const char *tail;


int main(int argc, char** argv) {
	bool cond=true;
	while(cond){
		cout<<"1) Agregar"<<endl
		<<"2) Eliminar"<<endl
		<<"3) Listar jefes"<<endl
		<<"4) "
		int opcion;
		cin>>opcion;
		switch(opcion){
			case 1:{
				cout<<"1) Departamentos"<<endl
				<<"2) Empleados"<<endl;
				int opcion2;
				cin>>opcion2;
				switch(opcion2){
					case 1:{
						cout<<"Ingrese numero del nuevo departamento"<<endl;
						int numdepto;
						cin>>numdepto;
						cout<<"Ingrese nombre del nuevo departamento"<<endl;
						string nombre;
						cin>>nombre;
						cout<<"Ingrese la ubicacion del departamento"<<endl;
						
						break;
					}
				}
				break;
			}
		}
	}	
	return 0;
}


