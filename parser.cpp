#include <iostream>
#include <fstream>
using namespace std;

const int MAXLINE=256;

int main() 
{
	ifstream oFile;
	oFile.open("ox");
	ifstream pFile;
	pFile.open("p");

	ofstream myfile;
	myfile.open("ordered");
	
	char o_oneline[MAXLINE];
	char p_oneline[MAXLINE];
	int x_lineNumber = 1;
	int y_lineNumber = 1;
	int x,y;

   while (!oFile.eof() || !pFile.eof())
   {
		for (x = x_lineNumber; x < x_lineNumber+16; x++) {
			oFile.getline(o_oneline, MAXLINE);
			myfile << o_oneline << endl;	
		}
		x = x_lineNumber+16;

		for (y = y_lineNumber; y < y_lineNumber+2; y++) {
			pFile.getline(p_oneline, MAXLINE);
            myfile << p_oneline << endl;
		} 
       	y = y_lineNumber+2;
		
   }

   oFile.close();
   pFile.close();	



return 0;
}
