//Name        : Rafael Edward Deligero
//Activity    : PT3
//Description : Recording data permanently in a file using I/O stream
//Date        : 11/21/2021

#include <iostream>
#include <string> 
#include <fstream>

using namespace std;

const float VAT1 = 0.12;
const float VAT2 = 0.10;
const float VAT3 = 0.05;

int main()
{
   system ("cls");
   string tax1,tax2,tax3,tax4;
   string ename,eid;
   float  hoursw = 0.0;
   float  rateph = 0.0;
   float  grossp,taxr,netp;
   float  salary, ot; 

   ofstream ouFile; 
   ouFile.open("PT3.txt",ios::app);
 
//Input display
    cout << "Enter employee name : ";
    getline(cin,ename);
    cout << "Enter employee ID   : ";
    getline(cin,eid); 
    cout << "Enter hours worked  : ";
    cin >> hoursw;
    cout << "Enter rate per hour : ";
    cin >> rateph;
    
//Gross pay
    salary = hoursw * rateph;

        if (hoursw == 0 || rateph == 0)
            {   
            cout << "INVALID INPUT";
            }
        else if (hoursw <= 170)
            {
            grossp = hoursw * rateph;
            }
        else if ( hoursw > 170)
            {
            grossp = rateph * 170 + 1.5 * rateph * (hoursw - 170);
            }

//Tax rate
    if (grossp > 40000)
        {
        taxr = grossp * VAT1;
        tax1 = "12%";
        }
    else if (grossp < 20000)
        {
        taxr = grossp * VAT3;
        tax4 = "5%";
        }
    else if (grossp <= 40000)
        {
        taxr = grossp * VAT2;
        tax2 = "10%";
        }
    else if (grossp >= 30000)
        {
        taxr = grossp * VAT2;
        tax3 = "10%";
        }
  
//Net pay
    netp = grossp - taxr; 
       
//output display
    ouFile << "Employee name  :"<< ename << endl; 
    ouFile << "Employee ID   : " << eid  << endl;
    ouFile << "Gross pay     : " << grossp << "k" << endl;
    ouFile << "Net pay       : " << netp   << "k" << endl;
    ouFile << "Tax rate      : ";

        if (grossp > 40000)
            {
            ouFile << tax1;
            }
         else if (grossp < 20000)
            {
            ouFile << tax4;
            }
        else if (grossp <= 40000)
            {
            ouFile << tax2;
            }
        else if (grossp >= 30000)
            {
            ouFile << tax3;
            }
    ouFile << endl << endl;
       
ouFile.close();

    return 0;
}