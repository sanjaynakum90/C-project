#include<iostream>

using namespace std;

int main(){

    int marks;
    cout << "enter your marks :";
    cin >> marks;
    char grade;
    if ( marks >=90){
        cout << "your garde is A"<< endl;
        grade = 'A';
    }
    else if (marks >=80 && marks <90){
        cout << "your grade is B" << endl;
        grade = 'B';
    }
    else if (marks >=70 && marks <80){
        cout << "your grade is C" << endl;
        grade = 'C';
    }
    else if (marks >=60 && marks <70){
        cout << "your grade is D" << endl;
        grade = 'D';
    }
    else if (marks >=50 && marks <60){
        cout << "your garde is E" << endl;
        grade = 'E'; 
    }
    else{
        cout << "your garde is F" << endl;
        grade = 'F';
    }

    switch( grade)
    {
    case 'A':
        cout << "exelent work....!" << endl;
        break;
    case 'B':
        cout << " Well Done ....!"<< endl; 
        break;
     case 'C':
        cout << "Good Job ...........!" << endl;
        break;
    case 'D':
        cout << "You Passed, but you could do better ....!" << endl;
        break;
     case 'E':
        cout << "You need to hard work...When ever you faild this!" << endl;
        break;    
    default:
        cout << "Sorry you failed!" << endl;
        break;
    }

    return 0;
}