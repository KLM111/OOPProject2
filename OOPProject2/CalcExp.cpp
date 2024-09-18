#include "CalcExp.h"

void CalcExp::setValues(double m, double p, double g, double f, double t)
{
	this->TotMiles = m;
	this->GasPrice = p;
	this->MilesPerGallon = g;
	this->ParkFees = f;
	this->TollsFees = t;
}
void CalcExp::CalcTotGallons()
{
	this->TotGasExp = (this->TotMiles / this->MilesPerGallon);
}
void CalcExp::CalcGasExp()
{
	this->TotGasExp = (this->TotGallons * this->GasPrice);
}
void CalcExp::CalcTotExpense()
{
	this->TotExpense = (this->TotGasExp + this->ParkFees + this->TollsFees);
}
double CalcExp::getTotMiles()
{
	return this->TotMiles;
}
double CalcExp::getGAsPrice()
{
	return this->GasPrice;
}
double CalcExp::getMPG()
{
return this->MilesPerGallon;
}
double CalcExp::getTotGasPrice()
{
	return this->TotGasExp;
}
double CalcExp::getTotExpense()
{
	return this->TotExpense;
}