#include<iostream>
#include<fstream>   //for file handling
#include<conio.h>   //for getch() to pause and wait for key press
#include<string>
using namespace std;

// ============================================================
//  CONSTANTS & GLOBAL DATA ARRAYS
// ============================================================

const int TOTAL_FREELANCERS = 100;

string namesArray[TOTAL_FREELANCERS];
int    agesArray[TOTAL_FREELANCERS];
float  ratingArray[TOTAL_FREELANCERS];
int    experienceArray[TOTAL_FREELANCERS];
int    projectArray[TOTAL_FREELANCERS];
string pref1Array[TOTAL_FREELANCERS];
string pref2Array[TOTAL_FREELANCERS];
string pref3Array[TOTAL_FREELANCERS];
float  aggriArray[TOTAL_FREELANCERS];
int    totalFreelancers = 0;

// ============================================================
//  FILE HANDLING  (notebook format: fstream + .open + .close)
// ============================================================

void saveToFile()
{
    fstream myFile;           // ofstream for output, ifstream for input, fstream for both
    myFile.open("freelancers.txt", ios::out);

    myFile << totalFreelancers << "\n";

    for (int i = 0; i < totalFreelancers; i++)
    {
        myFile << namesArray[i] << "\n";
        myFile << agesArray[i] << " " << ratingArray[i] << " " << experienceArray[i] << " " << projectArray[i] << "\n";
        myFile << pref1Array[i] << "\n";
        myFile << pref2Array[i] << "\n";
        myFile << pref3Array[i] << "\n";
    }

    myFile.close();    // Always close the file after writing to ensure data is saved properly
}

void loadFromFile()
{
    fstream myFile;
    myFile.open("freelancers.txt", ios::in);

    if (!myFile)
    {
        // No file yet — load default data
        totalFreelancers = 7;

        namesArray[0]="Ali";      agesArray[0]=25; ratingArray[0]=4.5f; experienceArray[0]=3; projectArray[0]=10;
        namesArray[1]="Ahmed";    agesArray[1]=30; ratingArray[1]=4.0f; experienceArray[1]=5; projectArray[1]=20;
        namesArray[2]="Sara";     agesArray[2]=22; ratingArray[2]=4.8f; experienceArray[2]=2; projectArray[2]=5;
        namesArray[3]="Zainab";   agesArray[3]=28; ratingArray[3]=4.2f; experienceArray[3]=4; projectArray[3]=15;
        namesArray[4]="Hassan";   agesArray[4]=35; ratingArray[4]=3.9f; experienceArray[4]=6; projectArray[4]=25;
        namesArray[5]="Ayesha";   agesArray[5]=27; ratingArray[5]=4.7f; experienceArray[5]=3; projectArray[5]=12;
        namesArray[6]="Bilal";    agesArray[6]=24; ratingArray[6]=4.3f; experienceArray[6]=2; projectArray[6]=8;

        pref1Array[0]="Web Development";        pref2Array[0]="Graphic Design";         pref3Array[0]="Content Writing";
        pref1Array[1]="Graphic Design";         pref2Array[1]="Web Development";         pref3Array[1]="Digital Marketing";
        pref1Array[2]="Content Writing";        pref2Array[2]="Digital Marketing";       pref3Array[2]="Web Development";
        pref1Array[3]="Digital Marketing";      pref2Array[3]="Content Writing";         pref3Array[3]="Graphic Design";
        pref1Array[4]="Data Analysis";          pref2Array[4]="Mobile App Development";  pref3Array[4]="SEO";
        pref1Array[5]="Mobile App Development"; pref2Array[5]="Data Analysis";           pref3Array[5]="Mobile App Development";
        pref1Array[6]="SEO";                    pref2Array[6]="SEO";                     pref3Array[6]="Data Analysis";

        saveToFile();   // create the file with default data
        return;
    }

    // File exists — read everything
    // >> for numbers (handles whitespace automatically)
    // ignore() + getline for strings (handles the leftover newline)

    // Read using >> only for numbers (no stoi, no stof, no mixing bugs)
    // After each >> read numbers, use ignore() to skip newline, then getline for strings
    myFile >> totalFreelancers;
    myFile.ignore(1000, '\n');

    for (int i = 0; i < totalFreelancers; i++)
    {
        getline(myFile, namesArray[i]);
        myFile >> agesArray[i] >> ratingArray[i] >> experienceArray[i] >> projectArray[i];
        myFile.ignore(1000, '\n');
        getline(myFile, pref1Array[i]);
        getline(myFile, pref2Array[i]);
        getline(myFile, pref3Array[i]);
    }

    myFile.close();
}

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

void showAllFreelancers()
{
    printTableHeader();
    for (int i = 0; i < totalFreelancers; i++)
    {
        if (namesArray[i] != "")
            printRow(i);
    }
}

