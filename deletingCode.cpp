//Delsey Sabu

#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>

using namespace std;
const int x = 3934; 

int main()
{
	ifstream GATESnames;
	GATESnames.open("C:\\Users\\Delsey\\OneDrive\\MCM\\GATESfoundationsSchools.csv");
	if (GATESnames.fail())
	{
		cout << "GATES did not open" << endl;
		exit(1);
	}
	ifstream SCHOOLSnames;
	SCHOOLSnames.open("C:\\Users\\Delsey\\OneDrive\\MCM\\newerSchools.csv");
	if (SCHOOLSnames.fail())
	{
		cout << "School names did not open" << endl;
		exit(1);
	}

	string GATESArray[70];
	string SCHOOLS[x];
	getline(GATESnames, GATESArray[0]);
	getline(SCHOOLSnames, SCHOOLS[0]);
	int schoolcount = 0;
	int gatescount = 0;

	while (GATESnames.good())
	{
		gatescount++;
		getline(GATESnames, GATESArray[gatescount]);
	}
	while (SCHOOLSnames.good())
	{
		schoolcount++;
		getline(SCHOOLSnames, SCHOOLS[schoolcount]);
	}
	
	GATESnames.close();
	SCHOOLSnames.close();
	//outFile.close();
	return 0;

}