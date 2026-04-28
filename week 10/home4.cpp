#include <iostream>
#include <string>
#include <cmath>
using namespace std;
string calculateprojecttime(int neededHours, int days, int workers);
int main() {
    int hours, days, workers;
    cout << "Enter the number of hours needed: " << endl;
    cin >> hours;
    cout << "Enter the number of days available: " << endl;
    cin >> days;
    cout << "Enter the number of workers: " << endl;
    cin >> workers;
    cout << calculateprojecttime(hours, days, workers) << endl;
    return 0;
}
string calculateprojecttime(int neededHours, int days, int workers)
 {
    double workdays = days - (days * 0.10);
    int totalHours = floor(workdays * 10 * workers);
    if (totalHours >= neededHours) {
        int hoursLeft = totalHours - neededHours;
        return "Yes! " + to_string(hoursLeft) + " hours left.";
    } else {
        int hoursShort = neededHours - totalHours;
        return "Not enough time! " + to_string(hoursShort) + " hours needed.";
    }
}