// Room Measurments.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <string>
#include <array>
#include <conio.h>
#include <iostream>

using namespace std;

class Floor
{
public:
	void GetDetails(double dZaxispass, double dXaxispass);
	double ShowResultsFloor(double dZaxis, double dXaxis);
private:

protected:



};

class Wall
{
public:
	void GetWallDetails(double dWidthpass);
	double ShowResults(double dHeightpass, double dWidthpass);
protected:


private:
	double dHeight = 10;
	double dWidth = 0;

};

void Wall::GetWallDetails(double dWidthpass)
{
	dWidth = dWidthpass;
};

double Floor::ShowResultsFloor(double dZaxis, double dXaxis)
{
	double dFloorArea = dXaxis * dZaxis;
	double dFloorPrice = dFloorArea * 4;
	double dFloorPriceDeluxe = dFloorArea * 8.50;

	cout << endl << endl << "The Price of Normal Floor is: " << char(156) << dFloorPrice;
	cout << endl << endl << "The Price of Deluxe Floor is: " << char(156) << dFloorPriceDeluxe;


	return dFloorPrice, dFloorPriceDeluxe;
}


double Wall::ShowResults(double dHeightpass, double dWidthpass)
{
	double  dArea = dHeight * dWidth;
	double dPrice = dArea * 1;
	double dPriceDeluxe = dArea * 12;
	cout << endl << endl << "The Price of Normal Wallpaper for this wall is: " << char(156) << dPrice;
	cout << endl << endl << "The Price of Deluxe Wallpaper for this wall is: " << char(156) << dPriceDeluxe;

	return dPrice;
}

int main()
{
	Floor oFloor;
	Wall oWall;
	double dZaxis = 0, double dXaxis = 0;
	double dHeight = 0;
	double dWidth = 0;
	cout << "Welcome to the program!" << endl;
	cout << endl << "Please enter the Wall's Width in Meters: ";
	cin >> dWidth;
	cout << endl << "Your Wall's Width is: " << dWidth << " M";

	cout << endl << "Please enter the floor's Z axis in Meters: ";
	cin >> dZaxis;
	cout << "Your Floors Z Axis is: " << dZaxis << " M";

	cout << endl << "Please enter the floor's x axis in Meters: ";
	cin >> dXaxis;
	cout << "Your Floors X Axis is: " << dXaxis << " M";


	oWall.GetWallDetails(dWidth);
	oWall.ShowResults(dHeight, dWidth);
	oFloor.GetDetails(dZaxis, dXaxis);
	oFloor.ShowResultsFloor(dZaxis, dXaxis);






	_getch();
	return 0;
}
