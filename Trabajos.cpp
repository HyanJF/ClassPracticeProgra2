// Cal_Practice_Progra2.cpp : Este archivo contiene la funcion "main". La ejecucion del programa comienza y termina ahi;
//
#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <cstdlib>

void Ahorcado();
void vector1();
void iterators();
void iterInventory();
void Jueguito();
void guessTheWord();

using namespace std;

int main()
{
	Ahorcado();
}

void Ahorcado() {
	vector<string> Game;
	Game.push_back("ESPADA");
	Game.push_back("ESCUDO");
	Game.push_back("MAZO");
	Game.push_back("ARCO");
	Game.push_back("COMPUTADORA");
	Game.push_back("JUEGO");
	Game.push_back("CODIGO");
	Game.push_back("REFRIGERADOR");
	Game.push_back("COMADREJA");
	Game.push_back("ANGUILA");
	Game.push_back("CONEJO");
	Game.push_back("COCODRILO");
	Game.push_back("CABRA");

	srand(time(NULL));
	int randomNumber = rand();
	int wordsRandomIndex = (randomNumber % Game.size());
	string wordSelected = Game[wordsRandomIndex];

	vector<string>::iterator myIterator;
	vector<string>::const_iterator iter;

	string correctWord = "123456";
	int intentos = 0;
	const int VIDAS = 5;


	cout << "\nJuego del ahoracado bienvenido Jugador " << endl;
	cout << "Tienes 5 vidas para adivinar la palabra, si fallas eres muy malo >W<, y si ganas sin duda eres un genio OwO " << endl;
	cout << "Comenzamos de una vez Owo " << endl;
	cout << endl << endl;

	do
	{
		for (unsigned int i = 0; i < wordSelected.size(); i++)
		{
			if (correctWord[i] == wordSelected[i])
			{
				cout << wordSelected[i];
			}
			else
			{
				cout << "-";
			}
		}
		cout << endl;

		cin >> correctWord;
		transform(correctWord.begin(), correctWord.end(), correctWord.begin(), ::toupper);
		//cout << correctWord << endl;

		if (correctWord == Game[wordsRandomIndex])
		{
			intentos++;
			cout << "\nAdivinaste la palabra!!!\n";
			break;
		}
		else
		{
			intentos++;
			cout << "Fallaste humano inepto, te quedan " << VIDAS - intentos << endl;
		}

	} while (intentos != VIDAS);

	if (intentos == VIDAS)
	{
		cout << "\nPerdiste, date de baja, la palabra era:  \n";
		cout << Game[wordsRandomIndex];
	}
	else
	{
		cout << "\nMUY BIEN!! lo hiciste en: " << intentos << " intentos." << endl;
	}
}

void iterInventory()
{
	vector<string> Inventory;
	Inventory.push_back("Espada");
	Inventory.push_back("Escudo");
	Inventory.push_back("Mazo");
	Inventory.push_back("Arco");

	vector<string>::iterator myIterator;
	vector<string>::const_iterator iter;

	cout << "\nTus Items: \n";
	for (iter = Inventory.begin(); iter != Inventory.end(); iter++)
	{
		cout << *iter << endl;
	}

	//intercambiar 
	cout << "\nIntercambiaste tu " << Inventory[2] << " Por un Arco";
	myIterator = Inventory.begin() + 2;
	*myIterator = "Arco";
	cout << "\nTus items: \n";
	for (iter = Inventory.begin(); iter != Inventory.end(); iter++)
	{
		cout << *iter << endl;
	}


	//SIZE
	cout << "\n El nombre del item " << *myIterator << " tiene " << endl;
	cout << (*myIterator).size() << " letras" << endl;

	cout << "\n El nombre del item " << *myIterator << " tiene " << endl;
	cout << (myIterator)->size() << " letras" << endl;

	//INSERT
	cout << "\n\nRecuperaste la bomba robada ";
	Inventory.insert(Inventory.begin() + 4, "Bomba");
	cout << "\nTus Items: \n";
	for (iter = Inventory.begin(); iter != Inventory.end(); iter++)
	{
		cout << *iter << endl;
	}

	//DELETE
	cout << "\nTu " << Inventory[1] << "fue destruido en batalla.";
	Inventory.erase(Inventory.begin() + 1);
	cout << "\nTus Items: \n";
	for (iter = Inventory.begin(); iter != Inventory.end(); iter++)
	{
		cout << *iter << endl;
	}
}

void guessTheWord()
{
	const int MAX_ATTEMPTS = 3;
	int attempts = 0;

	vector<string> words;
	words.push_back("COMPUTADORA");
	words.push_back("JUEGO");
	words.push_back("CODIGO");
	words.push_back("REFRIGERADOR");

	srand(time(NULL));
	int randomNumber = rand();
	int wordsRandomIndex = (randomNumber % words.size());
	string wordSelected = words[wordsRandomIndex];

	//cout << wordSelected << endl;

	random_shuffle(wordSelected.begin(), wordSelected.end());
	cout << wordSelected << endl;

	string correctWord;

	do
	{
		cin >> correctWord;
		transform(correctWord.begin(), correctWord.end(), correctWord.begin(), ::toupper);
		//cout << correctWord << endl;

		if (correctWord == words[wordsRandomIndex])
		{
			attempts++;
			cout << "\nAdivinaste la palabra!!!\n";
			break;
		}
		else
		{
			attempts++;
			cout << "Fallaste humano inepto, te quedan " << MAX_ATTEMPTS - attempts << endl;
		}

	} while (attempts != MAX_ATTEMPTS);

	if (attempts == MAX_ATTEMPTS)
	{
		cout << "\nPerdiste, date de baja, la palabra era:  \n";
		cout << words[wordsRandomIndex];
	}
	else
	{
		cout << "\nMUY BIEN!! lo hiciste en: " << attempts << " intentos.";
	}

}

void Jueguito() 
{
	vector<string> Palabras;
	int vida = 3;
	Palabras.push_back("comadreja");
	Palabras.push_back("anguila");
	Palabras.push_back("conejo");
	Palabras.push_back("cocodrilo");
	Palabras.push_back("cabra");
	string Respuesta;
	int Puntaje = 0;
	bool Victoria = false;
	int put;
	srand(time(NULL));

	cout << "Bienvenido a Adivina la palabra" << endl;
	cout << "Tienes 3 vidas si llegas a 0 entonces es el fin del juego" << endl;
	cout << "Tienes que adivinar las palabras" << endl;
	cout << "Estas listo comenzamos" << endl;
	do
	{
		put = 0;
		int Azar;
		Azar = 1 + (rand() % 4);
		random_shuffle(Palabras[Azar].begin(), Palabras[Azar].end());
		cout << "La palabra es " << Palabras[Azar] << endl;
		cin >> Respuesta;

		Palabras[Azar] == Respuesta ?
			put == 2 : put == 1;

		if (put == 2)
		{
			Puntaje++;

			if (Puntaje == 5)
			{
				Victoria = true;
			}
		}
		else
		{
			vida = vida - 1;
		}

	} while (Victoria = false || vida != 0);


	if (vida == 0)
	{
		cout << "Lo siento perdiste el juego TnT" << endl;
	}
	else
	{
		cout << "Felicidades acabas de ganar OwO" << endl;
	}
}

void iterators()
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

