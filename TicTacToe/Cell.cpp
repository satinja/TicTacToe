#include "Cell.h"

Cell::Cell(char c)
{
	cellValue = c;
}

void Cell::undoValue()
{
	cellValue = '_';
}

void Cell::setValue(char newVal)
{
	cellValue = newVal;
}

char Cell::getCellValue()
{
	return cellValue;
}
