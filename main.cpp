#include<iostream>
#include<fstream>
#include<filesystem>
#include<vector>
struct Student
{
    int id;
    std::string name;
    int age;
    std::string course;
    std::vector<float> marks;
};

void addStudent()
{
    
    Student s;
    std::cout<<"Enter ID: ";
    std::cin>>s.id;
    std::cin.ignore();
    std::cout<<"Enter name: ";
    std::getline(std::cin,s.name);
    std::cout<<"Enter age: ";
    std::cin>>s.age;
    std::cin.ignore();
    std::cout<<"Enter course: ";
    std::getline(std::cin,s.course);

    std::cout << "\nStudent Entered:\n";
    std::cout<<"ID: "<<s.id<<std::endl;
    std::cout<<"name: "<<s.name<<std::endl;
    std::cout<<"age: "<<s.age<<std::endl;
    std::cout<<"course: "<<s.course<<std::endl;
}
void updateStudent()
{
    std::cout<<"Update Selected"<<std::endl;
}
void searchStudent()
{
    std::cout<<"search Selected"<<std::endl;
}
void display()
{
    std::cout<<"display Selected"<<std::endl;
}
void deleteStudent()
{
    std::cout<<"delete Selected"<<std::endl;
}
void menu()
{
    std::cout<<"menu Selected"<<std::endl;
}

int main()
{
    int choice;
    
    while(true)
    {
        std::cout<<"----MENU----"<<std::endl;
        std::cin>>choice;
        switch(choice)
        {
            case 1:
            addStudent();
            break;
            case 2:
            updateStudent();
            break;
            case 3:
            searchStudent();
            break;
            case 4:
            display();
            break;
            case 5:
            deleteStudent();
            break;
            case 6:
            return 0;
            default:
            std::cout<<"Invalid Output"<<std::endl;
            break;
        }
    }
}