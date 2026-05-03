#include<iostream>
#include<conio.h> // for getch()
#include<string>
using namespace std;

// ============================================================
//  CONSTANTS & GLOBAL DATA ARRAYS
// ============================================================

const int TOTAL_FREELANCERS = 100;

string namesArray[TOTAL_FREELANCERS] = {"Ali", "Ahmed", "Sara", "Zainab", "Hassan", "Ayesha", "Bilal"};
int agesArray[TOTAL_FREELANCERS] = {25, 30, 22, 28, 35, 27, 24};
float ratingArray[TOTAL_FREELANCERS] = {4.5f, 4.0f, 4.8f, 4.2f, 3.9f, 4.7f, 4.3f};
int experienceArray[TOTAL_FREELANCERS] = {3, 5, 2, 4, 6, 3, 2};
int projectArray[TOTAL_FREELANCERS] = {10, 20, 5, 15, 25, 12, 8};
string pref1Array[TOTAL_FREELANCERS] = {"Web Development", "Graphic Design", "Content Writing", "Digital Marketing", "Data Analysis", "Mobile App Development", "SEO"};
string pref2Array[TOTAL_FREELANCERS] = {"Graphic Design", "Web Development", "Digital Marketing", "Content Writing", "Mobile App Development", "Data Analysis", "SEO"};
string pref3Array[TOTAL_FREELANCERS] = {"Content Writing", "Digital Marketing", "Web Development", "Graphic Design", "SEO", "Mobile App Development", "Data Analysis"};
float aggriArray[TOTAL_FREELANCERS] = {0};
int index = 7;
// current number of freelancers

// ============================================================
//  UTILITY
// ============================================================

void showHeader()
{
    system("cls");
    cout << "\n|=============================================|\n";
    cout << "     FREELANCER JOB MANAGEMENT SYSTEM\n";
    cout << "\n|=============================================|\n";
    cout << "         DEVELOPED BY: MAHNOOR FATIMA\n";
    cout << "\n|=============================================|\n";
}

void printRow(int i)

{
    cout << i << "\t" << namesArray[i] << "\t" << agesArray[i] << "\t"
         << ratingArray[i] << "\t" << experienceArray[i] << "\t\t"
         << projectArray[i] << "\t" << pref1Array[i] << "\t"
         << pref2Array[i] << "\t" << pref3Array[i] << endl;
}

void printTableHeader()

{
    cout << "ID\tName\tAge\tRating\tExperience\tProjects\tPref1\tPref2\tPref3\n";
}

// ============================================================
//  ADMIN FUNCTIONS
// ============================================================


// 1. Show all freelancers

void showAllFreelancers()

{
    printTableHeader();
    for (int i = 0; i < index; i++)
    {
        if (namesArray[i] != "")
            printRow(i);
    }
}
// 2. Search freelancer by name

void searchByName()

{
    cout << "Enter Freelancer Name to Search: ";
    string name;
    cin >> name;

    int foundIndex = -1;
    for (int i = 0; i < index; i++)
    {
        if (namesArray[i] == name)
        {
            foundIndex = i;
            break;
        }
    }

    if (foundIndex == -1)
    {
        cout << "Freelancer Not Found: " << name << endl;
    }
    else
    {
        printTableHeader();
        printRow(foundIndex);
    }
}
// 3. Skill-based search

void skillBasedSearch()

{
    system("cls");

    cout << "\n|=============================================|\n";
    cout << "           SKILL-BASED SEARCH CENTER\n";
    cout << "\n|=============================================|\n";

    cout << "Available Skills: Web Development, Graphic Design, Content Writing,\n"
         << "Digital Marketing, Data Analysis, Mobile App Development, SEO\n";
    cout << "\nEnter Skill to Search: ";

    string searchSkill;

    cin.ignore();
    getline(cin, searchSkill);

    cout << "\n--- Results for [" << searchSkill << "] ---\n";
    cout << "ID\tName\t\tRating\tExperience\tProjects\n";
    cout << "----------------------------------------------------------\n";

    bool found = false;

    for (int i = 0; i < index; i++)

    {
        if (namesArray[i] != "" &&
            (pref1Array[i] == searchSkill || pref2Array[i] == searchSkill || pref3Array[i] == searchSkill))
        {
            cout << i << "\t" << namesArray[i] << "\t\t" << ratingArray[i]
                 << "\t" << experienceArray[i] << "\t\t" << projectArray[i] << endl;

            found = true;
        }
    }

    if (!found)

        cout << "\nNo freelancers found with the skill: " << searchSkill << endl;

    cout << "\nPress any key to return to Admin Menu...";

    getch();
}

