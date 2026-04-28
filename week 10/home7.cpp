#include <iostream>
using namespace std;
float calculateBalance(float balance, int years);
int main() {
 float balance;
 int years;
 cout << "Enter Balance and years: " << endl;
 cin >> balance >> years;
 float updatedBalance = calculateBalance(balance, years);
 cout << "Updated Balance: " << updatedBalance << endl;
 return 0;
}
float calculateBalance(float balance, int years) {
 float interestRate = 0;
 if (balance < 10000) {
 interestRate = 5;
 } else if (balance >= 10000 && balance <= 50000) {
 interestRate = 7;
 } else if (balance > 50000) {
 interestRate = 10;
 }

 if (years >= 3) {
 interestRate += 2;
 }
 float interestAmount = balance * (interestRate / 100);
 return balance + interestAmount;
}