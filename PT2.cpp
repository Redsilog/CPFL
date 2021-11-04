// Name        : Rafael Edward Deligero
// Activity    : Performance Task 2
/* Description : Conversion Console App using functions [Dollar to Peso & Peso to Dollar] 
                 This is also a debugging activity */


#include <iostream>

using namespace std;

struct group_facet: public numpunct<char> 
{
    protected:
        string do_grouping() const {return "\003";}
};

void promptAndWait();
void dollarsToPeso(float rate, unsigned dollar);
void pesoToDollars(float pesoRate, unsigned peso); 

int main() 
{
    float conversionRate = 50.73; // 1 usd  = 50.73
    float pesoRate = 0.020;       // 1 peso = 0.020
    unsigned dollarsIn, pesosIn; 
    int ch, ans=0;

   do{
     system("cls");
     cout << endl;
     cout << "Dollar to Peso Conversion App" << endl << endl;
     cout << "[1] Dollar to Peso" << endl;
     cout << "[2] Peso to Dollar" << endl; 
     cout << "[0] Exit the Conversion App" << endl; 
     cout << "\nSelect function : "; 
     cin >> ch; 

     switch (ch)
     {
       case 1:
       {
         cout << "\n<< Convert Dollar to Peso >>" << endl; 
         cout << "Enter a US dollar amount : ";
         cin >> dollarsIn;
         dollarsToPeso(conversionRate, dollarsIn);
         promptAndWait();
         break;
       }

      case 2:
      {
        cout << "\n<< Convert Peso to Dollar >>" << endl;
        cout << "Enter Php amount : ";
        cin >> pesosIn; 
        pesoToDollars(pesoRate,pesosIn);
        promptAndWait();
        break;
      }
      
      case 0:
      {
        cout << "Conversion App Terminated \nThankyou for using the app!";
        return 0; 
      }

      default:
      {
        cout << "Invalid Input!";
        promptAndWait();
      }
    }


  } while(ans == 0);
}

void promptAndWait() 
{
  cin.ignore(100, '\n');
  cout << "\nPress Enter or Return to continue...";
  cin.get();
}

void dollarsToPeso(float rate, unsigned dollar) 
{
  cout.setf(ios::fixed);
  cout.precision(2);

  cout.imbue(locale(cout.getloc(), new group_facet));
  cout << dollar << " USD = " << (rate * dollar) << " Peso/s\n";
}

void pesoToDollars(float pesoRate, unsigned peso)
{
  cout.setf(ios::fixed);
  cout.precision(2);

  cout.imbue(locale(cout.getloc(), new group_facet));
  cout << peso << " PHP = " << (pesoRate * peso) << " dollar/s\n";
}