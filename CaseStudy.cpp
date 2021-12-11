// Name        : Rafael Edward Deligero
// Activity    : Case Study
// Description : Applying a Grading System to a Report Card
// Date        : 12//11/2021

#include <iostream>
#include <iomanip>
#include <string>
#include <fstream> 

//void function
void create();

//value-returning functions
float finalAverage(float a,int b);

using namespace std; 

int main()
{
    //variable declarations
    string subject,studentName,studentSection;
    float subjectGrade;
    int subjectNum;
    int counter = 0, index = 0; 
    

        //whose report card this is gonna be 
        system("cls");
        cout << "Enter the name of the student: ";
        getline(cin,studentName);
        cout << "Enter the section of the student: ";
        getline(cin,studentSection);

        //Knowing the number of subjects
        system("cls");
        cout << "<< Report Card Creator >>" << endl; 
        cout << "\nEnter number of subjects: ";
        cin >> subjectNum; 

        //Indicator of how many times the loop will run
        system("cls");
        cout << "<< Report Card Creator >>" << endl;
        cout << "\nEnter " << subjectNum << " subjects and their grade: " << endl;

        //Array declaration for subjects and grades
            string Subjects[subjectNum];
            float Grades[subjectNum];

            //loop that remembers multiple inputs from user
            while (counter < subjectNum)
                {
                    cout << "\nSubject: "; 
                    cin >> subject;

                    cout << "Grade: "; 
                    cin >> subjectGrade;

                    Subjects[counter] = {subject};
                    Grades[counter] = {subjectGrade};
            
                    counter++;
                }

            //for creating a txt file
            ofstream outFile; 
            outFile.open("CS.txt"); 
            system("cls");
            cout << "Creating Report Card . . .";
            create();
        
        //Report Card output
        system("cls");
        outFile << "Student: " << studentName << endl; 
        outFile << "Section: " << studentSection << endl; 
        outFile << "--------------------------------" << endl; 
        outFile << "          Report Card           " << endl; 
        outFile << "--------------------------------" << endl; 
        outFile << "      Subject      Grade        " << endl; 
        outFile << "\n";

            //add to decimals to the output
            outFile.setf(ios::fixed);
            outFile.setf(ios::showpoint);
            outFile.precision(2);

            //Grade Point System used
            while (index < subjectNum)
                {
                    float finalGrade;

                        if (Grades[index] < 75.00)
                            {
                                finalGrade = 5.00;
                            }
                    
                        else if (Grades[index] >= 75.00 && Grades[index] <= 77.00)
                            {
                                finalGrade = 3.00;
                            }

                        else if (Grades[index] >= 78.00 && Grades[index] <= 79.00)
                            {
                                finalGrade = 2.75;
                            }
                    
                        else if (Grades[index] >= 80.00 && Grades[index] <= 82.00)
                            {
                                finalGrade = 2.50;
                            }
                    
                        else if (Grades[index] >= 83.00 && Grades[index] <= 84.00)
                            {
                                finalGrade = 2.25;
                            }

                        else if (Grades[index] >= 85.00 && Grades[index] <= 87.00)
                            {
                                finalGrade = 2.00;
                            }

                        else if (Grades[index] >= 88.00 && Grades[index] <= 90.00)
                            {
                                finalGrade = 1.75;
                            }

                        else if (Grades[index] >= 91.00 && Grades[index] <= 93.00)
                            {
                                finalGrade = 1.50;
                            }

                        else if (Grades[index] >= 94.00 && Grades[index] <= 95.00)
                            {
                                finalGrade = 1.25;
                            }

                        else if (Grades[index] >= 96.00 && Grades[index] <= 100.00)
                            {
                                finalGrade = 1.00;
                            }

                    //Printing the subjects and their Grades
                    outFile << right << setw(13) << Subjects[index] 
                    << right << setw(11) << finalGrade << endl; 
                    index++;
                }

        //to get the sum of the grades
        int count;
        float sum;
        do {
            sum = sum + Grades[count];
            count++;
        } while (count < subjectNum); 

        //output of the average
        outFile << "--------------------------------" << endl;
        outFile << "      Average " << right << setw(10) << finalAverage(sum,subjectNum);
        outFile << "\n";
        outFile << "--------------------------------" << endl;

        cout << "Report Card created!";

    return 0;
}

//Initializing void function
void create() 
{
    cin.ignore(100, '\n');
    cout << "\nPress Enter to continue . . .";
    cin.get();
}

//initializing value-returning function
float finalAverage (float a, int b)  
{
    float output;

    output = a / b;
    
    return output; 
}