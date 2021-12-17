#pragma once

class Cell
{
	char cellValue;
public:
	Cell(char);
	void undoValue();
	void setValue(char newVal);
	char getCellValue();
};

