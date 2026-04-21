#include <iostream>
#include <conio.h> // for getch()
#include <string>
using namespace std;
main()
{

    int TOTAL_FREELANCERS = 100; // Maximum number of freelancers
    int index = 7;

    // data structure to store freelancer information

    string namesArray[TOTAL_FREELANCERS] = {"Ali", "Ahmed", "Sara", "Zainab", "Hassan", "Ayesha", "Bilal"};
    int agesArray[TOTAL_FREELANCERS] = {25, 30, 22, 28, 35, 27, 24};
    float ratingArray[TOTAL_FREELANCERS] = {4.5, 4.0, 4.8, 4.2, 3.9, 4.7, 4.3};
    int experienceArray[TOTAL_FREELANCERS] = {3, 5, 2, 4, 6, 3, 2};
    int projectArray[TOTAL_FREELANCERS] = {10, 20, 5, 15, 25, 12, 8};
    string pref1Array[TOTAL_FREELANCERS] = {"Web Development", "Graphic Design", "Content Writing", "Digital Marketing", "Data Analysis", "Mobile App Development", "SEO"};
    string pref2Array[TOTAL_FREELANCERS] = {"Graphic Design", "Web Development", "Digital Marketing", "Content Writing", "Mobile App Development", "Data Analysis", "SEO"};
    string pref3Array[TOTAL_FREELANCERS] = {"Content Writing", "Digital Marketing", "Web Development", "Graphic Design", "SEO", "Mobile App Development", "Data Analysis"};
    float aggriArray[TOTAL_FREELANCERS];

    // CRUD CREATE, READ, UPDATE, DELETE

    // USING WHILE LOOP

    while (true)
    {
        // ================= HEADER ==============

        system("cls"); // Clear the console screen
        cout << "\n|=============================================|\n";
        cout << "     FREELANCER JOB MANAGEMENT SYSTEM\n";
        cout << "\n|=============================================|\n";
        cout << "         DEVELOPED BY:MAHNOOR FATIMA\n";
        cout << "\n|=============================================|\n";

        // ================= USER MENU =================

        //================header for user menu =================

        cout << "\n[~~~~~~~~~USER MENU~~~~~~~~~~~]\n";
        cout << " 1. ADMIN " << endl;
        cout << " 2. FREELANCER " << endl;
        cout << " 3. EXIT " << endl;
        cout << " Enter Your Choice: ";

        int userOption;
        cin >> userOption;

        cout << " YOU CHOOSE: " << userOption << endl;

        // using if/else conditions

        if (userOption == 1)
        {
            // write here admin code

            for (int i = 0; i < 3; i++) // for loop for 3 attempts
            {
                system("cls"); // Clear the console screen

                //============ header for user input data menu =================

                cout << "\n[~~~~~~~~~~~~~USER INPUT DATA~~~~~~~~~~~~~~~]\n";

                cout << " You have 3 attempts to login " << endl;

                cout << "admin menu : login attempts " << i + 1 << endl;
                cout << " username : ";
                string username;
                cin >> username;
                cout << " password : ";
                string password;
                cin >> password;

                // using if / else conditions

                if (username == "admin" && password == "1234")
                {
                    cout << " login successful " << endl;
                    while (true)
                    {
                        // if successfull show menu

                        system("cls"); // Clear the console screen

                        // ================= header for admin menu =================
                        cout << "\n|=============================================|\n";
                        cout << "\n|~~~~~~~~~~~~~~~(WELCOME)~~~~~~~~~~~~~~~~~~~~~|\n";
                        cout << "\n|~~~~~~~~~~~~~(ADMIN MENU)~~~~~~~~~~~~~~~~~~~~|\n";
                        cout << "\n|=============================================|\n";

                        cout << "1. show all freelancers " << endl;
                        cout << "2. search freelancer by name " << endl;
                        cout << "3. skill based search " << endl;
                        cout << "4. update freelancer record " << endl;
                        cout << "5. generate merit based report " << endl;
                        cout << "6. admit freelancers to jobs based on their preferences and aggregate scores " << endl;
                        cout << "7. view top rated freelancers " << endl;
                        cout << "8. freelancer salary estimation " << endl;
                        cout << "9. delete freelancer record " << endl;
                        cout << "10. logout " << endl;

                        string adminOption;
                        cout << " Enter Your Choice: ";
                        cin >> adminOption;

                        if (adminOption == "1")
                        {
                            cout << "ID\tName\tAge\tRating\tExperience\tProjects\tPref1\tPref2\tPref3\n";

                            for (int i = 0; i < index; i++)
                            {
                                if (namesArray[i] != "") // Check if the record is not deleted
                                {
                                    cout << i << "\t" << namesArray[i] << "\t" << agesArray[i] << "\t" << ratingArray[i] << "\t" << experienceArray[i] << "\t\t" << projectArray[i] << "\t" << pref1Array[i] << "\t" << pref2Array[i] << "\t" << pref3Array[i] << endl;
                                }
                            }
                        }

                        else if (adminOption == "2")
                        {
                            // search freelancer by name code

                            cout << "Enter Freelancer Name to Search: ";
                            string name;
                            cin >> name;
                            bool found = false;
                            int foundindex = -1;

                            for (int i = 0; i < index; i++)
                            {
                                if (namesArray[i] == name)
                                {
                                    foundindex = i;
                                    found = true;
                                }
                            }
                            if (found == false)
                            {
                                cout << "Freelancer Not Found!" << name << endl;
                            }
                            else
                            {
                                cout << "ID\tName\tAge\tRating\tExperience\tProjects\tPref1\tPref2\tPref3\n";
                                cout << foundindex << "\t" << namesArray[foundindex] << "\t" << agesArray[foundindex] << "\t" << ratingArray[foundindex] << "\t" << experienceArray[foundindex] << "\t\t" << projectArray[foundindex] << "\t" << pref1Array[foundindex] << "\t" << pref2Array[foundindex] << "\t" << pref3Array[foundindex] << endl;
                            }
                        }
                        else if (adminOption == "3")
                        {
                            system("cls");
                            // skill based search code
                            // Logic: Search freelancers based on a specific skill and display their details in a tabular format

                            cout << "\n|=============================================|\n";
                            cout << "           SKILL-BASED SEARCH CENTER           \n";
                            cout << "|=============================================|\n";

                            cout << "Available Skills: Web Development, Graphic Design, Content Writing, \nDigital Marketing, Data Analysis, Mobile App Development, SEO" << endl;
                            cout << "\nEnter Skill to Search: ";

                            string searchSkill;
                            cin.ignore(); // This clears the buffer so getline works correctly
                            getline(cin, searchSkill);

                            // Display search results in a tabular format
                            cout << "\n--- Results for [" << searchSkill << "] ---\n";
                            cout << "ID\tName\t\tRating\tExperience\tProjects\n";
                            cout << "----------------------------------------------------------\n";

                            bool found = false;
                            for (int i = 0; i < index; i++)
                            {
                                // Check if freelancer is not deleted AND matches any of their 3 preferences
                                if (namesArray[i] != "" && (pref1Array[i] == searchSkill || pref2Array[i] == searchSkill || pref3Array[i] == searchSkill))
                                {
                                    cout << i << "\t" << namesArray[i] << "\t\t" << ratingArray[i] << "\t" << experienceArray[i] << "\t\t" << projectArray[i] << endl;
                                    found = true;
                                }
                            }

                            if (!found)

                            {
                                cout << "\nNo freelancers found with the skill: " << searchSkill << endl;
                            }

                            cout << "\nPress any key to return to Admin Menu...";
                            getch();
                        }
                        else if (adminOption == "4")
                        {
                            // update freelancer record code

                            cout << "Enter Freelancer ID to Update: ";
                            string name;
                            cin >> name;
                            bool found = false;
                            int foundindex = -1;
                            for (int i = 0; i < index; i++)
                            {
                                if (namesArray[i] == name)
                                {
                                    foundindex = i;
                                    found = true;
                                }
                            }
                            if (found == true)
                            {
                                cout << "\n|--------------------------------------------------|\n";
                                cout << "\n|================== [OLD RECORD] ==================|\n";
                                cout << "\n|--------------------------------------------------|\n";

                                cout << "ID\tName\tAge\tRating\tExperience\tProjects\tPref1\tPref2\tPref3\n";
                                cout << foundindex << "\t" << namesArray[foundindex] << "\t" << agesArray[foundindex] << "\t" << ratingArray[foundindex] << "\t" << experienceArray[foundindex] << "\t\t" << projectArray[foundindex] << "\t" << pref1Array[foundindex] << "\t" << pref2Array[foundindex] << "\t" << pref3Array[foundindex] << endl;
                                cout << " enter record for update " << endl;

                                // taking new record input from user
                                cout << " enter name : ";
                                string name;
                                cin >> name;
                                cout << " enter age : ";
                                int age;
                                cin >> age;
                                cout << " enter rating : ";
                                float rating;
                                cin >> rating;
                                cout << " enter experience : ";
                                int experience;
                                cin >> experience;
                                cout << " enter projects : ";
                                int projects;
                                cin >> projects;
                                cin.ignore(); // Clear the input buffer before using getline
                                cout << " enter pref1 : ";
                                string pref1;
                                getline(cin, pref1);
                                cout << " enter pref2 : ";
                                string pref2;
                                getline(cin, pref2);
                                cout << " enter pref3 : ";
                                string pref3;
                                getline(cin, pref3);

                                // Update the freelancer's record

                                namesArray[foundindex] = name;
                                agesArray[foundindex] = age;
                                ratingArray[foundindex] = rating;
                                experienceArray[foundindex] = experience;
                                projectArray[foundindex] = projects;
                                pref1Array[foundindex] = pref1;
                                pref2Array[foundindex] = pref2;
                                pref3Array[foundindex] = pref3;

                                cout << "Freelancer record updated successfully!" << endl;
                                getch();
                            }
                            else
                            {
                                cout << "Freelancer Not Found!" << name << endl;
                            }
                        }
                        else if (adminOption == "5")
                        {
                            // generate merit based report code

                            for (int i = 0; i < index; i++)
                            {
                                float aggri = (ratingArray[i] * 0.4) + (experienceArray[i] * 0.3) + (projectArray[i] * 0.3);
                                aggriArray[i] = aggri;
                            }
                            // Sort freelancers based on aggregate score

                            for (int i = 0; i < index; i++)
                            {
                                for (int j = 1; j < index; j++)
                                {
                                    if (aggriArray[i] > aggriArray[j])
                                    {

                                        // swap names

                                        string tempName = namesArray[i];
                                        namesArray[i] = namesArray[j];
                                        namesArray[j] = tempName;

                                        // swap float
                                        float tempRating = ratingArray[i];
                                        ratingArray[i] = ratingArray[j];
                                        ratingArray[j] = tempRating;

                                        // swap experience
                                        int tempExperience = experienceArray[i];
                                        experienceArray[i] = experienceArray[j];
                                        experienceArray[j] = tempExperience;

                                        // swap projects
                                        int tempProjects = projectArray[i];
                                        projectArray[i] = projectArray[j];
                                        projectArray[j] = tempProjects;

                                        // swap preferences
                                        string tempPref1 = pref1Array[i];
                                        pref1Array[i] = pref1Array[j];
                                        pref1Array[j] = tempPref1;

                                        string tempPref2 = pref2Array[i];
                                        pref2Array[i] = pref2Array[j];
                                        pref2Array[j] = tempPref2;

                                        string tempPref3 = pref3Array[i];
                                        pref3Array[i] = pref3Array[j];
                                        pref3Array[j] = tempPref3;

                                        // swap aggregate score
                                        float tempAggri = aggriArray[i];
                                        aggriArray[i] = aggriArray[j];
                                        aggriArray[j] = tempAggri;
                                    }
                                }
                            }
                            // Display the merit-based report
                            // displaying in tabular format

                            cout << "ID\tName\tAge\tRating\tExperience\tProjects\tPref1\tPref2\tPref3\tAggregate Score\n";

                            for (int i = 0; i < index; i++)
                            {
                                if (namesArray[i] != "") // Check if the record is not deleted
                                {
                                    cout << i << "\t" << namesArray[i] << "\t" << agesArray[i] << "\t" << ratingArray[i] << "   \t     " << experienceArray[i] << "    \t     " << projectArray[i] << "      \t" << pref1Array[i] << " \t  " << pref2Array[i]
                                         << "  \t" << pref3Array[i] << " \t " << aggriArray[i] << endl;
                                }
                            }
                            cout << "press any key to continue... " << endl;
                            getch();
                        }
                        else if (adminOption == "6")
                        {

                            // admit freelancers to jobs based on their preferences and aggregate scores
                            // dispaying one by one who is assigned to which job based on their preferences and aggregate scores

                            cout << " top 5 freelancers admitted to jobs based on their preferences and aggregate scores: " << endl;
                            int assigned = 0;
                            for (int i = 0; i < index && assigned <= 5; i++)
                            {
                                if (namesArray[i] != "" && experienceArray[i] >= 3 && ratingArray[i] >= 4.0)
                                {
                                    cout << "SEAT" << assigned + 1 << " : " << namesArray[i] << " assigned to job: " << pref1Array[i] << endl;
                                    assigned++;
                                }
                            }
                            cout << "press any key to continue... " << endl;
                            getch();
                            {
                                continue; // Skip deleted records
                            }
                            {
                                if (namesArray[i] != "")
                                {
                                    cout << "Freelancer: " << namesArray[i] << " assigned to job: " << pref1Array[i] << endl;
                                    assigned++;
                                }
                            }
                        }
                        else if (adminOption == "7")
                        {
                            system("cls");

                            // view top rated freelancers code
                            // Logic: Display freelancers with rating 4.5 and above in a tabular format
                            cout << "\n[~~~~~~~~~~~~~ TOP RATED FREELANCERS (4.5+) ~~~~~~~~~~~~~]\n";
                            cout << "Name\t\tRating\t\tBASIC Skill\n";
                            cout << "----------------------------------------------------------\n";
                            bool found = false;
                            for (int i = 0; i < index; i++)
                            {
                                if (namesArray[i] != "" && ratingArray[i] >= 4.5)

                                {
                                    cout << namesArray[i] << "\t\t" << ratingArray[i] << "\t\t" << pref1Array[i] << endl;
                                    found = true;
                                }
                            }

                            if (!found)

                                cout << "No top-rated freelancers yet." << endl;
                            getch();
                        }
                        else if (adminOption == "8")
                        {
                            system("cls");
                            // freelancer salary estimation code
                            // Logic: Estimate salary based on experience and projects completed

                            cout << "\n|===================================================|\n";
                            cout << "|          FREELANCER SALARY ESTIMATION             |\n";
                            cout << "|===================================================|\n";
                            cout << "ID\tName\t\tProjects\tEstimated Salary\n";
                            cout << "-----------------------------------------------------\n";

                            for (int i = 0; i < index; i++)
                            {
                                if (namesArray[i] != "")
                                // Only show active freelancers
                                {
                                    // Simple logic: $100 per project + $50 per year of experience
                                    int estimatedSalary = (projectArray[i] * 100) + (experienceArray[i] * 50);

                                    cout << i << "\t" << namesArray[i] << "\t\t" << projectArray[i] << "\t\t$" << estimatedSalary << endl;
                                }
                            }
                            cout << "Press any key to continue... " << endl;
                            getch();
                        }

                        else if (adminOption == "9")
                        {
                            // delete code

                            cout << "Enter Freelancer ID to Delete: ";
                            string name;
                            cin >> name;

                            bool found = false;
                            int foundindex = -1;

                            // using linear search to find the freelancer by name and mark the record as deleted by setting name to empty string and other fields to default values

                            for (int i = 0; i < index; i++)
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
                                agesArray[foundindex] = 0;
                                ratingArray[foundindex] = 0;
                                experienceArray[foundindex] = 0;
                                projectArray[foundindex] = 0;
                                pref1Array[foundindex] = "";
                                pref2Array[foundindex] = "";
                                pref3Array[foundindex] = "";
                                aggriArray[foundindex] = 0;

                                cout << "Freelancer deleted successfully!" << endl;
                                // record is not actually removed from the array but marked as deleted by setting name to empty string and other fields to default values
                            }

                            else
                            {
                                cout << "Freelancer not found!" << endl;
                            }
                        }
                        else if (adminOption == "10")

                        {
                            break; // logout and return to main menu
                        }

                        else

                        {
                            cout << "Invalid Option! Please Try Again." << endl;
                        }

                        cout << "Press any key to continue...";
                        getch(); // Wait for user input before clearing the screen
                    }

                    cout << " press any key to continue... " << endl;
                    getch(); // Wait for user input before exiting the program
                    break;
                }

                else
                {

                    cout << "username or password is invalid" << endl;
                }

                cout << "press any key to continue : " << endl;
                getch();
            }
        }

        else if (userOption == 2)
        {
            while (true)
            {
                system("cls");
                // header for freelancer menu
                cout << "\n|=============================================|\n";
                cout << "\n|            FREELANCER DASHBOARD             |\n";
                cout << "\n|=============================================|\n";

                // freelancer menu options
                cout << " 1. Register New Profile" << endl;
                cout << " 2. Log Work Hours" << endl;
                cout << " 3. View My Profile" << endl;
                cout << " 4. Calculate total Earnings" << endl;
                cout << " 5. Check Job Eligibility" << endl;
                cout << " 6. Market Demand Checker" << endl;
                cout << " 7. Back to Main Menu" << endl;
                cout << " Enter Your Choice: ";

                int freeOption;
                cin >> freeOption;

                if (freeOption == 1)
                {
                    // Existing Registration Logic

                    cout << " Enter name: ";
                    cin >> namesArray[index];
                    cout << " Enter age: ";
                    cin >> agesArray[index];
                    cout << " Enter rating (1-5): ";
                    cin >> ratingArray[index];
                    cout << " Enter experience (years): ";
                    cin >> experienceArray[index];
                    cout << " Enter number of projects: ";
                    cin >> projectArray[index];

                    cin.ignore();
                    cout << " Enter Pref 1 (e.g., Web Dev): ";
                    getline(cin, pref1Array[index]);
                    cout << " Enter Pref 2: ";
                    getline(cin, pref2Array[index]);

                    index++;
                    cout << "\nRegistration Successful! Press any key...";
                    getch();
                }
                else if (freeOption == 2)
                {
                    system("cls");
                    // determine how many work hours they have logged in total and display their profile details along with total work hours
                    cout << "\n|=============================================|\n";
                    cout << "             DAILY WORK HOUR LOG               \n";
                    cout << "|=============================================|\n";

                    // index-1 refers to the freelancer who just registered/is active
                    cout << " Current Freelancer: " << namesArray[index - 1] << endl;
                    cout << "\n How many hours did you work on your project today? ";

                    int currentSession;
                    cin >> currentSession;
                    int hoursArray[TOTAL_FREELANCERS] = {0}; // Initialize hours array to store total hours for each freelancer

                    // Basic validation to ensure the entry makes sense
                    if (currentSession > 0 && currentSession <= 24)
                    {
                        hoursArray[index - 1] += currentSession; // Add current session hours to the freelancer's total hours in the hours array

                        // Display the current session hours and total hours in a formatted manner

                        cout << "\n---------------------------------------------\n";
                        cout << " [LOGGED]: " << currentSession << " hours added to your record." << endl;
                        cout << " [TOTAL]: Your cumulative work hours: " << hoursArray[index - 1] << endl;
                        cout << "---------------------------------------------\n";
                    }
                    else
                    {

                        cout << "\n [!] Invalid input. Please enter hours between 1 and 24." << endl;
                    }

                    cout << "\nPress any key to enter...";
                    getch();
                }

                else if (freeOption == 3)

                {
                    cout << "Enter your name to view profile: ";
                    string searchName;
                    cin >> searchName;
                    bool found = false;

                    // Logic: Search for the freelancer by name and display their profile details
                    for (int i = 0; i < index; i++)
                    {

                        // Check if the name matches and display profile details

                        if (namesArray[i] == searchName)
                        {
                            cout << "\n--- Profile Details ---" << endl;
                            cout << "Name: " << namesArray[i] << " | Age: " << agesArray[i] << endl;
                            cout << "Rating: " << ratingArray[i] << " | Projects: " << projectArray[i] << endl;
                            cout << "Primary Skill: " << pref1Array[i] << endl;
                            found = true;
                            break;
                        }
                    }

                    if (!found)
                        cout << "Profile not found!";
                    getch();
                }
                else if (freeOption == 4)

                {
                    // Logic: Estimate pay based on experience and rating

                    cout << "Enter your name for pay estimation: ";
                    string sName;
                    cin >> sName;
                    for (int i = 0; i < index; i++)
                    {
                        if (namesArray[i] == sName)
                        {
                            float estimatedPay = (experienceArray[i] * 500) + (ratingArray[i] * 200);
                            cout << "Based on your profile, your estimated project salary is: $" << estimatedPay << endl;
                        }
                    }
                    
                    cout << "Press any key to continue...";
                    getch();
                }

                else if (freeOption == 5)
                {
                    // Logic: Check if they meet basic "Pro" criteria

                    cout << "Enter name to check eligibility: ";
                    string eName;
                    cin >> eName;

                    for (int i = 0; i < index; i++)
                    {

                        if (namesArray[i] == eName)
                        {
                            if (experienceArray[i] >= 2 && ratingArray[i] >= 4.0)
                                cout << "Status: ELIGIBLE for Premium Jobs!" << endl;
                            else
                                cout << "Status: Keep gaining experience to unlock Premium Jobs." << endl;
                        }
                    }
                    getch();
                }
                else if (freeOption == 6) // Use the next number in your freelancer menu
                {
                    system("cls");
                    // Logic: Provide a simple market demand checker based on their primary skill
                    // This is a fun feature that gives freelancers insight into how in-demand their primary skill is in the current market

                    cout << "\n|=============================================|\n";
                    cout << "           MARKET DEMAND CHECKER              \n";
                    cout << "|=============================================|\n";

                    // index-1 is the person who just registered

                    string mySkill = pref1Array[index - 1];

                    cout << " Your Primary Skill: " << mySkill << endl;
                    cout << " Checking market status...\n"
                         << endl;

                    // Simple logic: If they chose Web, Mobile, or SEO, it's High Demand

                    if (mySkill == "Web Development" || mySkill == "Mobile App Development" || mySkill == "SEO")
                    {

                        cout << " [RESULT]: HIGH DEMAND" << endl;
                        
                        cout << " Status: You are likely to find a project within 24 hours!" << endl;
                  
                    }
                    else

                    {
                        cout << " [RESULT]: STABLE DEMAND" << endl;
                        cout << " Status: Consistent work available. Keep your profile updated." << endl;
                    }
                    //
                    cout << "\n|=============================================|\n";
                    cout << "Press any key to return...";
                    getch();
                }
                else if (freeOption == 7)

                {
                    break; // Return to Main Menu
                }
                else
                {
                    cout << "Invalid Option! Please Try Again." << endl;
                    getch();
                }
            }
        }
    }
}