#pragma once
#include "Element.h"

class Liste
{
private:
	// Beginn der Liste (Zugriff auf das erste Element)
	// ToDo

public:
	Liste(void);
	~Liste(void);

	Element* getKopfzeiger() { return kopfzeiger; }

	// Methoden = Funktionalität
	// Einfügen eines Elements am Anfang der Liste
	void einfuegenAnfang(Element*);
	// Einfügen eines Elements am Ende der Liste
	void einfuegenEnde(Element*);
	// Löschen eines Elements am Anfang der Liste
	void entferneAnfang();
	// Löschen eines Elements am Ende der Liste
	void entferneEnde();
	// Überprüfung, ob die Liste leer ist
	bool leer();
	// Ausgabe der gesamten Liste
	void ausgabeListe();
	// Suchen (Finden) eines Elementes
	Element* sucheElement(string);
	// sortiert die Daten nach dem Alphabet
	void sortieren();
};