#include "Element.h"

Element::Element()
{
	// ToDo
}

Element::Element(string daten)
{
	// ToDo
}

Element::~Element(void)
{
	//cout << " Destruktor - Element: " << this->getDaten() << endl;
}

string Element::getDaten()
{
	return daten;
}

void Element::setDaten(string cursor)
{
	daten = cursor;
}

Element* Element::getNachfolger()
{
	return nachfolger;
}

void Element::setNachfolger(Element* cursor)
{
	nachfolger = cursor;
}