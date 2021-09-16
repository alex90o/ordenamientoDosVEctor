#include <iostream>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>



using namespace std;
class Index
{
public:

    vector <char *> palabraSinRepetir;
    vector <int> cantidad;

public:

    void cargarPalSinRepe(char *palabraRecibida);
    void cargarCantidad(int cant);
    void ordenarIndex();


};

void Index::cargarPalSinRepe(char *palabraRecibida)
{
    this->palabraSinRepetir.push_back(palabraRecibida);
}


void Index::cargarCantidad(int cant)
{
    this->cantidad.push_back(cant);
}

//hacer
//void Index::ordenarIndex()
//{
//	int num, aux;
//	int comparaciones=0;
//	int intercambio=0;
//	int <vector> auxN;
//	char<vector>auxpal;
//	for(int x=0; x<num;x++){

//	}

//}

void Index :: ordenarIndex(){
    int temporal;
    char *palabraTemporal=new char();
    for (int i = 0; i<this->cantidad.size(); i++){
        for (int j = 0; j<(this->cantidad.size()-1); j++){
            if ((cantidad[j]) <(cantidad[j+1])){ // Ordena el array de mayor a menor, cambiar el "<" a ">" para ordenar de menor a mayor
                temporal = cantidad[j];
                //strcpy(palabraTemporal,palabraSinRepetir[j]);
                palabraTemporal=palabraSinRepetir[j];
                cantidad[j] = cantidad[j+1];
                //strcpy(palabraSinRepetir[j],palabraSinRepetir[j+1]);
                palabraSinRepetir[j]=palabraSinRepetir[j+1];
                cantidad[j+1]= temporal;
                //strcpy(palabraSinRepetir[j+1],palabraTemporal);
                palabraSinRepetir[j+1]=palabraTemporal;
            }
        }
    }

}

//void Index :: ordenarIndex(){
//    int temporal;
//    for (int i = 0; i<this->cantidad.size(); i++){
//        for (int j = 0; j<(this->cantidad.size()-1); j++){
//            if ((cantidad[j]) <(cantidad[j+1])){ // Ordena el array de mayor a menor, cambiar el "<" a ">" para ordenar de menor a mayor
//                temporal = cantidad[j];
//                cantidad[j] = cantidad[j+1];
//                cantidad[j+1]= temporal;
//            }
//        }
//    }

//}

int main()
{
//Realice una funcion que me ordene de mayor a menor las cantidades pero sin perder
    //la relacion entre palabre y cantidad, osea hola tiene 3, estas tiene 20.
    Index miIndice;

     miIndice.cargarPalSinRepe("hola");
     miIndice.cargarCantidad(3);

     miIndice.cargarPalSinRepe("mundo");
     miIndice.cargarCantidad(1);

     miIndice.cargarPalSinRepe("bello");
     miIndice.cargarCantidad(8);

     miIndice.cargarPalSinRepe("como");
     miIndice.cargarCantidad(5);

     miIndice.cargarPalSinRepe("estas");
     miIndice.cargarCantidad(20);



     for (int var = 0; var < 5; ++var) {
         cout<<miIndice.palabraSinRepetir[var]
               <<" -> "<<miIndice.cantidad[var]<<endl;
     }


     miIndice.ordenarIndex();
     cout<<"los ordeno los numeros?"<<endl;
     for (int var = 0; var < 5; ++var) {

               cout<<" -> "<<miIndice.cantidad[var]<<endl;
     }

    //miIndice.ordenarIndex();
     cout<<"los ordeno los numeros y las palabra?"<<endl;
     for (int var = 0; var <5; ++var) {
         cout<<miIndice.palabraSinRepetir[var]
               <<" -> "<<miIndice.cantidad[var]<<endl;
     }

    return 0;
}
