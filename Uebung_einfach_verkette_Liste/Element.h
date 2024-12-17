#pragma once
class Element
{
private:
	// ToDo
public:
	Element(void);
	Element(string);
	~Element(void);

	string getDaten();
	void setDaten(string);
	Element* getNachfolger();
	void setNachfolger(Element*);
};