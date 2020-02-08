#include<iostream>
#include<string>
#include<vector>
using namespace std;

string password  = "strcmp";

struct entries{
	int rollosDePizza = 0, panConAjo = 0, palitosDeQueso = 0;

};typedef struct entries eT;

struct mainDish{
    int pizza = 0, pasta = 0, lasagna = 0;
    
};typedef struct mainDish mD;

struct customerData{
	string name;
	string direction;
	int phone;
	eT enTri;
	mD maDi;
	
};
typedef struct customerData cData;

void menuEmpleado();
void menuAdmin();
void delivery();
void viewOrders();

vector<cData> deliveryList;

int main(){
	char option;
	bool m  = true;
	string pass;
    
	do{
		cout << "\nSeleccione su cargo: " << endl;
		cout << "\tA. Empleado\n\tB. Administrador\n\tC. Salir" << endl;
		cout << "Su opcion: ";
		cin >> option;
			
		switch(option){
			case 'a':
			case 'A': menuEmpleado(); break;
			case 'b':
			case 'B': cout << "\n*Ingrese la contrasena: ";
					  cin >> pass;
					  if(pass == password){
							menuAdmin();
					  }else{
					  	cout << "La contrasena es incorrecta";
					  }
					  break;
			case 'c':
			case 'C': m = false; break;
			default: cout << "Eliga una opcion correcta."; break;
		}
			
	}while(m);
	
	return 0;
}

void menuEmpleado(){
	int option = 0;
	bool m = true;
	
	do{
		cout << "\n|MENU|" << endl;
		cout << "\t1. Agregar pedido a domicilio\n\t2. Agregar encargo a restaurant\n\t3. Ver pedidos a domicilio\n\t4. Ver encargos en el restaurante\n\t5. Salir" << endl;
		cout << "Su opcion: ";
		cin >> option;
		
		switch(option){
			case 1: delivery(); break;
			case 2: break;
			case 3: viewOrders();break;
			case 4: break;
			case 5: m = false; break;
		}
	}while(m);
}

void menuAdmin(){
	int option = 0;
		bool m = true;
	
	do{
		cout << "\n|MENU|" << endl;
		cout << "\t1. Agregar pedido a domicilio\n\t2. Agregar encargo a restaurant\n\t3. Ver pedidos a domicilio\n\t4. Ver encargos en el restaurante\n\t5. Ver total de ventas\n\t5. Borrar ordenes\n\t6. Salir" << endl;
		cout << "Su opcion: ";
		cin >> option;
		
		switch(option){
			case 1: delivery(); break;
			case 2: break;
			case 3: break;
			case 4: break;
			case 5: break;
			case 6: m = false; break;
		}
	}while(m);
}

void viewOrders(){

}

void delivery(){
	cData p;
	int option = 0;
	int option2 = 0;
	int option3 = 0;
	int option4 = 0;
	float amount = 0;
	
	cout << "\nIngrese sus datos: " << endl;
	cin.ignore();
	cout << "\tNombre: ";
	getline(cin, p.name);
	cout << "\tDireccion: ";
	getline(cin, p.direction);
	cout << "\tTelefono: ";
	cin >> p.phone;
	
	cout << "\n\t1. Entradas\n\t2. Plato principal\n\t3. Bebidas"<<endl;
	cout << "Su opcion: ";
	cin >> option;
	
	switch(option){
		case 1: 
				cout << "\n----------------\n";
				cout << "    ENTRADAS    \n";
				cout << ".................";
				cout << "\n\n1. Rollos de pizza\n2. Pan con ajo\n3. Palitos de queso" << endl;
				cout << "Su opcion: ";
				cin >> option2;
				switch(option2){
					case 1: cout << "\n¿Cuantos desea?: "; cin >> p.enTri.rollosDePizza; amount = amount + (4.99 * p.enTri.rollosDePizza); break;
					case 2: cout << "\n¿Cuantos desea?: "; cin >> p.enTri.panConAjo; amount = amount + (3.99 * p.enTri.panConAjo); break;
					case 3: cout << "\n¿Cuantos desea?: "; cin >> p.enTri.palitosDeQueso; amount = amount + (3.75 * p.enTri.palitosDeQueso); break;
				}
				
		break;
		
		case 2: 
		        cout << "\n-----------------------\n";
				cout << "   PLATOS PRINCIPALES    \n";
				cout << "........................";
				cout << "\n\n1. Pizza\n2. Pasta\n3. Lasagna" << endl;
				cout << "Su opcion: ";
				cin >> option3;
				switch(option3){
					case 1: cout << "\n¿Cuantos desea?: "; cin >> p.maDi.pizza; amount = amount + (13.99 * p.maDi.pizza); break;
					case 2: cout << "\n¿Cuantos desea?: "; cin >> p.maDi.pasta; amount = amount + (5.55 * p.maDi.pasta); break;
					case 3: cout << "\n¿Cuantos desea?: "; cin >> p.maDi.lasagna; amount = amount + (6.25 * p.maDi.lasagna); break;
				}
				
		break;
		case 3: break;
		default: "Escoga una opcion corecta"; 
	}
	deliveryList.push_back(p);
	
	cout << "\nSu cuenta es: " << "$" << amount <<endl;
		
}