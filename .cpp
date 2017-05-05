
//************************************** PROGRAM INDENTIFICATION  **************************************
//*                                                                                                    *
//*   PROGRAM FILE NAME: project7.cpp              Assignment #: 7              Grade: ___________     *
//*                                                                                                    *
//*   PROGRAM AUTHOR:              _____________________________________________                       *
//*                                                 Alex Helbig                                        *
//*                                                                                                    *
//*   COURSE #: CSC 24400                                          DUE DATE: April 27, 2017            *
//*                                                                                                    *
//******************************************************************************************************

//*************************************** Program Description ******************************************
//*                                                                                                    *
//*   The purpose of this program is to efficiently take data from a text file and through the proper  *
//*   use of structures and classes be able to sort and distingush every employee in the data base.    *
//*   The information that the program will store and keep track of for each employee is ID number,    *
//*   first and last name, their title and department in the company, and finally their salary. The    *
//*   program allows for the end user to easily add, delete, or change any information for any         *
//*   current employee listed in the data base.                                                        *
//*                                                                                                    *
//******************************************************************************************************


#include <iostream>
#include <fstream>
#include <iomanip>
#include <string>

using namespace std;


class EmployeeClass{

    public:
        void addInfo( ifstream &input, int &EU);
        void deleteInfo(ifstream &input, int &EU, ofstream &output);
        void printOne(ifstream &input,  int &EU, ofstream &output);
        void updateFunction(ifstream &input,  int &EU, ofstream &output);
        int GetID() {return ID;}
        
        

    private:
        
    int ID;
    char FirstName[14];
    char LastName[14];
    char Department[16];
    char Title[16];
    float payRoll;


};

   //Prototypes
void Header(ofstream &outfile);

void printAll(ifstream &input, EmployeeClass Employees[], int &EU, ofstream &output);

int main(){

        //Opens the text file to be read
    ifstream input("DATA7.TXT", ios::in);

        //Opens the text file to be printed to
    ofstream output("output7.txt", ios::out);

    //Header(output);

    char temp;

    input >> ws;
    input >> temp;
    output << temp << endl;
    

    EmployeeClass Employees[50];
    

    
    int EU = 0;

    while(temp != 'Q')
    {

            switch(temp)
            {
                
                case 'I':

                    Employees[EU].addInfo(input, EU);
                    EU++;
                    break;

                case 'D':

                    break;

                case 'C':

                    break;

                case 'P':



                    break;     




            }

        input >> ws;
        input >> temp;
        output << temp << endl;
        

    }


return 0;
}

//******************************* Header Function ********************************

void Header(ofstream &outfile)
{
	//Recieves: Data read from text file
	//Task: Saves data from file into two arrays
	//Returns: Data read in the form of two arrays

	outfile << setw(30) << "Alex Helbig";
	outfile << setw(17) << "CSC 24400";
	outfile << setw(15) << "Section 11" << endl;
	outfile << setw(30) << "Spring 2017";
	outfile << setw(20) << "Assignment  #7" << endl;
	outfile << setw(35) << "-------------------------------";
	outfile << setw(35) << "-------------------------------" << endl << endl;
	return;
}

//******************** End of Header Function **************************





//************************************** addInfo Header ***********************************

void EmployeeClass::addInfo( ifstream &input, int &EU)
{

    input >> ws;
    input >> ID;

    input >> ws;
    input.getline(FirstName, 14);

    input >> ws;
    input.getline(LastName, 14);

    input >> ws;
    input.getline(Department, 16);

    input >> ws;
    input.getline(Title, 16);

    input >> ws;
    input >> payRoll;



}

//************************************* addInfo Footer *************************************




//************************************** deleteInfo Header **********************************

void EmployeeClass::deleteInfo(ifstream &input, int &EU, ofstream &output)
{


}

//********************************** deleteInfo Footer *************************************








//************************************** printAll Header ************************************

void printAll(ifstream &input, EmployeeClass Employees[], int &EU, ofstream &output)
{

    for (int i = 0 ; i < EU ; i++)
    {
        
        output << Employees[i].GetID() << endl;


    }

}

//************************************** printAll Footer ***********************************







//************************************** printOne Header ***********************************

void EmployeeClass::printOne(ifstream &input, int &EU, ofstream &output)
{


}

//************************************** printOne Footer **********************************







//************************************** updateFunction Header *********************************

void EmployeeClass::updateFunction(ifstream &input, int &EU, ofstream &output)
{


}

//************************************** updateFunction Footer *********************************
