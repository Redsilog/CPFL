//Name        : Rafael Edward Deligero
//Activity    : Prelim Exam
//Description : Payroll program
//Date        : 07/10/2021

#include <iostream>
#include <string>
#include <iomanip> 

using namespace std;

const float TAX     = 0.12; 
const float pHealth = 150; 
const float SSS     = 250;
const float Pagibig = 200; 
int main(){

string name, employee_number, date_payday; 
int hours_worked; 
float hourly_payrate; 
float Grossp, wTAX, miscd, netp; 

    cout.setf(ios::fixed);
    cout.setf(ios::showpoint); 
    cout.precision(2); 

// input display 

    cout << "Enter your name : "; 
    getline(cin,name);

    cout << "Employee number : ";
    getline(cin,employee_number); 

    cout << "Date of payday  : "; 
    getline(cin,date_payday);

    cout << endl; 

    cout << "Hourly payrate  : ";
    cin >> hourly_payrate; 

    cout << "Hours worked    : "; 
    cin >> hours_worked; 

    cout << endl; 

// Computations

    Grossp = hourly_payrate * hours_worked; 
    wTAX = Grossp * TAX; 
    miscd = pHealth + SSS + Pagibig; 
    netp = (Grossp - wTAX) - miscd; 



// output display 

    cout << "Payroll summary for : " << name << endl; 
    cout << "Employee No.        : " << employee_number << endl; 
    cout << "Payroll date        : " << date_payday << endl; 

    cout << endl; 

    cout << "You earned " << "P" << hourly_payrate << " per hour in " << hours_worked << " hours" << endl; 

    cout << endl; 

    cout << "Gross pay         " << setw(14) << "Php "  << Grossp << endl; 
    cout << "Withholding Tax   " << setw(21) << wTAX    << endl; 
    cout << "Philhealth        " << setw(21) << pHealth << endl; 
    cout << "SSS               " << setw(21) << SSS     << endl;
    cout << "Pagibig           " << setw(21) << Pagibig << endl;

    cout << "-----------------------------------------" << endl; 

    cout << "Net pay           " << setw(14) << "Php "  << netp << endl; 

    cout << endl; 

        if (netp < 5000.00){
                cout << "Employee status : Contractual";
            }
            if (netp > 5000.00 && netp <= 10000.00){
                cout << "Employee status : Probationary"; 
            }
        else 
            cout << "Employee status : Regular";
            
    return 0; 
}