#include <iostream>
using namespace std;

int main() {
  
  double num1C, num2C, squareNum, cubeNum, numD;
  char op, userResponse, chooseResponse, chooseResponse2, chooseResponse3;
  
  cout << "====================================================================================\n";
  cout << "Welcome to the MULTI TASKING SUPER CALCULATOR, you can do many different calculation.\n";
  cout << "=====================================================================================\n";
  cout << "Do you want to continue? (type 'y' for yes and 'n' for no): ";
  cin >> userResponse;
  cout << "-----------------------------------------------------------\n";
  
  if (userResponse == 'n') {
    
    cout << "Ok bye, see you next time!\n";
    
    return 0;
    
  }
  else if (userResponse == 'y') {
    
    cout << "Ok, you can start by, choosing below, what do you want to do? (enter the option letter)\n";
    cout << "---------------------------------------------------------------------------------------\n";
    cout << "a) Find the square and the square root.            b) Find the cube and the cube root.\n";
    cout << "c) Simple calculator.                              d) Number dooubler.\n";
    cout << "---------------------------------------------------------------------------------------\n";
    cout << "What's your response? ";
    cin >> chooseResponse;
    cout << "=======================================================================================\n";
    
     if (chooseResponse == 'a') {
       
       cout << "Continue? (type 'y' for yes and 'n' for no): ";
       cin >> chooseResponse2;
       cout << "--------------------------------------------\n";
       
       if (chooseResponse2 == 'n') {
         
         cout << "Ok, bye!\n";
         
         return 0;
         
       }
       else if (chooseResponse2 == 'y') {
         
         cout << "To start, first, enter the number you want to find the square of: ";
         cin >> squareNum;
         cout << "-----------------------------------------------------------------\n";
         cout << "The square of " << squareNum << " is - " << squareNum * squareNum << "\n";
         cout << "------------------------------------------------------------------\n";
         
         cout << "Do you want to find the square root of " << squareNum * squareNum << " ? (type 'y' for yes and 'n' for no):";
         cin >> chooseResponse3;
         cout << "-----------------------------------------------------------------------------------------------------------\n";
         
         if (chooseResponse3 == 'y') {
           
           cout << "The square root of " << squareNum * squareNum << " is - " << (squareNum * squareNum) / squareNum << "\n";
           
           return 0;
           
         }
         else if (chooseResponse3 == 'n') {
           
           cout << "Ok, bye!\n";
           
           return 0;
           
         }
         
       }
       
     }
     else if (chooseResponse == 'b') {
       
       cout << "Continue? (type 'y' for yes and 'n' for no): ";
       cin >> chooseResponse2;
       cout << "--------------------------------------------\n";
       
       if (chooseResponse2 == 'n') {
         
         cout << "Ok, bye!\n";
         
         return 0;
         
       }
       else if (chooseResponse2 == 'y') {
         
         cout << "To start, first, enter the number you want to find the cube of: ";
         cin >> cubeNum;
         cout << "---------------------------------------------------------------\n";
         cout << "The cube of " << cubeNum << " is - " << cubeNum * cubeNum * cubeNum << "\n";
         cout << "--------------------------------------------------------------------\n";
         
         cout << "Do you want to find cube root of " << cubeNum * cubeNum * cubeNum << " ? (type 'y' for and 'n' for no): ";
         cin >> chooseResponse3;
         cout << "-------------------------------------------------------------------------------------------------------\n";
         
         if (chooseResponse3 == 'y') {
           
           cout << "The cube root of " << cubeNum * cubeNum * cubeNum << " is - " << (cubeNum * cubeNum * cubeNum) / cubeNum << "\n";
           
         }
         else if (chooseResponse3 == 'n') {
           
           cout << "Ok, bye!";
           
         }
         
         return 0;
         
       }
       
     }
     else if (chooseResponse == 'c') {
       
       cout << "Continue? (type 'y' for yes and 'n' for no): ";
       cin >> chooseResponse2;
       cout << "--------------------------------------------\n";
       
       if (chooseResponse2 == 'n') {
         
         cout << "Ok, bye!";
         
         return 0;
         
       }
       else if (chooseResponse2 == 'y'){
         
         cout << "To start, first, a number: ";
         cin >> num1C;
         cout << "--------------------------\n";
         cout << "Second, enter another number: ";
         cin >> num2C;
         cout << "-----------------------------\n";
         cout << "Lastly, enter the operator you want to use. (the allowed operators are +, -, *, /): ";
         cin >> op;
         cout << "-----------------------------------------------------------------------------------\n";
         
         if (op == '+') {
           
           cout << "The result of " << num1C << " + " << num2C << " is - " << num1C + num2C << "\n";
           
           return 0;
             
         }
         else if (op == '-') {
           
           cout << "The result of " << num1C << " - " << num2C << " is - " << num1C - num2C << "\n";
           
           return 0;
           
         }
         else if (op == '*') {
           
           cout << "The result of " << num1C << " * " << num2C << " is - " << num1C * num2C << "\n";
           
           return 0;
           
         }
         else if (op == '/') {
           
           cout << "The result of " << num1C << " / " << num2C << " is - " << num1C / num2C << "\n";
           
         }
         else {
           
           cout << "Error - (404). Operator " << op << " not indentified.\n";
         }
       }
       
     }
     else if (chooseResponse == 'd') {
       
       cout << "To start, first, enter the the number you want to find the double of: ";
       cin >> numD;
       cout << "---------------------------------------------------------------------\n";
       
       cout << "The double of " << numD << " is - " << numD * 2 << "\n";
       
     }
    
  }
  
}