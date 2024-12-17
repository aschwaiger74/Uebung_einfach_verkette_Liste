#include "Element.h"
#include "Liste.h"
#include <iostream>

using namespace std;

int main()
{
	Liste dieListe; // erzeuge leere Liste
	string name;
	char weiter;

	// Überprüft, ob die untere Methode berücksichtigt, dass eine Liste auch leer sein kann
	// dieListe.entferneAnfang();

	// füllen der Liste
	while (true)
	{
		cout << "Name\t-> ";
		cin >> name;

		Element* element = new Element(name);
		dieListe.einfuegenAnfang(element);
		cout << "Weiteres Element [j/n]? ";
		cin >> weiter;
		if (weiter == 'n') break;
	}

	// Daten ausgeben
	dieListe.sortieren();
	dieListe.ausgabeListe();

	// Entferne Anfang mit dem Beweis, dass der alte Kopfzeiger entfernt wurde. --> Destruktor vom Element wurde aufgerufgen.
	dieListe.entferneAnfang();
	dieListe.ausgabeListe();

	// leeren der Liste
	while (!dieListe.leer()) dieListe.entferneAnfang();

	return 0;
}