void searchByName()
{
    cout << "Enter Freelancer Name to Search: ";
    string name;
    cin >> name;

    int foundIndex = -1;
    for (int i = 0; i < totalFreelancers; i++)
    {
        if (namesArray[i] == name)
        {
            foundIndex = i;
            break;
        }
    }

    if (foundIndex == -1)
        cout << "Freelancer Not Found: " << name << endl;
    else
    {
        printTableHeader();
        printRow(foundIndex);
    }
}

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
    for (int i = 0; i < totalFreelancers; i++)
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

void updateFreelancer()
{
    cout << "Enter Freelancer Name to Update: ";
    string name;
    cin >> name;

    int foundIndex = -1;
    for (int i = 0; i < totalFreelancers; i++)
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

    namesArray[foundIndex]      = newName;
    agesArray[foundIndex]       = age;
    ratingArray[foundIndex]     = rating;
    experienceArray[foundIndex] = exp;
    projectArray[foundIndex]    = proj;
    pref1Array[foundIndex]      = p1;
    pref2Array[foundIndex]      = p2;
    pref3Array[foundIndex]      = p3;

    saveToFile();
    cout << "Freelancer record updated successfully!" << endl;
    getch();
}

void generateMeritReport()
{
    for (int i = 0; i < totalFreelancers; i++)
        aggriArray[i] = (ratingArray[i] * 0.4f) + (experienceArray[i] * 0.3f) + (projectArray[i] * 0.3f);

    for (int i = 0; i < totalFreelancers - 1; i++)
    {
        for (int j = 0; j < totalFreelancers - 1 - i; j++)
        {
            if (aggriArray[j] < aggriArray[j + 1])
            {
                swap(namesArray[j],      namesArray[j+1]);
                swap(agesArray[j],       agesArray[j+1]);
                swap(ratingArray[j],     ratingArray[j+1]);
                swap(experienceArray[j], experienceArray[j+1]);
                swap(projectArray[j],    projectArray[j+1]);
                swap(pref1Array[j],      pref1Array[j+1]);
                swap(pref2Array[j],      pref2Array[j+1]);
                swap(pref3Array[j],      pref3Array[j+1]);
                swap(aggriArray[j],      aggriArray[j+1]);
            }
        }
    }

    cout << "\nID\tName\tAge\tRating\tExperience\tProjects\tPref1\tPref2\tPref3\tAggregate Score\n";
    for (int i = 0; i < totalFreelancers; i++)
    {
        if (namesArray[i] != "")
            cout << "\n" << i << "\t" << namesArray[i] << "\t" << agesArray[i] << "\t"
                 << ratingArray[i] << "\t" << experienceArray[i]
                 << "\t" << projectArray[i] << "\t"
                 << pref1Array[i] << "\t" << pref2Array[i]
                 << "\t" << pref3Array[i] << "\t" << aggriArray[i] << endl;
    }

    cout << "Press any key to continue... " << endl;
    getch();
}

void admitFreelancersToJobs()
{
    cout << " Top 5 freelancers admitted to jobs based on preferences and aggregate scores:\n";
    int assigned = 0;
    for (int i = 0; i < totalFreelancers && assigned < 5; i++)
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
}

void viewTopRated()
{
    system("cls");
    cout << "\n[~~~~~~~~~~~~~ TOP RATED FREELANCERS (4.5+) ~~~~~~~~~~~~~]\n";
    cout << "\nID\tName\t\tRating\t\tPrimary Skill\n";
    cout << "\n----------------------------------------------------------\n";

    bool found = false;
    for (int i = 0; i < totalFreelancers; i++)
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

void salaryEstimation()
{
    system("cls");
    cout << "\n|===================================================|\n";
    cout << "|          FREELANCER SALARY ESTIMATION               |\n";
    cout << "|=====================================================|\n";
    cout << "\n         ID\tName\t\tProjects\tEstimated Salary\n";
    cout << "\n----------------------------------------------------\n";

    for (int i = 0; i < totalFreelancers; i++)
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

void deleteFreelancer()
{
    cout << "Enter Freelancer Name to Delete: ";
    string name;
    cin >> name;

    int foundIndex = -1;
    for (int i = 0; i < totalFreelancers; i++)
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

    // Shift records left to fill the gap
    for (int i = foundIndex; i < totalFreelancers - 1; i++)
    {
        namesArray[i]      = namesArray[i+1];
        agesArray[i]       = agesArray[i+1];
        ratingArray[i]     = ratingArray[i+1];
        experienceArray[i] = experienceArray[i+1];
        projectArray[i]    = projectArray[i+1];
        pref1Array[i]      = pref1Array[i+1];
        pref2Array[i]      = pref2Array[i+1];
        pref3Array[i]      = pref3Array[i+1];
        aggriArray[i]      = aggriArray[i+1];
    }
    totalFreelancers--;

    saveToFile();
    cout << "Freelancer deleted successfully!" << endl;
    getch();
}

// ============================================================
//  ADMIN MENU
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

            if      (adminOption == "1")  showAllFreelancers();
            else if (adminOption == "2")  searchByName();
            else if (adminOption == "3")  skillBasedSearch();
            else if (adminOption == "4")  updateFreelancer();
            else if (adminOption == "5")  generateMeritReport();
            else if (adminOption == "6")  admitFreelancersToJobs();
            else if (adminOption == "7")  viewTopRated();
            else if (adminOption == "8")  salaryEstimation();
            else if (adminOption == "9")  deleteFreelancer();
            else if (adminOption == "10") break;
            else                          cout << "Invalid Option! Please Try Again.\n";

            cout << "Press any key to continue...";
            getch();
        }

        cout << " Press any key to continue..." << endl;
        getch();
        return;
    }
}