// 4. Update freelancer record

void updateFreelancer()

{
    cout << "Enter Freelancer Name to Update: ";
    string name;
    cin >> name;

    int foundIndex = -1;
    for (int i = 0; i < index; i++)
    {
        if (namesArray[i] == name)
        {
            foundIndex = i;
            break;
        }
    }

    if (foundIndex == -1)

    {
        cout << "Freelancer Not Found: " << name << endl;
        return;

    }
 


    cout << "\n|--------------------------------------------------|\n";
    cout << "\n|================== [OLD RECORD] ==================|\n";
    cout << "\n|--------------------------------------------------|\n";

    printTableHeader();

    printRow(foundIndex);

    cout << "\nEnter new record:\n";
    cout << " Enter name: ";
    string newName;
    cin >> newName;
    cout << " Enter age: ";
    int age;
    cin >> age;
    cout << " Enter rating: ";
    float rating;
    cin >> rating;
    cout << " Enter experience: ";
    int exp;
    cin >> exp;
    cout << " Enter projects: ";
    int proj;
    cin >> proj;

    cin.ignore();
    cout << " Enter pref1: ";
    string p1;
    getline(cin, p1);
    cout << " Enter pref2: ";
    string p2;
    getline(cin, p2);
    cout << " Enter pref3: ";
    string p3;
    getline(cin, p3);

    namesArray[foundIndex] = newName;
    agesArray[foundIndex] = age;
    ratingArray[foundIndex] = rating;
    experienceArray[foundIndex] = exp;
    projectArray[foundIndex] = proj;
    pref1Array[foundIndex] = p1;
    pref2Array[foundIndex] = p2;
    pref3Array[foundIndex] = p3;

    cout << "Freelancer record updated successfully!" << endl;
    getch();
}

// 5. Generate merit-based report (calculates aggregate & sorts)

void generateMeritReport()
{
    // Calculate aggregate scores

    for (int i = 0; i < index; i++)
        aggriArray[i] = (ratingArray[i] * 0.4f) + (experienceArray[i] * 0.3f) + (projectArray[i] * 0.3f);

    // Bubble sort descending by aggregate score

    for (int i = 0; i < index - 1; i++)

    {
        for (int j = 0; j < index - 1 - i; j++)

        {
            if (aggriArray[j] < aggriArray[j + 1])

            {
                swap(namesArray[j], namesArray[j + 1]);
                swap(agesArray[j], agesArray[j + 1]);
                swap(ratingArray[j], ratingArray[j + 1]);
                swap(experienceArray[j], experienceArray[j + 1]);
                swap(projectArray[j], projectArray[j + 1]);
                swap(pref1Array[j], pref1Array[j + 1]);
                swap(pref2Array[j], pref2Array[j + 1]);
                swap(pref3Array[j], pref3Array[j + 1]);
                swap(aggriArray[j], aggriArray[j + 1]);
            }
        }
    }

    cout << "\nID\tName\tAge\tRating\tExperience\tProjects\tPref1\tPref2\tPref3\tAggregate Score\n";
    for (int i = 0; i < index; i++)
    {
        if (namesArray[i] != "")
        {
            cout << "\n" << i << "\t" << namesArray[i] << "\t" << agesArray[i] << "\t"
                 << ratingArray[i] << "\t" << experienceArray[i]
                 << "\t" << projectArray[i] << "\t"
                 << pref1Array[i] << "\t" << pref2Array[i]
                 << "\t" << pref3Array[i] << "\t" << aggriArray[i] << endl;
        }
    }

    cout << "Press any key to continue... " << endl;
    getch();
}

// 6. Admit freelancers to jobs based on preferences and aggregate scores

void admitFreelancersToJobs()

