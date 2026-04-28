#include <iostream>
using namespace std;
const int MAX = 100;
bool login();
void menu();
void addStudent(string names[], int ages[], int &count);
void viewStudents(string names[], int ages[], int count);
void addCourse(string courses[], int &courseCount);
void viewCourses(string courses[], int courseCount);
int main()
{
 if(!login())
 return 0;
 string studentNames[MAX];
 int studentAges[MAX];
 string courses[MAX];
 int studentCount = 0;
 int courseCount = 0;
 int choice;
 while(true)
 {
 menu();
 cin >> choice;

 switch(choice)
 {
 case 1:
 addStudent(studentNames, studentAges, studentCount);
 break;
 case 2:
 viewStudents(studentNames, studentAges, studentCount);
 break;
 case 3:
 addCourse(courses, courseCount);
 break;
 case 4:
 viewCourses(courses, courseCount);
 break;
 case 5:
 cout << "Program Exit" << endl;
 return 0;
 default:
 cout << "Invalid Choice!" << endl;
 }
 }
}
bool login()
{
 string username, password;

 for(int i = 1; i <= 3; i++)
 {
 cout << "Enter Username: ";
 cin >> username;

 cout << "Enter Password: ";
 cin >> password;

 if(username == "admin" && password == "1234")
 {
 cout << "Login Successful\n";
 return true;
 }
 else
 {
 cout << "Wrong Login (" << i << "/3)\n";
 }
 }

 cout << "Too many attempts. Program End.\n";
 return false;
}
void menu()
{
 cout << "\n===== University Management System =====\n";
 cout << "1. Add Student\n";
 cout << "2. View Students\n";
 cout << "3. Add Course\n";
 cout << "4. View Courses\n";
 cout << "5. Exit\n";
 cout << "Enter Choice: ";
}
void addStudent(string names[], int ages[], int &count)
{
 if(count >= MAX)
 {
 cout << "storage full!\n";
 return;
 }

 cout << "Enter student name: ";
 cin >> names[count];

 cout << "Enter student sge: ";
 cin >> ages[count];

 count++;
 cout << "Student added successfully!\n";
}
void viewStudents(string names[], int ages[], int count)
{
 if(count == 0)
 {
 cout << "No Student Record Found!\n";
 return;
 }
 cout << "\n--- Student list ---\n";

 for(int i = 0; i < count; i++)
 {
 cout << "Student " << i+1 << endl;
 cout << "Name: " << names[i] << endl;
 cout << "Age: " << ages[i] << endl;
 cout << "-------------------\n";
 }
}
void addCourse(string courses[], int &courseCount)
{
 if(courseCount >= MAX)
 {
 cout << "Course Storage Full!\n";
 return;
 }

 cout << "Enter Course Name: ";
 cin >> courses[courseCount];

 courseCount++;
 cout << "Course Added Successfully!\n";
}
void viewCourses(string courses[], int courseCount)
{
 if(courseCount == 0)
 {
 cout << "No Courses Available!\n";
 return;
 }
 cout << "\n=== Course List ===\n";
 for(int i = 0; i < courseCount; i++)
 {
 cout << i+1 << ". " << courses[i] << endl;
 }
}