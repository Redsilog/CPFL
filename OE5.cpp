//Name: Rafael Edward Deligero
//Activity: OE5
//Description: Reversing a string and unsigned integers 
//Date: 11/3/2021

#include <iostream>

using namespace std;

//functions
void reverse_string(string &input);
int unsigned_ints(unsigned user); 

int main(){

int option; 

     
    do{
        cout << "\n[1] Reverse a String" << endl <<
                "\n[2] Reverse Unsigned Integer" << endl <<
                "\n[3] Exit" << endl; 

        cout << endl; 

        cout << "Select Function: ";
        cin >> option;

        cout << "\n------------------------------------" << endl; 

        switch (option)
        {
            case 1:
            {
                string input; 
                char again;

                cout << "<< Reverse a String >>" << endl; 
                cout << "\nEnter word/s  : ";

                cin.ignore();
                getline(cin,input);

                reverse_string(input);

                cout << "Reversed word : " << input << endl; 
                cout << "\n------------------------------------";
                break; 
            }

            case 2:
            { 
                int user;

                cout << "<< Reverse an unsigned integer >>" << endl; 
                cout << "\nEnter numbers [0-9] : ";

                cin >> user; 

                cout << "Reversed numbers    : " << unsigned_ints(user) << endl; 
                cout << "\n------------------------------------";
                break; 
            }

            case 3:
            {
                cout << "Quit program";
                break; 
            }

            default:
            {
                cout << "Invalid number, try again" << endl; 
                break; 
            }
        }

    } while (option !=3); 

    return 0; 
}

void reverse_string(string &input)
{
    int x = input.length();

    int a = 0;
    int z = x - 1; 

    while(a < z) 
    {
        if(input[a] == ' ')
        {
            a++;
            continue;
        }

        else if(input[z] == ' ' )
        {
            z--;
            continue;
        }

        else 
        {
            swap(input[a], input[z]);
            a++;
            z--;
        }
    }
}  

int unsigned_ints(unsigned user)
{
    int num1 = 0;
    while (user > 0) 
    {
        num1 = num1 *10 +user %10;
        user /= 10;
    }
    return num1;
}