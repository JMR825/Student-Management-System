#include<iostream>
#include<fstream>
#include<filesystem>
#include<vector>
#include <sstream>
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
    std::ofstream file;
    file.open("students.txt",std::ios::app);
    if(!file.is_open())
    {
        std::cout<<"File did not open"<<std::endl;
        return;
    }
    file << s.id << "|" << s.name << "|" << s.age << "|" << s.course << std::endl;
    file.close();
}
void updateStudent()
{
    std::cout<<"Update Selected"<<std::endl;
}
void searchStudent()
{
    std::cout<<"search Selected"<<std::endl;
    std::string str;
    std::cout<<"Enter id: ";
    std::cin>>str;
    std::ifstream file("students.txt");
    std::string line;
    if (!file.is_open())
{
    std::cout << "No records found" << std::endl;
    return;
}
while(std::getline(file,line))
{
    std::stringstream ss(line);
    std::string idStr,nameStr,ageStr,courseStr;
    std::getline(ss,idStr,'|');
    std::getline(ss,nameStr,'|');
    std::getline(ss,ageStr,'|');
    std::getline(ss,courseStr);
    if(str==idStr)
    {
    std::cout<<idStr<<std::endl;
    std::cout<<nameStr<<std::endl;
    std::cout<<ageStr<<std::endl;
    std::cout<<courseStr<<std::endl;
}

}
}
void display()
{
    std::cout<<"display Selected"<<std::endl;
    std::ifstream file("students.txt");
    std::string line;
    if (!file.is_open())
{
    std::cout << "No records found" << std::endl;
    return;
}
    while(std::getline(file,line))
    {
    std::stringstream ss(line);
    std::string idStr, nameStr, ageStr, courseStr;
    
    std::getline(ss, idStr, '|');
    std::getline(ss, nameStr, '|');
    std::getline(ss, ageStr, '|');
    std::getline(ss, courseStr);
    
    std::cout << "ID: " << idStr << std::endl;
    std::cout << "Name: " << nameStr << std::endl;
    std::cout << "Age: " << ageStr << std::endl;
    std::cout << "Course: " << courseStr << std::endl;
    std::cout << std::endl;
    }
    file.close();
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