// Cal_Practice_Progra2.cpp : Este archivo contiene la funcion "main". La ejecucion del programa comienza y termina ahi;
//
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdlib>

void vector1();
void vectores2();
void Jueguito();

using namespace std;

int main()
{
	vector<string> Palabras;

	Palabras.push_back("Comadreja");
	Palabras.push_back("Anguila");
	Palabras.push_back("Conejo");
	Palabras.push_back("Cocodrilo");
	Palabras.push_back("Cabra");

	srand(time(NULL));
	random_shuffle(Palabras[2].begin(), Palabras[2].end());
	cout << Palabras[2] << endl;


}

void vectores2()
{
	const int NUM_SCORES = 4;
	int score;

	vector<int>::const_iterator iter;

	vector<int> scores;

	for (int i = 0; i < NUM_SCORES; i++)
	{
		cout << "Score " << i + 1 << endl;
		cin >> score;
		scores.push_back(score);
	}

	cout << "Puntajes" << endl;
	for (iter = scores.begin(); iter != scores.end(); iter++)
	{
		cout << *iter << endl;
	}

	/*Find*/
	cout << "Buscar puntajes: Ingresa el puntaje que quieres buscar" << endl;
	cin >> score;

	iter = find(scores.begin(), scores.end(), score);

	if (iter != scores.end())
	{
		cout << "\nTu puntaje se encuentra en el vector\n";
	}
	else
	{
		cout << "\nNo encontramos el puntaje que buscas\n";
	}

	/*Random Shuffle*/

	srand(time(NULL));
	random_shuffle(scores.begin(), scores.end());
	cout << "\nScores Mezclados\n";
	for (iter = scores.begin(); iter != scores.end(); iter++)
	{
		cout << *iter << endl;
	}

	//Shuffle String 
	string word = "perro";
	random_shuffle(word.begin(), word.end());
	cout << word << endl;

	/*Sort*/
	cout << "\nCambiar orden \n";
	sort(scores.begin(), scores.end());
	for (iter = scores.begin(); iter != scores.end(); iter++)
	{
		cout << *iter << endl;
	}

	cout << "\nCambiar orden  greater\n";
	sort(scores.begin(), scores.end(), greater<int>());
	for (iter = scores.begin(); iter != scores.end(); iter++)
	{
		cout << *iter << endl;
	}

}


void vector1()
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

