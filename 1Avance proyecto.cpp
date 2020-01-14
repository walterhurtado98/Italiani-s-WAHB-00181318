#include<iostream>
using namespace std;
	
	int main(){
    // Mostrar menu al usuario
    bool continuar = true;
    do{
        int option = 0;
        cout << "\n1.Agregar un pedido a domicilio\n";
        cout << "2. Agregar encargo en restaurante\n";
        cout << "3. Ver pedidos a domicilio\n";
        cout << "4. Ver encargos en el restaurante\n";
        cout << "5. Ver el total de venta\n";
        cout << "6. Salir";
        cin >> option;
        cin.ignore();
        
        switch(option){
            case 1: homeDelivery(); break;
            case 2: addCustom(); break;
            case 3: viewOrdersDev(); break;
            case 4: viewOrdersRes(); break;
            case 5: seeTotalSale(); break;
            case 6: continuar = false;
        }
    }while(continuar);
	
	return 0;
}
