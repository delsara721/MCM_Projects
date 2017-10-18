#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <cstdlib>
#include <ctime>
#include <fstream>
using namespace std;

//functions 
float costFunction(int conveyorN, int conveyorL, int  ID_Lanes, int mmscaner);

//const numbers
const int POPULATION = 10000; //400,000

int main()
{
	srand(time(NULL));
	/*ofstream outfile; 
	outfile.open("C:\\Users\\Delsey\\Documents\\Visual Studio 2015\\Projects\\outfile.txt"); */
	float matrix[POPULATION][5]; //5 when fitness score is added
	for (int i = 0; i < POPULATION; i++)
	{
		matrix[i][0] = rand() % 20 +1;
		matrix[i][1] = rand() % 20 +1;
		matrix[i][2] = rand() % 10 +1;
		matrix[i][3] = rand() % 10 +1;
		matrix[i][4] = costFunction(matrix[i][0], matrix[i][1], matrix[i][2], matrix[i][3]); 
		//outfile << matrix[i][0] << "\t" << matrix[i][1] << "\t" << matrix[i][2] << "\t" << matrix[i][3] << "\t" << matrix[i][4] << endl;
		//cout << matrix[i][0] << "\t" << matrix[i][1] << "\t" << matrix[i][2] << "\t" << matrix[i][3] << endl;
}

	float big = 0;
	int place = 0; 
	for (int j = 0; j < POPULATION; j++)
	{
		if (matrix[j][4] > big)
		{
			big = matrix[j][4]; 
			place = j; 
		}
	}

	cout << "Biggest fitness score is: " << big << endl; 
	cout << "Biggest fitness palce is: " << place << endl; 
	cout << matrix[place][0] << "\t" << matrix[place][1] << "\t" << matrix[place][2] << "\t" << matrix[place][3] << "\t" << matrix[place][4]; 

	//outfile.close(); 
	return 0;
}

float costFunction( int conveyorN, int conveyorL, int  ID_Lanes, int mmscaner)
{
	float fitnessC = (conveyorN * 15000)/(7/conveyorN); 
	float fitnessCL = (conveyorL * 200)/(7/conveyorL); 
	float fitnessID = (ID_Lanes * 40000)/(12/ID_Lanes);
	float fitnessMM = (175,000 * mmscaner)/(7/mmscaner); 
	float totFitness = fitnessC + fitnessCL + fitnessID + fitnessMM; 
	return totFitness;
}