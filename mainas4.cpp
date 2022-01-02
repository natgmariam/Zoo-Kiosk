/*
Description: Using user input to calculate number of people going
            to the zoo and applying aplicable dicounts to print 
            out a receipt with all the relevent inofrmation
Input: User are prompted to input number of people for each ticket
    price and if they have aplicable discounts & it get applied. 
Output: using the user input to print out the relavent info such 
        as how many people, cost of each tickets, the discounts 
        applied, as well as the tottal cost of the tickets using 
        the inormation from user input. In addation to printing 
        out constant statements such as ticket prices all aranged 
        to look like a table. 
*/

#include <iostream>  //library for C++ code
#include <iomanip> //library with parametric/output miniplator libraray
#include <cmath> //library allowing access to math arithmetic
using namespace std;

int main(){ //required for c++ code to function
//constant price for ticket based on the age group of the people
    const double adults = 34.99;   
    const double Seniors = 24.99;
    const double YoungAdults = 19.99;
    const double children = 9.99;
      
//the types of dicounts as constants
    const double zoomember = .3;  
    const double groupd = .15;
    const double coupon = .1; 

//print statment for welcome sscreen including menu
    cout << "*******************************\n";
    cout << "Welcome to the Zoo Ticket Kiosk\n";
    cout << "Ticket Purchase Menu\n";
    cout << "Adults: $34.99\n";
    cout << "Seniors: $24.99\n";
    cout << "Young adults: $19.99\n";
    cout << "Children: $9.99\n";
    cout << "Infants: Free\n";
    cout << endl; 
    cout << "Discounts\n";
    cout << "Zoo member: 30%\n";
    cout << "Coupon: 10%\n";
//declaration different types of people who can go to the zoo
    int adult1 = 0; 
    cout << "How many adults: ";
    cin >> adult1; //this will be the user input in numbers 
//declaration step repeated and user input 
    int senior1 = 0; 
    cout << "How many seniors: "; //statement to be printed  
    cin >> senior1;

    int youngad1 = 0; 
    cout << "How many young adults: ";
    cin >> youngad1; 

    int child1 = 0; 
    cout << "How many children: ";
    cin >> child1; 

    int infan1 = 0; 
    cout << "How many infants: ";
    cin >> infan1; 

cout << endl; 

    int code = 0; //declaration of type of cupon code to enter 
    char first = '\00'; //declaration of discount & if can be applied
    cout << "Do you have a discount code? (y/n):"; //print statment
    cin >> first; //user input if discount is available 
//switches based on if a discount is available to be applied 
        switch (first) //char expression of a data type 
        {
        case 'Y': // where the char falls under to print
        case 'y': // expression where the chosen input must match
            cout << "Please enter your discount code: "; //print statement 
            cin >> code; //user in out if case is a match        
        break; //breaks out of the expression allowing other cases 
        case 'N':
        case 'n':
            cout << "No discount code\n";
        break;
        default: //result when expression doesnt match the cases
            cout << "Invalid entry - " << first <<"\n";// error statment
            cout << "Would you like to start over? (y/n): \n";
            cin >> first;
            switch (first) //char expression of a data type 
            {
                case 'Y': // where the char falls under to print
                case 'y': // expression where the chosen input must match
                    cout << "exiting ticket sales \n";
                    return 0;//end program if user input doesnt match to start over        
                break; //breaks out of the expression allowing other cases 
                case 'N':
                case 'n':
                    cout << "Continuing with no discount\n";
                break;
                default: //result when expression doesnt match the cases
                    cout << "Invalid entry - " << first <<"\n";// error statment
                    cout << "Would you like to start over? (y/n): \n";
                    cout << "exiting ticket sales \n";
                return 0;//end program if user input doesnt match to start over
                break;
            }
            
        break;
    }

cout.precision (2);//allows two decimal places after whole number
cout << fixed; //holds it fixed at only two places after decimal

double costa = adults * adult1; //cost of adult bassed on # of adults
double costs = Seniors * senior1;//cost of seniors based on # 
double costy = YoungAdults * youngad1; //same as ^ with young adults
double costc = children * child1; //same with ^ children
//totoal number of people who are going to the zoo 
double group = (adult1 + senior1 + youngad1 + child1);
//sume of the tickets bought based on the people 
double totalc = (costa + costs + costy + costc); 
//what the cosst of ticket is after applying each discount 
double subtotal1 = (totalc * groupd);
double subtotal2 = (totalc * zoomember);
double subtotal3 = (totalc * coupon); 
//cost of tickets after the discount has been subtracted from total
double total1 = (totalc - subtotal1);
double total2 = (totalc - subtotal2);
double total3 = (totalc - subtotal3);
//data for the header to be printed for the receipt  
    string h1 = "Adults: ", h2 = "Seniors: ", 
    h3 = "Young Adults: ", h4 = "Children: ", h5 = "Infants: ";  
//data for receipt with price breakdown for each ticket 
    string c1 = " @  34.99 ea = ", c2 = " @  24.99 ea = ", 
    c3 = " @  19.99 ea = ", c4 = " @   9.99 ea = ";
cout << endl; 
    cout << "Receipt\n";//print statement for receipt 
/*if statments comparing the input to determine what to print
on the receipt based on if the number of people is greater than 0.
prints out the line settign the number to the left & right, fixing 
the number of spcaes after the declared number to match the 
receipt layout*/ 
   if (adult1 > 0)
   {
        cout << h1 << right << setw(8) << adult1 <<
        right << setw(1) << c1 << right << setw(6) << costa 
        << right << '\n'; 
    }
    if (senior1 > 0) 
        cout << h2 << right << setw(7) << senior1 << 
        right << setw(1) << c2 << right << setw(6) << costs 
        << right << '\n'; 

    if (youngad1 > 0)
        cout << h3 << right << setw(2) << youngad1 <<
        right << setw(0) << c3 << right << setw(6) << costy 
        << right << '\n';

    if (child1 > 0)
        cout << h4 << right << setw(6) << child1 
        << right << setw(5) << c4 << right << setw(6) << costc 
        << right << '\n';

    if (infan1 > 0)
        cout << h5 << right << setw(7) << infan1 <<
        right << setw(21) << "free" << '\n';
cout << endl;
//following the layout, prints out the subtotal of tickets bought
    cout << right << setw(23) << "Subtotal" << right << setw(8) 
    << "$" << totalc << right << '\n';   
/*if..else statment comparing code to determine which statment to print 
using logic expressions to filter out the false statments & print out 
only the true statments.
compares modulars, number of people & divisablity of input discount
in additon to keeping paramatric output to match layout on receipt*/  
    if ( code % 3 == 0 && code != 0) {
            cout <<'\n' <<"Zoo member discount of 30.00% applied\n";
            cout << endl;
            cout << right << setw(23) << "Discount" << right << 
            setw(8) <<"$-" << subtotal2 << "\n";
             
            cout <<'\n' <<right << setw(23) << "Total" << right 
            << setw(8) << "$" << total2 << '\n';
        }
    else if (group == 0){
        cout << "No discounts apply\n";
        cout << '\n' <<right << setw(23) << "Total" << right
        << setw(8) << "$"<< totalc << "\n";
        }
    
    else if ( group >= 10) {
        cout << '\n' <<"Group discount of 15.00% applied\n";
        cout << endl;
        cout << right << setw(23) << "Discount" << right 
        << setw(8) <<"$-" << subtotal1 << "\n"; 
        
        cout <<'\n'<<right << setw(23) << "Total" << right 
        << setw(8) << "$" << total1 << '\n';
         }

    else if (code % 4 == 0 && group < 10 && code % 3 != 0
        && code != 0) {
            cout <<'\n' <<"Coupon discount of 10.00% applied\n";
            cout << endl;
            cout << right << setw(23) << "Discount" << right << 
            setw(8) <<"$-" << subtotal3 << "\n";
             
            cout <<'\n'<<right << setw(23) << "Total" << right 
            << setw(8) << "$"<< total3 << '\n';
        }    
    //what prints if no discount has been applied
    //is set to match layout of receipt & display total
    else  
    { 
     cout << "No discounts apply\n";
     cout << '\n' <<right << setw(23) << "Total" << right 
     << setw(8) << "$"<< totalc << "\n";
    }
    return 0; 
}