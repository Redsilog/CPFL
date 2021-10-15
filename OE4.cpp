//Name        : Rafael Edward Deligero
//Activity    : OE4
//Description : Create a pyramid using for-loops 
//Date        : 15/10/2021

#include <iostream>

using namespace std;

int main()
{

    int input;

    cout << "Enter the number of rows for the pyramid : "; 
    cin >> input;

    cout << endl; 

        for (int a = 1; a <= input; a++)
        {
            //1st Pyramid
            for (int b = 1; b <= (input - a); b++){
            cout << " ";
            }

        
            for (int c = 1; c <= a * 2 - 1; c++)
            {
        
                if (c == 1 || c == a * 2 - 1){
                cout << "*";
                }
                else if (a == input){
                cout << "*";
                }
                else{
                cout << " ";
                }

            }
        
            cout << " ";
        
            //2nd Pyramid
            for (int b = 1; b <= (input - a); b++){
            cout << "  ";
            }

        
            for (int c = 1; c <= a * 2 - 1; c++)
            {
            
                if (c == 1 || c == a * 2 - 1){
                cout << "*";
                }
                else if (a == input){
                cout << "*";
                }
                else{
                cout << " ";
                }

            }

            cout << " ";

            //3rd pyramid
            for (int b = 1; b <= (input - a); b++){
            cout << "  ";
            }

        
            for (int c = 1; c <= a * 2 - 1; c++)
            {
            
                if (c == 1 || c == a * 2 - 1){
                cout << "*";
                }
                else if (a == input){
                cout << "*";
                }
                else{
                cout << " ";
                }

            }
        
            cout << endl;
        }
    
    return 0;
}

