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

	// Methoden = Funktionalit�t
	// Einf�gen eines Elements am Anfang der Liste
	void einfuegenAnfang(Element*);
	// Einf�gen eines Elements am Ende der Liste
	void einfuegenEnde(Element*);
	// L�schen eines Elements am Anfang der Liste
	void entferneAnfang();
	// L�schen eines Elements am Ende der Liste
	void entferneEnde();
	// �berpr�fung, ob die Liste leer ist
	bool leer();
	// Ausgabe der gesamten Liste
	void ausgabeListe();
	// Suchen (Finden) eines Elementes
	Element* sucheElement(string);
	// sortiert die Daten nach dem Alphabet
	void sortieren();
};