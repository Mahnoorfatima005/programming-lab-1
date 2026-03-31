#include <iostream>
#include <conio.h>//for getch()
using namespace std;
main()
{
    int TOTAL_STUDENTS = 1000; // total size
    int index = 7;

    // data structures
    string namesArray[TOTAL_STUDENTS] = {"ali", "ammar", "sara", "osman", "zainab", "hamza", "laiba"};
    int ageArray[TOTAL_STUDENTS] = {19, 20, 18, 19, 20, 21, 19};
    float matricArray[TOTAL_STUDENTS] = {1050, 890, 1010, 950, 1080, 820, 995};
    float interArray[TOTAL_STUDENTS] = {980, 850, 920, 880, 1015, 790, 940};
    float ecatArray[TOTAL_STUDENTS] = {350, 280, 310, 295, 380, 240, 320};
    string pref1Array[TOTAL_STUDENTS] = {"ce", "cs", "cs", "ee", "ce", "me", "cs"};
    string pref2Array[TOTAL_STUDENTS] = {"cs", "ce", "ce", "cs", "cs", "ee", "ai"};
    string pref3Array[TOTAL_STUDENTS] = {"ee", "ee", "ai", "me", "ee", "cs", "ee"};
    float aggriArray[TOTAL_STUDENTS];

    // CRUD create,read,update,delete
    //  using while loop
    while (true)
    {

        // main header of ums
        system("cls");
        cout << "|--------------------------------------------------|" << endl;
        cout << "|------UNIVERSITY ADMISSION MANAGEMENT SYSTEM------|" << endl;
        cout << "|--------------------------------------------------|" << endl;

        // user menu
        cout << "User Menu" << endl;
        cout << "1.Admin" << endl;
        cout << "2.Student" << endl;
        cout << "3.Exit" << endl;
        cout << "Choose Option: ";
        int userOption;
        cin >> userOption;

        cout << "You Choose " << userOption << endl;
        // using if/else conditions
        if (userOption == 1)
        {
            // write here admin code
            for (int i = 0; i < 3; i++) // for loop for 3 attempts
            {
                system("cls");
                cout << "Admin menu:  Login Attempts " << i + 1 << endl;
                cout << "Enter username: ";
                string username;
                cin >> username;
                cout << "Enter password: ";
                string password;
                cin >> password;
                // using if / else conditions
                if (username == "admin" && password == "1234")
                {
                    cout << "Logedin successfully";
                    while (true)
                    {
                        // if successful show menu
                        system("cls");
                        cout << "1.Show all students" << endl;
                        cout << "2.Search students" << endl;
                        cout << "3.update students record" << endl;
                        cout << "4. Generate merit list" << endl;
                        cout << "5. Delete" << endl;
                        cout << "6. logout" << endl;
                        string adminoption;
                        cout << "Enter choice: ";
                        cin >> adminoption;
                        if (adminoption == "1")
                        {
                            cout << "Name\tAge\tMatric\tFSC\tEcat\tp1\tp2\tp3" << endl;
                            for (int i = 0; i < index; i++)
                            {
                                if (namesArray[i] != "")
                                {
                                    cout << namesArray[i] << "\t" << ageArray[i] << "\t" << matricArray[i] << "\t" << interArray[i] << "\t"
                                         << ecatArray[i] << "\t" << pref1Array[i] << "\t" << pref2Array[i] << "\t" << pref3Array[i] << endl;
                                }
                            }
                        }
                        else if (adminoption == "2")
                        {
                            // search student by name function
                            cout << "Enter the name you want to search: ";
                            string name;
                            cin >> name;
                            bool found = false;
                            int foundindex = -1;
                            for (int i = 0; i < index; i = i + 1)
                            {
                                if (namesArray[i] == name)
                                {

                                    foundindex = i;
                                    found = true;
                                }
                            }
                            if (found == false)
                            {
                                cout << "Record not found against name " << name << endl;
                            }
                            else
                            {

                                cout << "Name\tAge\tMatric\tFSC\tEcat\tp1\tp2\tp3" << endl;

                                cout << namesArray[foundindex] << "\t" << ageArray[foundindex] << "\t" << matricArray[foundindex] << "\t" << interArray[foundindex] << "\t"
                                     << ecatArray[foundindex] << "\t" << pref1Array[foundindex] << "\t" << pref2Array[foundindex] << "\t" << pref3Array[foundindex] << endl;
                            }
                        }
                        else if (adminoption == "3")
                        {
                            // update student record
                            cout << "Enter the name you want to update record: ";
                            string name;
                            cin >> name;
                            bool found = false;
                            int foundindex = -1;
                            for (int i = 0; i < index; i = i + 1)
                            {
                                if (namesArray[i] == name)
                                {

                                    foundindex = i;
                                    found = true;
                                }
                            }
                            if (found == true)
                            {

                                cout << "-----OLD RECORD-----" << endl;
                                cout << "Name\tAge\tMatric\tFSC\tEcat\tp1\tp2\tp3" << endl;

                                cout << namesArray[foundindex] << "\t" << ageArray[foundindex] << "\t" << matricArray[foundindex] << "\t" << interArray[foundindex] << "\t"
                                     << ecatArray[foundindex] << "\t" << pref1Array[foundindex] << "\t" << pref2Array[foundindex] << "\t" << pref3Array[foundindex] << endl;

                                cout << "Enter new record for update" << endl;
                                cout << "Enter your name: ";
                                string name;
                                cin >> name;
                                cout << "Enter age: ";
                                int age;
                                cin >> age;
                                cout << "Enter matric marks: ";
                                float matric;
                                cin >> matric;
                                cout << "Enter fsc marks: ";
                                float fsc;
                                cin >> fsc;
                                cout << "Enter ecat marks: ";
                                float ecat;
                                cin >> ecat;
                                cout << "Enter CS,CE,EE as your preferences" << endl;
                                cout << "Enter pref1: ";
                                string pref1;
                                cin >> pref1;
                                cout << "Enter pref2: ";
                                string pref2;
                                cin >> pref2;
                                cout << "Enter pref3: ";
                                string pref3;
                                cin >> pref3;

                                namesArray[foundindex] = name;
                                ageArray[foundindex] = age;
                                matricArray[foundindex] = matric;
                                interArray[foundindex] = fsc;
                                ecatArray[foundindex] = ecat;
                                pref1Array[foundindex] = pref1;
                                pref2Array[foundindex] = pref2;
                                pref3Array[foundindex] = pref3;
                            }
                            else
                            {
                                cout << "Record not found " << endl;
                            }
                        }
                        else if (adminoption ==" 4")
                        {
                            // generate merit list
                            for (int i = 0; i < index; i = i + 1)
                            {
                                float aggri = matricArray[i] / 1050.0 * 100.0 * 0.30 + interArray[i] / 1100.0 * 100 * 0.4 + ecatArray[i] / 400.0 * 100 * 0.3;
                                aggriArray[i] = aggri;
                            }
                            // 77,90,29,33
                            // sorting data on the basis of aggregate
                            for (int i = 0; i < index; i++)
                            {
                                for (int j = i; j < index; j++)
                                {
                                    if (aggriArray[i] < aggriArray[j])
                                    {

                                        // swap of name
                                        string tempName = namesArray[i];
                                        namesArray[i] = namesArray[j];
                                        namesArray[j] = tempName;
                                        //swaping matric
                                        float tempMatric = matricArray[i];
                                        matricArray[i] = matricArray[j];
                                        matricArray[j] = tempMatric;
                                        // swaping inter
                                        float tempInter = interArray[i];
                                        interArray[i] = interArray[j];
                                        interArray[j] = tempInter;
                                        //swaping ecat
                                        float tempEcat = ecatArray[i];
                                        ecatArray[i] = ecatArray[j];
                                        ecatArray[j] = tempEcat;
                                        // swaping pref1
                                        string tempP1 = pref1Array[i];
                                        pref1Array[i] = pref1Array[j];
                                        pref1Array[j] = tempP1;
                                        // swaping pref2
                                        string tempP2 = pref2Array[i];
                                        pref2Array[i] = pref2Array[j];
                                        pref2Array[j] = tempP2;
                                        // swaping pref3
                                        string tempP3 = pref3Array[i];
                                        pref3Array[i] = pref3Array[j];
                                        pref3Array[j] = tempP3;
                                        // swaping aggregate
                                        float tempAgg = aggriArray[i];
                                        aggriArray[i] = aggriArray[j];
                                        aggriArray[j] = tempAgg;
                                    }
                                }
                            }

                            // code to display all data with aggregate
                            cout << "Name\tAge\tAggrigate" << endl;
                            for (int i = 0; i < index; i++)
                            {
                                if (namesArray[i] != "")
                                {
                                    cout << namesArray[i] << "\t" << ageArray[i] << "\t" << aggriArray[i] << endl;
                                }
                            }
                            //admit students into disciplines
                        }
                        else if (adminoption == "5")
                        {
                            // delete student record
                            cout << "Enter the name you want to delete record of: ";
                            string name;
                            cin >> name;
                            bool found = false;
                            int foundindex = -1;
                            for (int i = 0; i < index; i = i + 1)
                            {
                                if (namesArray[i] == name)
                                {

                                    foundindex = i;
                                    found = true;
                                }
                            }
                            if (found == true)
                            {
                                namesArray[foundindex] = "";
                                ageArray[foundindex] = 0;
                                matricArray[foundindex] = 0;
                                interArray[foundindex] = 0;
                                ecatArray[foundindex] = 0;
                                pref1Array[foundindex] = "";
                                pref2Array[foundindex] = "";
                                pref3Array[foundindex] = "";
                            }
                            else
                            {
                                cout << "Record not found" << endl;
                            }
                        }
                        else if (adminoption == "6")
                        {
                            break;
                        }
                        else
                        {
                            cout << "Wrong option selected " << endl;
                        }

                        cout << "PRESS ANY KEY TO CONTINUE..." << endl;
                        getch();
                    }
                    cout << "PRESS ANY KEY TO CONTINUE...";
                    getch();
                    break;
                }
                else
                {
                    cout << "Username or password is invalid" << endl;
                }
                cout << "PRESS ANY KEY TO CONTINUE..." << endl;
                getch();
            }
        }

        else if (userOption == 2)
        {
            // write here student code
            system("cls");
            cout << "Welcome to UMS student menu" << endl;
            cout << "Enter your name: ";
            string name;
            cin >> name;
            cout << "Enter age: ";
            int age;
            cin >> age;
            cout << "Enter matric marks: ";
            float matric;
            cin >> matric;
            cout << "Enter fsc marks: ";
            float fsc;
            cin >> fsc;
            cout << "Enter ecat marks: ";
            float ecat;
            cin >> ecat;
            cout << "Enter CS,CE,EE as your preferences" << endl;
            cout << "Enter pref1: ";
            string pref1;
            cin >> pref1;
            cout << "Enter pref2: ";
            string pref2;
            cin >> pref2;
            cout << "Enter pref3: ";
            string pref3;
            cin >> pref3;

            namesArray[index] = name;
            ageArray[index] = age;
            matricArray[index] = matric;
            interArray[index] = fsc;
            ecatArray[index] = ecat;
            pref1Array[index] = pref1;
            pref2Array[index] = pref2;
            pref3Array[index] = pref3;
            index = index + 1;

            cout << "Your data has been saved " << endl;
            cout << "PRESS ANY KEY TO CONTINUE..." << endl;

            getch();
        }
        else if (userOption == 3)
        {
            break;
            // break while loop

        }
        else
        {
            cout << "you entered wrong option" << endl;
        }
    } // end of main while loop
    cout << endl
         << "Thanks for using this software";
}
