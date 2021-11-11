//Name        : Rafael Edward Deligero
//Activity    : Midterms Exam
//Description : Conversion Console Application that converts certain lengths
//Date        : 11/12/2021

#include <iostream>

using namespace std;

//void functions
void cont();
void millimeter_to_centimeter (float a, int b);
void meter_to_kilometer (float a, int b);
void inch_to_foot (float a, int b);

//Value-Returning functions
int centimeter_to_millimeter (unsigned a, int b);
int kilometer_to_meter (unsigned a, int b);
int foot_to_inch (unsigned a, int b);

int main()
{
    int option;

        do
        {
            system ("cls"); 
            cout << "\nLength Conversion App" << endl; 
            cout << endl; 

            //Menu of the conversion App
            cout << "[1] Centimeter to Millimeter" << endl;
            cout << "[2] Millimeter to Centimeter" << endl; 
            cout << "[3] Foot to inch" << endl; 
            cout << "[4] Inch to Foot" << endl; 
            cout << "[5] Meter to Kilometer" << endl;
            cout << "[6] Kilometer to Meter" << endl; 
            cout << "[0] Exit" << endl; 
            cout << "\nSelect Conversion : ";
            cin >> option;
             
            switch (option)
            {
                case 1: //Centimeter to Millimeter Conversion
                {
                    int cm, m = 10; 
                    cout << "\n-----------------------------------------" << endl;
                    cout << "\n<< Centimeter to Millimeter Conversion >>" << endl; 
                    cout << "\nCentimeter Value: ";
                    cin >> cm;
                    cout << "Millimeter Value: " << centimeter_to_millimeter(cm, m);
                    cout << endl; 
                    cout << "\n-----------------------------------------" << endl;
                    cont();
                    break; 
                }

                case 2: //Millimeter to Centimeter Conversion
                {
                    float mm, c = 10; 
                    cout << "\n-----------------------------------------" << endl;
                    cout << "\n<< Millimeter to Centimeter Conversion >>" << endl; 
                    cout << "\nMillimeter Value: ";
                    cin >> mm;
                    millimeter_to_centimeter (mm, c);
                    cout << "\n-----------------------------------------" << endl;
                    cont();
                    break; 
                }

                case 3: //Foot to Inch Conversion 
                {
                    int feet, inch = 12;
                    cout << "\n-----------------------------------------" << endl;
                    cout << "\n<< Foot to Inch Conversion >>" << endl; 
                    cout << "\nFoot Value: ";
                    cin >> feet;
                    cout << "Inch Value: " << foot_to_inch(feet, inch); 
                    cout << endl; 
                    cout << "\n-----------------------------------------" << endl;
                    cont();
                    break; 
                }

                case 4: //Inch to Foot Conversion
                {
                    int inches, foot = 12; 
                    cout << "\n-----------------------------------------" << endl;
                    cout << "\n<< Inch to Foot Conversion >>" << endl; 
                    cout << "\nInch Value: ";
                    cin >> inches;
                    inch_to_foot (inches, foot);
                    cout << "\n-----------------------------------------" << endl;
                    cont();
                    break; 
                }

                case 5: //Meter to Kilometer Conversion
                {
                    int meter, kilometer = 1000; 
                    cout << "\n-----------------------------------------" << endl;
                    cout << "\n<< Meter to Kilometer Conversion >>" << endl; 
                    cout << "\nMeter Value: ";
                    cin >> meter;
                    meter_to_kilometer (meter, kilometer);
                    cout << "\n-----------------------------------------" << endl;
                    cont();
                    break; 
                }

                case 6: //Kilometer to Meter Conversion
                {
                    int km, mt = 1000; 
                    cout << "\n-----------------------------------------" << endl;
                    cout << "\n<< Kilometer to Meter Conversion >>" << endl; 
                    cout << "\nKilometer Value: ";
                    cin >> km;
                    cout << "Meter Value: " << kilometer_to_meter(km, mt); 
                    cout << endl; 
                    cout << "\n-----------------------------------------" << endl;
                    cont();
                    break; 
                }

                case 0: //Ending the program
                {
                    cout << "\n<< Thankyou for using this Conversion Application >>";
                    return 0; 
                }

                default: //Invalid input
                {
                    cout << "\n<< Invalid Number >>" << endl; 
                    cont();
                    break;
                }
            }

        }while (option != 0); 
}

//Void Functions Definition
void cont()
{
    cout << "\n[ Press Enter to try again ]"; 
    cin.ignore(20,'\n'); 
    cin.get(); 
}

void millimeter_to_centimeter (float a, int b) 
{
    cout.setf(ios::fixed);
    cout.precision(1);

    cout << "Centimeter Value: " << (a / b) << endl; 
}

void inch_to_foot (float a, int b)
{
    cout.setf(ios::fixed);
    cout.precision(2);

    cout << "Foot Value: " << (a / b) << endl; 
}

void meter_to_kilometer (float a, int b) 
{
    cout.setf(ios::fixed);
    cout.precision(3);

    cout << "Kilometer Value: " << (a / b) << endl; 
}

//Value-Returning Functions Definition
int centimeter_to_millimeter (unsigned a, int b)
{
    int millimeter = a * b;
    return millimeter; 
}

int kilometer_to_meter (unsigned a, int b) 
{
    int meter = a * b;
    return meter; 
}

int foot_to_inch (unsigned a, int b) 
{
    int inch = a * b;
    return inch;
}
