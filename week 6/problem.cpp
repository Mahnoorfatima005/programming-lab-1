#include <iostream>
#include <string>

using namespace std;

int main() {
    
    string correctUser = "admin";
    string correctPass = "1234";
    string enteredUsernames[3]; 
    string username, password;
    
   
    string studentNames[3];
    int studentAges[3];
    string courseNames[3];
    
    int studentCount = 0;
    int courseCount = 0;
    bool loggedIn = false;

    
    for (int i = 0; i < 3; i++) {
        cout << "--- Login (Attempt " << i + 1 << "/3) ---" << endl;
        cout << "Username: ";
        cin >> username;
        cout << "Password: ";
        cin >> password;

        enteredUsernames[i] = username; 

       
        if (username == correctUser && password == correctPass) {
            cout << "\nLogin Successful!\n" << endl;
            loggedIn = true;
            break; 
        } else {
            cout << "Invalid credentials." << endl;
        }
    }

    if (!loggedIn) {
        cout << "Too many failed attempts. Program terminating." << endl;
        return 0;
    }

   
    int choice;
    do {
        cout << "--- Main Menu ---" << endl;
        cout << "1. Add Student" << endl;
        cout << "2. View Students" << endl;
        cout << "3. Add Course" << endl;
        cout << "4. View Courses" << endl;
        cout << "5. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            
            if (studentCount < 3) {
                cout << "Enter student name: ";
                cin >> studentNames[studentCount];
                cout << "Enter student age: ";
                cin >> studentAges[studentCount];
                studentCount++;
            } else {
                cout << "Student storage full!" << endl;
            }
        } 
        else if (choice == 2) {
            
            
            cout << "\n--- Student List ---" << endl;
            for (int i = 0; i < studentCount; i++) {
                cout << i + 1 << ". Name: " << studentNames[i] << ", Age: " << studentAges[i] << endl;
            }
            cout << endl;
        } 
        else if (choice == 3) {
            
            
            if (courseCount < 3) {
                cout << "Enter course name: ";
                cin >> courseNames[courseCount];
                courseCount++;
            } else {
                cout << "Course storage full!" << endl;
            }
        } 
        else if (choice == 4) {
           
            cout << "\n--- Course List ---" << endl;
            for (int i = 0; i < courseCount; i++) {
                cout << i + 1 << ". " << courseNames[i] << endl;
            }
            cout << endl;
        }
       
    } while (choice != 5);

    cout << "Exiting program. Goodbye!" << endl;

    return 0;
}
