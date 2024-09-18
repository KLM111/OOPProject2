#pragma once
class CalcExp
{
private:
	double TotMiles;
	double GasPrice;
	double MilesPerGallon;
	double ParkFees;
	double TollsFees;
	double TotGallons;
	double TotGasExp;
	

public:
	void setValues(double , double , double , double , double);
	void CalcTotGallons();
	void CalcGasExp();
	void CalcTotExpense();
	double getTotMiles();
	double getGAsPrice();
	double getMPG();
	double getTotGallos();
	double getTotGasPrice();
	double getTotExpense();
	double TotExpense;
};

