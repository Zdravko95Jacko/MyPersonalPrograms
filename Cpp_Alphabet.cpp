#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
using namespace std;

int main()
{
    char alphabet;
    cout << "Enter the Alphabet letter(A-Z): " << endl;
    cin >> alphabet;
    switch(alphabet)
    {
      case 'A':
      cout << "Ananas";
         break;
      
      case 'B':
      cout << "Ball";
         break;
    
      case 'C':
      cout << "Carpet";
         break;
    
      case 'D':
      cout << "Day";
         break;
    
      case 'E':
      cout << "Earth";
         break;
      
      case 'F':
      cout << "Field";
         break;
      
      case 'G':
      cout << "Garden";
         break;
      
      case 'H':
      cout << "House";
         break;
    
      case 'I':
      cout << "Idle";
         break;
    
      case 'J':
      cout << "Justice";
         break;
      
      case 'K':
      cout << "Kernel";
         break;
    
      case 'L':
      cout << "Light";
         break;
    
      case 'M':
      cout << "Monarchy";
         break;
      
      case 'N':
      cout << "Night";
         break;
      
      case 'O':
      cout << "Out";
         break;

      case 'P':
      cout << "Poison";
         break;

      case 'Q':
      cout << "Query";
         break;

      case 'R':
      cout << "Right";
         break;

      case 'S':
      cout << "Symbol";
         break;

      case 'T':
      cout << "Tape";
         break;

      case 'U':
      cout << "Union";
         break;

      case 'V':
      cout << "Validate";
         break;

      case 'W':
      cout << "Win";
         break;                        

      case 'X':
      cout << "X-Men";
         break;    
    
      case 'Y':
      cout << "Year";
         break;    
      
      case 'Z':
      cout << "Zappy";
         break;
      default:
      cout << "Invalid letter!";
    }
      cout << endl;
      return 0;
}