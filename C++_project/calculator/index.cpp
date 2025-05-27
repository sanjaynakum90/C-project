#include<iostream>

using namespace std;



void sum(){
    int first, second;
    cout << "First num: ";
    cin >> first;
    cout << "Second Num: ";
    cin >> second;
    cout << "Addtion of " << first << " and " << second << " is " << first+second << endl;
}

void sub(){
    int first, second;
    cout << "First num: ";
    cin >> first;
    cout << "Second Num: ";
    cin >> second;
    cout << "Substraction of " << first << " and " << second << " is " << first-second << endl;
}

void mult(){
    int first, second;
    cout << "First num: ";
    cin >> first;
    cout << "Second Num: ";
    cin >> second;
    cout << "Division of " << first << " and " << second << " is " << first * second << endl;
}

void div(){
    int first, second;
    cout << "First num: ";
    cin >> first;
    cout << "Second Num: ";
    cin >> second;
    cout << "substraction of " << first << " and " << second << " is " << first / second << endl;
}

void modu(){
    int first, second;
    cout << "First num: ";
    cin >> first;
    cout << "Second Num: ";
    cin >> second;
    cout << "Modulus of " << first << " and " << second << " is " << first % second << endl;
}

int main(){

  int choice, first, second;;
  
  while (choice!=0)
  {
    cout << "MENU:-" << endl;
    cout << "press 1 for +" << endl;
    cout << "press 2 for -" << endl;
    cout << "press 3 for *" << endl;
    cout << "press 4 for /" << endl;
    cout << "press 5 for %" << endl;
    cout << "press 0 for Exit" << endl << endl;

    cout << "Enter Choice: ";
    cin >> choice;

    
    switch (choice)
    {
    case 1:
        sum();
        break;

    case 2:
        sub();
        break;

    case 3:
         mult();
        break;

    case 4:
        div();
        break;
    case 5:
        modu();
        break;
    case 0:
        cout << "Exiting program..." << endl;
        break;
    default:
        cout << "Invalid choice. Please try again." << endl;

    }

    cout << "....................................." << endl << endl;

  }
  


}