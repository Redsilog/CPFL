// Name        : Rafael Edward Deligero
// Activity    : 0E6
// Description : searching and sorting functions of Arrays
// Date        : 11/26/2021

#include <iostream>

using namespace std;

//constant variable
const int _Size = 100;

//declaration of functions
void searchArray(int user[], int size); 
void sortAscending (int user[], int size);
void sortDescending (int user[], int size);

int main()
{

    int size, option;
    int user[_Size],target; 

        //clears console
        system("cls");

        //user input
        cout << "Enter the number of elements in the Array: ";
        cin >> size;

        cout << "\nEnter " << size << " numbers: " << endl; 

            for (int a = 0; a < size; a++)
                {
                    cout << "- "; 
                    cin >> user[a];
                }

            //Menu 
            do {
                system ("cls");

                cout << "[1] Searching Array" << endl;
                cout << "[2] Sorting Array (Ascending)" << endl;
                cout << "[3] Sorting Array (Descending)" << endl;
                cout << "[0] Exit the program" << endl;
                cout << "\nSelect function: ";
                cin >> option; 

                    switch (option)
                    {
                        //searching an element in the input Array
                        case 1: 
                        {
                            searchArray(user,size);
                            cout << endl; 
                            system("pause"); 
                            break;
                        }

                        //sorting array elements in ascending order  
                        case 2: 
                        {
                            sortAscending (user,size);
                            cout << endl; 
                            system("pause");
                            break;
                        }

                        //sorting array elements in descending order 
                        case 3: 
                        {
                            sortDescending (user,size);
                            cout << endl; 
                            system("pause");
                            break;
                        }

                        //ends the program 
                        case 0: 
                        {
                            cout << "\n<<Program ended >>"; 
                            return 0; 
                        }

                        //when the input is invalid 
                        default:

                            cout << "\n<< Invalid input >>" << endl << endl;
                            system("pause");
                            break;
                    }
            } while (option != 0);
}

// function definitions

void searchArray (int user[], int size)
{
    //Read the elements in the array
    int m, num = 0; 
    cout << "\nEnter a number to search in Array: ";
    cin >> num;

    //search element in the array
    for (m = 0; m < size; m++)
    {
        if (user[m] == num)
        {
            cout << "[" << user[m] << "] is stored in array position " << "[" << m << "]"; 
            break;
        }
    }

    if (m == size)
    {
        cout << "\n<< Element not present in input Array >>";
    }

    cout << endl; 
}

void sortAscending (int user[], int size)
{
    int m, g, temp; 

    for (g = 0; g < size; g++)
    {
        for (m = g + 1; m < size; m++)
        {
            if (user[m] < user[g])
            {
                temp = user[g];
                user[g] = user[m];
                user[m] = temp;
            }
        }
    }

    cout << endl; 
    cout << "Ascending order of elements: " << endl; 

    for (g = 0; g < size; g++)
    {
        cout << user[g] << endl; 
    }
}

void sortDescending (int user[], int size)
{
    int m, g, temp; 

    for (g = 0; g < size; g++)
    {
        for (m = g + 1; m < size; m++)
        {
            if (user[g] < user[m])
            {
                temp = user[g];
                user[g] = user[m];
                user[m] = temp;
            }
        }
    }

    cout << endl; 
    cout << "Descending order of elements: " << endl; 

    for (g = 0; g < size; g++)
    {
        cout << user[g] << endl; 
    }
}

