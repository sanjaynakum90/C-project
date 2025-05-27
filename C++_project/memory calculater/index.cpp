
#include<iostream>
#include<string>
#include<vector>
using namespace std;

class Student{
    public:
        int id;
        string name;

    Student(int id, string name){
        this->id = id;
        this->name = name;
    }
};

class Studentlist{
    public:
        vector<Student>list;

        void addStudent(int id, string name){
            Student st(id, name);
            list.push_back(st);
        }

        void display(){
            for (Student s : list)
            {
                cout << " id: " << s.id << " name: " << s.name << endl;
            }
        }

        void searchStudent(int id){
            for (Student s : list)
            {
                if (s.id == id)
                {
                    cout << "id: " << id << " name: " << s.name << endl;
                }  
            }
        }

        void removeStudent(int id)
        {
           cout << "Enter ID to remove: ";
           cin >> id;
           for(int i = 0; i <  list.size(); i++)
           {
             if(list[i].id == id)
             {
              list.erase(list.begin() +1);
                  cout << "Student removed successfully." << endl;
                  return;
             }
           }
            
        }
};


int  main(){
    int choice, id;
    string name;

    Studentlist list;

    while (choice!=0)
    {
        cout << "Press 1 for add student to a list" << endl;
        cout << "Press 2 for search student by id" << endl;
        cout << "Press 3 for remove a student from the list by id" << endl;
        cout << "Press 4 for display the list of student" << endl;

        cout << "Choice: ";
        cin >> choice;

        switch (choice)
        {
        case 1:
            cout << "id: ";
            cin >> id;
            cout << "name: ";
            cin >> name;
            list.addStudent(id, name);
            break; 
           
        case 2:
            cout << "id: ";
            cin >> id;
            list.searchStudent(id);
            break;

        case 3:
            cout << "id: ";
            cin >> id;
            list.removeStudent(id);
            break;

        case 4:
            list.display();
            break; 
        
        default:
            break;
        }
    }
    

    return 0;
}