{

    cout << " Top 5 freelancers admitted to jobs based on preferences and aggregate scores:\n";
    int assigned = 0;
    for (int i = 0; i < index && assigned < 5; i++)
    {
        if (namesArray[i] != "" && experienceArray[i] >= 3 && ratingArray[i] >= 4.0f)
        {
            cout << "SEAT " << assigned + 1 << ": " << namesArray[i]
                 << " assigned to job: " << pref1Array[i] << endl;
            assigned++;
        }
    }
    if (assigned == 0)
        cout << "No eligible freelancers found.\n";

    cout << "Press any key to continue... " << endl;
    getch();
     // Wait for user input before returning to menu

}

// 7. View top-rated freelancers (rating >= 4.5)

void viewTopRated()
{
    system("cls");
    cout << "\n[~~~~~~~~~~~~~ TOP RATED FREELANCERS (4.5+) ~~~~~~~~~~~~~]\n";
    cout << "\nID\tName\t\tRating\t\tPrimary Skill\n";
    cout << "\n----------------------------------------------------------\n";

    bool found = false;
    for (int i = 0; i < index; i++)
    {
        if (namesArray[i] != "" && ratingArray[i] >= 4.5f)
        {
            cout << "\n" << i << "\t" << namesArray[i] << "\t\t" << ratingArray[i] << "\t\t" << pref1Array[i] << endl;
            found = true;
        }
    }

    if (!found)
        cout << "No top-rated freelancers yet." << endl;

    getch();
}

// 8. Freelancer salary estimation

void salaryEstimation()
{
    system("cls");
    cout << "\n|===================================================|\n";
    cout << "|          FREELANCER SALARY ESTIMATION               |\n";
    cout << "|=====================================================|\n";
    cout << "\n         ID\tName\t\tProjects\tEstimated Salary\n";
    cout << "\n----------------------------------------------------\n";

    for (int i = 0; i < index; i++)
    {
        if (namesArray[i] != "")
        {
            int estimatedSalary = (projectArray[i] * 100) + (experienceArray[i] * 50);
            cout << "\n" << i << "\t" << namesArray[i] << "\t\t"
                 << projectArray[i] << "\t\t$" << estimatedSalary << endl;
        }
    }

    cout << "Press any key to continue..." << endl;
    getch();
}

// 9. Delete freelancer record
void deleteFreelancer()
{
    cout << "Enter Freelancer Name to Delete: ";
    string name;
    cin >> name;

    int foundIndex = -1;
    for (int i = 0; i < index; i++)
    {
        if (namesArray[i] == name)
        {
            foundIndex = i;
            break;
        }
    }

    if (foundIndex == -1)
    {
        cout << "Freelancer not found!" << endl;
        return;
    }

    namesArray[foundIndex] = "";
    agesArray[foundIndex] = 0;
    ratingArray[foundIndex] = 0;
    experienceArray[foundIndex] = 0;
    projectArray[foundIndex] = 0;
    pref1Array[foundIndex] = "";
    pref2Array[foundIndex] = "";
    pref3Array[foundIndex] = "";
    aggriArray[foundIndex] = 0;

    cout << "Freelancer deleted successfully!" << endl;
    getch();

}

// ============================================================
//  ADMIN LOGIN + MENU
// ============================================================

