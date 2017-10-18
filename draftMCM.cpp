//Delsey Sabu

#include <iostream>
#include <string>
#include <fstream>
#include <iomanip>

using namespace std;
//function prototypes

//constants 
const int x = 3934; //sorted array number


int main()
{
	
	ofstream outFile;
	int totalNamesArray[x];
	
	for (int j = 1; j < x; j++)
	{
		totalNamesArray[j] = j;
	}

	int points[x];
	for (int n = 0; n < x; n++)
	{
		points[n] = 0; //initializing all points to zero - for all names/rows
	}

	//connect output stream to destination file
	outFile.open("C:\\Users\\Delsey\\OneDrive\\MCM\\pointsOUTPUTDELETE.csv");
	//make sure file opened successfully, if not, exit
	if (outFile.fail())
	{
		cout << "Output not found or disk full (or device not found)!" << endl;
		exit(1);
	}
	
	//PREDEGG adding 2 points 
	ifstream PREDDEGnames;
	int PREDDEG[x];
	//connect input stream to source file
	PREDDEGnames.open("C:\\Users\\Delsey\\OneDrive\\MCM\\sorted\\PREDDEG.csv");

	//make sure file opened successfully, if not, exit
	if (PREDDEGnames.fail())
	{
		cout << "Input not found or corrupt!" << endl;
		exit(1);
	}

	//prime the read
	PREDDEGnames >> PREDDEG[0];
	int predegcount = 0;
	while (PREDDEGnames.good())
	{
		predegcount++;
		PREDDEGnames >> PREDDEG[predegcount];		
	}

	int colleges = 0; 
	//setting up PREDDEG points 
		for (int count = 0; count < x; count++) 
		{
			if (PREDDEG[count] == 3)
			{
				colleges++; 
				points[count] = points[count] + 2;
			}
				
		}

		cout << colleges << endl; 
	//CONTROL 
		ifstream CONTROLnames; 
		CONTROLnames.open("C:\\Users\\Delsey\\OneDrive\\MCM\\CONTROL.csv"); 
		if (CONTROLnames.fail())
		{
			cout << "control file not found!" << endl; 
			exit(1); 
		}
		int CONTROL[x]; 
		CONTROLnames >> CONTROL[0]; 
		int controlcount = 0; 
		while (CONTROLnames.good())
		{
			controlcount++; 
			CONTROLnames >> CONTROL[controlcount];

		}
		int collegesC = 0; 
		for (int g = 0; g < x; g++)
		{
			if ((CONTROL[g] == 2) || (CONTROL[g] == 1))
			{
				collegesC++; 
				points[g] = points[g] + 3; 
				
			}
		}
		cout << collegesC << endl; 

	//2) minority
	ifstream minoritynames;
	int minority[x];
	//connect input stream to source file
	minoritynames.open("C:\\Users\\Delsey\\OneDrive\\MCM\\sorted\\minority.csv");
	//make sure file opened successfully, if not, exit
	if (minoritynames.fail())
	{
		cout << "Input not found or corrupt!" << endl;
		exit(1);
	}

	//prime the read
	minoritynames >> minority[0];
	int m = 0;
	while (minoritynames.good())
	{
		m++;
		minoritynames >> minority[m];
	}
	////setting up minority points - 1 point 
	for (int countT = 0; countT < x; countT++)
	{
		for (int count = 0; count < 591; count++) //0-591 85%
		{
			if (minority[count] == totalNamesArray[countT])
				points[countT] = points[countT] + 3;
		}

		for (int count = 591; count < 1013; count++) //591-1013 - 75%
		{
			if (minority[count] == totalNamesArray[countT])
				points[countT] = points[countT] + 2;
		}
		for (int count = 1013; count < 1976; count++) //1013 -  1976 - 50%
		{
			if (minority[count] == totalNamesArray[countT])
				points[countT] = points[countT] + 1;
		}
	}

	//3) PCTPELL
	ifstream PCTPELLnames;
	int PCTPELL[x];
	//connect input stream to source file
	PCTPELLnames.open("C:\\Users\\Delsey\\OneDrive\\MCM\\sorted\\PCTPELL.csv");
	//make sure file opened successfully, if not, exit
	if (PCTPELLnames.fail())
	{
		cout << "Input not found or corrupt!" << endl;
		exit(1);
	}

	//prime the read
	PCTPELLnames >> PCTPELL[0];
	int p = 0;
	while (PCTPELLnames.good())
	{
		p++; 
		PCTPELLnames >> PCTPELL[p];

	}
	//setting up PCTPELL points - 1 point 
	for (int countT = 0; countT < x; countT++)
	{
		for (int count = 0; count < 986; count++)
		{
			if (PCTPELL[count] == totalNamesArray[countT])
				points[countT] = points[countT] + 1;
		}
	}

	//4) GRAD_DEBT_MDN_SUPP
	ifstream GRAD_DEBT_MDN_SUPPnames;
	int GRAD_DEBT_MDN_SUPP[x];
	//connect input stream to source file
	GRAD_DEBT_MDN_SUPPnames.open("C:\\Users\\Delsey\\OneDrive\\MCM\\sorted\\GRAD_DEBT_MDN_SUPP.csv");

	//make sure file opened successfully, if not, exit
	if (GRAD_DEBT_MDN_SUPPnames.fail())
	{
		cout << "Input not found or corrupt!" << endl;
		exit(1);
	}

	//prime the read
	GRAD_DEBT_MDN_SUPPnames >> GRAD_DEBT_MDN_SUPP[0];
	int d = 0;
	while (GRAD_DEBT_MDN_SUPPnames.good())
	{
		d++; 
		GRAD_DEBT_MDN_SUPPnames >> GRAD_DEBT_MDN_SUPP[d];
	}
	//setting up GRAD_DEBT_MDN_SUPP points - 1 point 
	for (int countT = 0; countT < x; countT++)
	{
		for (int count = 0; count < 985; count++)
		{
			if (GRAD_DEBT_MDN_SUPP[count] == totalNamesArray[countT])
				points[countT] = points[countT] + 2;
		}
		for (int count = 985; count < 1970; count++)
		{
			if (GRAD_DEBT_MDN_SUPP[count] == totalNamesArray[countT])
				points[countT] = points[countT] + 1;
		}

	}
	//5) C150_4_POOLED_SUPP
	ifstream C150_4_POOLED_SUPPnames;
	int C150_4_POOLED_SUPP[x];
	//connect input stream to source file
	C150_4_POOLED_SUPPnames.open("C:\\Users\\Delsey\\OneDrive\\MCM\\sorted\\C150_4_POOLED_SUPP.csv");

	//make sure file opened successfully, if not, exit
	if (C150_4_POOLED_SUPPnames.fail())
	{
		cout << "Input not found or corrupt!" << endl;
		exit(1);
	}

	//prime the read
	C150_4_POOLED_SUPPnames >> C150_4_POOLED_SUPP[0];
	int pool = 0;
	while (C150_4_POOLED_SUPPnames.good())
	{
		pool++;
		C150_4_POOLED_SUPPnames >> C150_4_POOLED_SUPP[pool];
	}
	//setting up C150_4_POOLED_SUPP points - 3 point  - 1 point
	for (int countT = 0; countT < x; countT++)
	{
		for (int count = 0; count < 394; count++)
		{
			if (C150_4_POOLED_SUPP[count] == totalNamesArray[countT])
				points[countT] = points[countT] + 3;
		}
		for (int count = 394; count < 985; count++)
		{
			if (C150_4_POOLED_SUPP[count] == totalNamesArray[countT])
				points[countT] = points[countT] + 1;
		}

	}
	
	//7) md_earn_wne_p10
	ifstream md_earn_wne_p10names;
	int md_earn_wne_p10[x];
	//connect input stream to source file
	md_earn_wne_p10names.open("C:\\Users\\Delsey\\OneDrive\\MCM\\sorted\\md_earn_wne_p10.csv");

	//make sure file opened successfully, if not, exit
	if (md_earn_wne_p10names.fail())
	{
		cout << "Input not found or corrupt!" << endl;
		exit(1);
	}

	//prime the read
	md_earn_wne_p10names >> md_earn_wne_p10[0];
	int md = 0;
	while (md_earn_wne_p10names.good())
	{
		md++; 
		md_earn_wne_p10names >> md_earn_wne_p10[md];
	}
	//setting up md_earn_wne_p10 points - 1 point 
	for (int countT = 0; countT < x; countT++)
	{
		for (int count = 0; count < 979; count++)
		{
			if (md_earn_wne_p10[count] == totalNamesArray[countT])
				points[countT] = points[countT] + 2;
		}
		for (int count = 979; count < 1960; count++)
		{
			if (md_earn_wne_p10[count] == totalNamesArray[countT])
				points[countT] = points[countT] + 1;
		}
	}


	//############
	//######################################################
	//after all variables do the point outfile 

	for (int n = 0; n < x; n++)
	{
		outFile << points[n] << endl; //outputting total points from all colleges
	}

	//close files
	PCTPELLnames.close();
	minoritynames.close(); 
	GRAD_DEBT_MDN_SUPPnames.close();
	md_earn_wne_p10names.close();
	C150_4_POOLED_SUPPnames.close(); 
	CONTROLnames.close(); 
	//GATESnames.close(); 
	//SCHOOLSnames.close(); 
	outFile.close();
	return 0;

}