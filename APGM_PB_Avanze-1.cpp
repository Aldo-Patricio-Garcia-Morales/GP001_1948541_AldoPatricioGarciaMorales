/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <conio.h>
#include <string.h>
#include <string>

using namespace std;
int main()
{
    int numarticulo, opc;
    float precio_unitario= 0, impuesto, Total;
    string nomjuego, Genero, clasificacion, categoria, caracteristicas, descripcion, genero, Ano_Lan;

    cout << "\t ***TiendaGamer UANL*** \n";
    cout << " 1.-Agregar Articulo \n 2.-Modificar Articulo\n 3.-Eliminar Articulo\n 4.-Lista Articulovigentes\n 5.-Limpiar Pantalla\n 6.-Salir\n";
    cin >> opc;

    switch (opc)
    {
    case 1: //Agregar Articulo
        cout << "Ingrese el numero del  videojuego. \n";
        cin >> numarticulo;
        cout << "Ingrese el nombre del videojuego. \n";
        cin.ignore();//no me un espacio 
        getline(cin, nomjuego); //permite ejecutar los espacios en la variable
        cout << "Ingrese la fecha de lanzamiento del videojuego\n";
        cin.ignore();
        getline(cin, Ano_Lan);
        cout << "Ingrese la  clasificacion del videojuego. \n";
        cin.ignore();
        getline(cin, clasificacion);
        cout << "Ingrese el descripcion del videojuego. \n";
        cin.ignore();
        getline(cin, descripcion);
        cout << "Ingrese la categoria del Videojuego. \n";
        cin.ignore();
        getline(cin, categoria);
        cout << "Ingrese el genero del videojuego. \n";
        cin.ignore();
        getline(cin, descripcion);
        cout << "Ingrese el precio unitario del videojuego \n";
        cin >> precio_unitario;
        cout << "Ingrese los impuestos agregado \n";
        cin >> impuesto;
        Total = (precio_unitario + impuesto);
        cout << "El precio total del videojuego es: \n" << Total;
        return main();
        break;

    case 2: //Modificar Videojuego
        break;

    case 3://Eliminar Videojuego
        break;

    case 4: //Lista de Videojuego
        break;

    case 5: //Limpiar Pantalla
        system("cls"); //clean  se utiliza en web 
        return main();
        break;

    case 6: //salir
        cout << "Gracias por utilizar el programa \n";
        break;

    default:
        cout << "ingrese una opcion correcta \n";
        return main();

    }
}