void adminMenu()
{
    for (int attempt = 0; attempt < 3; attempt++)
    {
        system("cls");
        cout << "\n[~~~~~~~~~~~~~USER INPUT DATA~~~~~~~~~~~~~~~]\n";
        cout << " You have 3 attempts to login\n";
        cout << " Admin login: attempt " << attempt + 1 << endl;

        cout << " Username: ";
        string username;
        cin >> username;
        cout << " Password: ";
        string password;
        cin >> password;

        if (username != "admin" || password != "1234")
        {
            cout << "Username or password is invalid." << endl;
            cout << "Press any key to continue..." << endl;
            getch();
            continue;
        }

        // Login successful
        cout << " Login successful!" << endl;

        while (true)
        {
            system("cls");
            cout << "\n|=============================================|\n";
            cout << "\n|~~~~~~~~~~~~~~~(WELCOME)~~~~~~~~~~~~~~~~~~~~~|\n";
            cout << "\n|~~~~~~~~~~~~~(ADMIN MENU)~~~~~~~~~~~~~~~~~~~~|\n";
            cout << "\n|=============================================|\n";

            cout << "1.  Show all freelancers\n";
            cout << "2.  Search freelancer by name\n";
            cout << "3.  Skill-based search\n";
            cout << "4.  Update freelancer record\n";
            cout << "5.  Generate merit-based report\n";
            cout << "6.  Admit freelancers to jobs\n";
            cout << "7.  View top-rated freelancers\n";
            cout << "8.  Freelancer salary estimation\n";
            cout << "9.  Delete freelancer record\n";
            cout << "10. Logout\n";
            cout << " Enter Your Choice: ";

            string adminOption;
            cin >> adminOption;

            if (adminOption == "1")
                showAllFreelancers();
            else if (adminOption == "2")
                searchByName();
            else if (adminOption == "3")
                skillBasedSearch();
            else if (adminOption == "4")
                updateFreelancer();
            else if (adminOption == "5")
                generateMeritReport();
            else if (adminOption == "6")
                admitFreelancersToJobs();
            else if (adminOption == "7")
                viewTopRated();
            else if (adminOption == "8")
                salaryEstimation();
            else if (adminOption == "9")
                deleteFreelancer();
            else if (adminOption == "10")
                break; // logout
            else
                cout << "Invalid Option! Please Try Again.\n";

            cout << "Press any key to continue...";
            getch();
        }

        cout << " Press any key to continue..." << endl;
        getch();
        return; // exit after successful session

    }

}
// ============================================================
//  FREELANCER FUNCTIONS
// ============================================================

// 1. Register new profile
void registerFreelancer()
{
    if (index >= TOTAL_FREELANCERS)
    {
        cout << "Maximum freelancer limit reached!" << endl;
        getch();
        return;
    }

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
    cout << " Enter Pref 3: ";
    getline(cin, pref3Array[index]);

    index++;
    cout << "\nRegistration Successful! Press any key...";
    getch();

}

// 2. Log work hours

void logWorkHours()
{
    system("cls");
    cout << "\n|=============================================|\n";
    cout << "             DAILY WORK HOUR LOG\n";
    cout << "\n|=============================================|\n";

    if (index == 0)
    {
        cout << "No freelancers registered yet." << endl;
        getch();
        return;
    }

    cout << " Current Freelancer: " << namesArray[index - 1] << endl;
    cout << "\n How many hours did you work today? ";

    int currentSession;
    cin >> currentSession;

    // Static array persists across calls within one run
    static int hoursArray[TOTAL_FREELANCERS] = {0};

    if (currentSession > 0 && currentSession <= 24)
    {
        hoursArray[index - 1] += currentSession;
        cout << "\n---------------------------------------------\n";
        cout << " [LOGGED]: " << currentSession << " hours added to your record.\n";
        cout << " [TOTAL]: Your cumulative work hours: " << hoursArray[index - 1] << endl;
        cout << "\n---------------------------------------------\n";
    }
    else
    {
        cout << "\n [!] Invalid input. Please enter hours between 1 and 24." << endl;
    }

    cout << "\nPress any key to continue...";
    getch();
}

// 3. View profile

void viewProfile()

{
    cout << "Enter your name to view profile: ";
    string searchName;
    cin >> searchName;

    bool found = false;

    for (int i = 0; i < index; i++)
    {
        if (namesArray[i] == searchName)
        {
            cout << "\n--- Profile Details ---\n";
            cout << "Name: " << namesArray[i] << " | Age: " << agesArray[i] << endl;
            cout << "Rating: " << ratingArray[i] << " | Projects: " << projectArray[i] << endl;
            cout << "Primary Skill: " << pref1Array[i] << endl;
            found = true;
            break;
        }
    }

    if (!found)
        cout << "Profile not found!" << endl;

    getch();

}
// 4. Calculate earnings estimate

void calculateEarnings()

