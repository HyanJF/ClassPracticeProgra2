// Cal_Practice_Progra2.cpp : Este archivo contiene la funcion "main". La ejecucion del programa comienza y termina ahi;
//
#include <iostream>
#include <string>
#include <vector>


using namespace std;

int main()
{
	switch (true)
	{
	case1:

	case2:

	default:
		break;
	}


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

	cout << inventory[0] << " tiene " << inventory[0].size() << " Letras en el. ";

	cout << endl << "Perdiste un item en la ultima batalla" << endl;
	inventory.pop_back();

	cout << "Tienes " << inventory.size() << " items en tu inventario" << endl;
	//Iteration FOR
	for (unsigned int i = 0; i < inventory.size(); i++)
	{
		cout << inventory[i] << endl;
	}

	cout << "Un enemigo te ha robado todas tus items" << endl;
	inventory.clear();

	if (inventory.empty())
	{
		cout << "No tienes nada" << endl;
	}
	else
	{
		cout << "Tienes " << inventory.size() << " items en tu inventario" << endl;
		//Iteration FOR
		for (unsigned int i = 0; i < inventory.size(); i++)
		{
			cout << inventory[i] << endl;
		}
	}

	vector<string> Items;
	int Espacio = 0;

	cout << endl;
	cout << "Agrega la cantidad de elementos que quieres para tu inventario" << endl;
	cin >> Espacio;
	Items.resize(Espacio);

	for (unsigned int i = 0; i < Espacio; i++)
	{
		cout << "Agrega los items de tu inventario" << endl;
		cin >> Items[i];
		cout << "Tienes espacio para " << Espacio - 1 << endl;
	}
	cout << "Tienes " << Items.size() << " items en tu inventario" << endl;
	//Iteration FOR
	for (unsigned int i = 0; i < Items.size(); i++)
	{
		cout << Items[i] << endl;
	}

	cout << endl;

	if (Items.empty())
	{
		cout << "No tienes nada" << endl;
	}
	else
	{
		cout << "Tienes " << Items.size() << " items en tu inventario" << endl;
		//Iteration FOR
		for (unsigned int i = 0; i < Items.size(); i++)
		{
			cout << Items[i] << endl;
		}
	}


}