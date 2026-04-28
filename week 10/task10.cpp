#include <iostream>
using namespace std;
string getTens(int num);
string getones(int n);
string numtotext(int num);
main()
{
    int num;
    cout << "enter number ";
    cin >> num;
    numtotext(num);
    getones(num);
    getTens(num);
    return 0;
}
string getones(int num)
{
    string ones[] = {"", "One", "Two", "Three", "Four", "Five", "Six",
                     "Seven", "Eight", "Nine", "Ten", "Eleven", "Twelve",
                     "Thirteen", "Fourteen", "Fifteen", "Sixteen",
                     "Seventeen", "Eighteen", "Nineteen"};
                     return ones[num];
}
string getTens(int num)
{
    string tens[] = {"", "", "Twenty", "Thirty", "Forty",
                     "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};
                     return tens[num];
}
string numtotext(int num)
{
    if (num <= 19)
        cout << getones(num);
    else{
    int tensPart = num / 10;
    int onesPart = num % 10;

    cout << getTens(tensPart);
    if (onesPart > 0)
    {
        cout << "_" << getones(onesPart);
    }
}
    return "";
}