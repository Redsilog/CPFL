//Name        : Rafael Edward Deligero
//Activity    : OE3
//Description : Application of branching with conditional statement
//Date        : 23/09/2021

#include<iostream>
#include<string>

using namespace std;

const float VAT1 = 0.12;
const float VAT2 = 0.10;
const float VAT3 = 0.05;

int main(){

   string tax1,tax2,tax3,tax4;
   string eid,ename;
   float  hoursw = 0.0;
   float  rateph = 0.0;
   float  grossp,taxr,netp;
   float  salary, ot; 
   
   
//Input display
    cout << "Enter employee ID   : ";
    getline(cin,eid);
    cout << "Enter employee name : ";
    getline(cin,ename);
    cout << "Enter hours worked  : ";
    cin >> hoursw;
    cout << "Enter rate per hour : ";
    cin >> rateph;
    
//Gross pay
    salary = hoursw * rateph;

        if (hoursw == 0 || rateph == 0)
            {   
            cout << "NO INPUT";
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

cout<<"==========================" << endl;
       
//output display
    cout << "Employee ID   : " << eid    << endl;
    cout << "Employee name : " << ename  << endl;
    cout << "Gross pay     : " << grossp << "k" << endl;
    cout << "Net pay       : " << netp   << "k" << endl;
    cout << "Tax rate      : ";

        if (grossp > 40000)
            {
            cout << tax1;
            }
         else if (grossp < 20000)
            {
            cout << tax4;
            }
        else if (grossp <= 40000)
            {
            cout << tax2;
            }
        else if (grossp >= 30000)
            {
            cout << tax3;
            }
       



    return 0;
}