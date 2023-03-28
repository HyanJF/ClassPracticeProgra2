// Cal_Practice_Progra2.cpp : Este archivo contiene la funcion "main". La ejecucion del programa comienza y termina ahi;
//
#include <iostream>
#include <string>
#include <vector>


using namespace std;

int main()
{
	//vector<string> myStuff = { "Espada", "Martillo", "Bomba" };
	//vector<string> inventory(10);
	//vector<string> inventory(10, " - ");
	//vector<string> inventory(myStuff);

	vector<string> inventory;

	inventory.push_back("Espada");
	inventory.push_back("Escudo");
	inventory.push_back("Martillo");

	cout << "Tienes " << inventory.size() << " items en tu inventario" << endl;

	//Iteration FOR
	for (unsigned int i = 0; i < inventory.size(); i++)
	{
		cout << inventory[i] << endl;
	}

	cout << "\nCambiaste tu " << inventory[0] << " por una bomba." << "\n";
	inventory[0] = "Bomba";

	//Iteration DO-WHILE;
	int i = 0;
	do
	{
		cout << inventory[i] << endl;
		i++;
	} while (i < inventory.size());
}

