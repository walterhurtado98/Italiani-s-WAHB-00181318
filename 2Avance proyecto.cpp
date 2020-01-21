/* El include iostream sirve para entrada y salida en consola
   El include string sirve para usar cadena de texto*/
#include<iostream>
#include<string>
using namespace std;

struct personalInfo{
	string name;
	string municipality;
	string neighborhood;
    Address pAddress;
};

	
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
    }}while(continuar);
    
    personalInfo* pData;
    int size = 0;

    cout << "Cantidad de datos a ingresar: "; cin >> size;
    pData = new personalInfo[size];

    for(int i = 0; i < size; i++){
        cout << "Nombre completo: "; cin >> pData[i].name;
        cout << "Colonia: "; cin>> pData[i].
        cout << "No. Casa: "; cin >> pData[i].pAddress.houseNumber;
        cout << "Municipio: "; cin >> (pData + i)->pAddress.municipality;
        cout << "Departamento: "; cin >> (pData + i)->pAddress.state;
        cin.ignore();
	
	return 0;
}
