#include <iostream>
using namespace std;
main()
{
string movie_name;
cout<<"Enter the movie name: ";
cin>>movie_name;
int adult_ticket_price;
cout<<"Enter the price of adult ticket: ";
cin>>adult_ticket_price;
int child_ticket_price;
cout<<"Enter the price of child ticket: ";
cin>>child_ticket_price;
int adult_ticket_sold;
cout<<"Enter the adult ticket sold: ";
cin>>adult_ticket_sold;
int child_ticket_sold;
cout<<"Enter the child ticket sold: ";
cin>>child_ticket_sold;
int charity;
cout<<"Enter the percentage donated to charity: ";
cin>>charity;
int total_amount = (adult_ticket_price * adult_ticket_sold) + (child_ticket_price * child_ticket_sold);
int charity_donation = (total_amount * charity) / 100;
int remaining_amount = total_amount - charity_donation;
cout<<"movie =="<<movie_name;
cout<<"total amount from movie =="<<total_amount;
cout<<"total amount donated to charity =="<<charity_donation;
cout<<"total amount that is remaining =="<<remaining_amount;}