// ============================================================
//  FREELANCER FUNCTIONS
// ============================================================

void registerFreelancer()
{
    if (totalFreelancers >= TOTAL_FREELANCERS)
    {
        cout << "Maximum freelancer limit reached!" << endl;
        getch();
        return;
    }

    cout << " Enter name: ";
    cin >> namesArray[totalFreelancers];
    cout << " Enter age: ";
    cin >> agesArray[totalFreelancers];
    cout << " Enter rating (1-5): ";
    cin >> ratingArray[totalFreelancers];
    cout << " Enter experience (years): ";
    cin >> experienceArray[totalFreelancers];
    cout << " Enter number of projects: ";
    cin >> projectArray[totalFreelancers];

    cin.ignore();
    cout << " Enter Pref 1 (e.g., Web Dev): ";
    getline(cin, pref1Array[totalFreelancers]);
    cout << " Enter Pref 2: ";
    getline(cin, pref2Array[totalFreelancers]);
    cout << " Enter Pref 3: ";
    getline(cin, pref3Array[totalFreelancers]);

    totalFreelancers++;
    saveToFile();
    cout << "\nRegistration Successful! Press any key...";
    getch();
}

void logWorkHours()
{
    system("cls");
    cout << "\n|=============================================|\n";
    cout << "             DAILY WORK HOUR LOG\n";
    cout << "\n|=============================================|\n";

    if (totalFreelancers == 0)
    {
        cout << "No freelancers registered yet." << endl;
        getch();
        return;
    }

    cout << " Current Freelancer: " << namesArray[totalFreelancers - 1] << endl;
    cout << "\n How many hours did you work today? ";

    int currentSession;
    cin >> currentSession;

    static int hoursArray[TOTAL_FREELANCERS] = {0};

    if (currentSession > 0 && currentSession <= 24)
    {
        hoursArray[totalFreelancers - 1] += currentSession;
        cout << "\n---------------------------------------------\n";
        cout << " [LOGGED]: " << currentSession << " hours added to your record.\n";
        cout << " [TOTAL]: Your cumulative work hours: " << hoursArray[totalFreelancers - 1] << endl;
        cout << "\n---------------------------------------------\n";
    }
    else
        cout << "\n [!] Invalid input. Please enter hours between 1 and 24." << endl;

    cout << "\nPress any key to continue...";
    getch();
}

void viewProfile()
{
    cout << "Enter your name to view profile: ";
    string searchName;
    cin >> searchName;

    bool found = false;
    for (int i = 0; i < totalFreelancers; i++)
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

void calculateEarnings()
{
    cout << "Enter your name for pay estimation: ";
    string sName;
    cin >> sName;

    bool found = false;
    for (int i = 0; i < totalFreelancers; i++)
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
    getch();
}

void checkJobEligibility()
{
    cout << "Enter name to check eligibility: ";
    string eName;
    cin >> eName;

    bool found = false;
    for (int i = 0; i < totalFreelancers; i++)
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

void marketDemandChecker()
{
    system("cls");
    cout << "\n|=============================================|\n";
    cout << "           MARKET DEMAND CHECKER\n";
    cout << "\n|=============================================|\n";

    if (totalFreelancers == 0)
    {
        cout << "No freelancers registered yet." << endl;
        getch();
        return;
    }

    string mySkill = pref1Array[totalFreelancers - 1];
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

        if      (freeOption == 1) registerFreelancer();
        else if (freeOption == 2) logWorkHours();
        else if (freeOption == 3) viewProfile();
        else if (freeOption == 4) calculateEarnings();
        else if (freeOption == 5) checkJobEligibility();
        else if (freeOption == 6) marketDemandChecker();
        else if (freeOption == 7) break;
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

        if      (userOption == 1) adminMenu();
        else if (userOption == 2) freelancerMenu();
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
    loadFromFile();
    mainMenu();
    return 0;
}