{
    cout << "Enter your name for pay estimation: ";
    string sName;
    cin >> sName;

    bool found = false;
    for (int i = 0; i < index; i++)
    {
        if (namesArray[i] == sName)
        {
            float estimatedPay = (experienceArray[i] * 500.0f) + (ratingArray[i] * 200.0f);
            cout << "Based on your profile, your estimated project salary is: $" << estimatedPay << endl;
            found = true;
            break;
        }
    }

    if (!found)
        cout << "Freelancer not found!" << endl;

    cout << "Press any key to continue...";
    getch(); // Wait for user input before returning to menu

}
// 5. Check job eligibility
void checkJobEligibility()
{
    cout << "Enter name to check eligibility: ";
    string eName;
    cin >> eName;

    bool found = false;
    for (int i = 0; i < index; i++)
    {
        if (namesArray[i] == eName)
        {
            if (experienceArray[i] >= 2 && ratingArray[i] >= 4.0f)
                cout << "Status: ELIGIBLE for Premium Jobs!" << endl;
            else
                cout << "Status: Keep gaining experience to unlock Premium Jobs." << endl;
            found = true;
            break;
        }
    }

    if (!found)
        cout << "Freelancer not found!" << endl;

    getch();

}

// 6. Market demand checker

void marketDemandChecker()

{
    system("cls");
    cout << "\n|=============================================|\n";
    cout << "           MARKET DEMAND CHECKER\n";
    cout << "\n|=============================================|\n";

    if (index == 0)
    {
        cout << "No freelancers registered yet." << endl;
        getch();
        return;
    }

    string mySkill = pref1Array[index - 1];
    cout << " Your Primary Skill: " << mySkill << endl;
    cout << " Checking market status...\n\n";

    if (mySkill == "Web Development" || mySkill == "Mobile App Development" || mySkill == "SEO")
    {
        cout << " [RESULT]: HIGH DEMAND\n";
        cout << " Status: You are likely to find a project within 24 hours!" << endl;
    }
    else
    {
        cout << " [RESULT]: STABLE DEMAND\n";
        cout << " Status: Consistent work available. Keep your profile updated." << endl;
    }

    cout << "\n|=============================================|\n";
    cout << "Press any key to return...";
    getch();
}

// ============================================================
//  FREELANCER MENU
// ============================================================

void freelancerMenu()
{
    while (true)
    {
        system("cls");
        cout << "\n|=============================================|\n";
        cout << "|            FREELANCER DASHBOARD             |\n";
        cout << "|=============================================|\n";
        cout << " 1. Register New Profile\n";
        cout << " 2. Log Work Hours\n";
        cout << " 3. View My Profile\n";
        cout << " 4. Calculate Total Earnings\n";
        cout << " 5. Check Job Eligibility\n";
        cout << " 6. Market Demand Checker\n";
        cout << " 7. Back to Main Menu\n";
        cout << " Enter Your Choice: ";

        int freeOption;
        cin >> freeOption;

        if (freeOption == 1)
            registerFreelancer();
        else if (freeOption == 2)
            logWorkHours();
        else if (freeOption == 3)
            viewProfile();
        else if (freeOption == 4)
            calculateEarnings();
        else if (freeOption == 5)
            checkJobEligibility();
        else if (freeOption == 6)
            marketDemandChecker();
        else if (freeOption == 7)
            break;
        else
        {
            cout << "Invalid Option! Please Try Again." << endl;
            getch();
        }
    }
}
// ============================================================
//  MAIN MENU
// ============================================================

void mainMenu()
{
    while (true)
    {
        showHeader();

        cout << "\n[~~~~~~~~~USER MENU~~~~~~~~~~~]\n";
        cout << " 1. ADMIN\n";
        cout << " 2. FREELANCER\n";
        cout << " 3. EXIT\n";
        cout << " Enter Your Choice: ";

        int userOption;
        cin >> userOption;

        cout << " YOU CHOSE: " << userOption << endl;

        if (userOption == 1)
            adminMenu();
        else if (userOption == 2)
            freelancerMenu();
        else if (userOption == 3)
        {
            cout << "Exiting... Goodbye!" << endl;
            break;
        }
        else
        {
            cout << "Invalid Option! Please Try Again." << endl;
            getch();
        }
    }
}

// ============================================================
//  ENTRY POINT
// ============================================================

int main()
{
    mainMenu();
    return 0;
}


