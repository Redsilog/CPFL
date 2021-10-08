#include <iostream>

using namespace std; 

int main (){

int counter = 0;
int range;
int input;
int remainder; 

cout << "Enter range of numbers : "; 
cin >> range; 

cout << "Enter " << range << " consecutive numbers : "; 

while (counter < range)
{
    cin >> input; 
    
    counter = counter + 1; 
    remainder = input % 2; 

    if (remainder == 0)
        cout << input << " - " << "is even" << endl;
        
    else 
        cout << input << " - " << "is odd" << endl;
}

    return 0; 
}