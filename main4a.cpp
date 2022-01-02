/*  
Description: Using multiple values from user input to use 
            if..else statements to compare values and print 
            out the larger of the two inputs.
Input: user inputs floating point numbers & vlues to be 
        compared using if..else statement.    
Output: Using the if..else statement the larger of the two
        user inputs will be compaared & printed out,  
*/
#include <iostream> //library for C++ code
#include <iomanip> //library with parametric/output miniplator libraray
using namespace std;

int main() { //required for c++ code to function

    double x = 0; //declaration of x & y, will be user input
    double y = 0;  
    string first = " "; 
    string second = " "; /*declaration of 1st & 2nd string 
                         from the keyboard to be compared based 
                         on value of the ascii table*/
    
    //print enter statment & ** 
    cout << "Enter a floating point number\n" 
    << "**"; 
    cin >> x;  //user input for number 
    cout << endl;
    
    //print enter statement 
    cout << "Enter another floating point number\n" 
    << "**";
    cin >> y; //user input for second statement 
    cout << endl;  
    
    //output statement printing user input 
    cout << "You entered " << x << " and " << y<< endl;
    //if..else statment comparing to input to determine larger value
        if ( x > y) {
            cout << "The largest is " << x<< endl;
        }
    // else statement to print "if" case is not matched 
        else { 
            cout << "The largest is " << y<< endl;
        }
    
    cout << endl;
    
    //Enter statement for strings 
    cout << "Enter a string\n"
    << "**"; 
    cin >> first; //user input of alphabets as strings 
    cout << endl; 
    
    //another enter statement 
    cout << "Enter a second string\n"
    << "**"; 
    cin >> second; //user input of second string to compare 
    cout << endl; 
    
   //prints out input strings to compare via if..else statement
    cout << "You entered \""<< first << "\" and \"" 
    << second << "\"" << endl; 
   //if statement that compares ascii value to state largest input  
        if ( first > second) {
            cout << "The largest is \"" << first <<"\""<< endl;     
        }
    //statement that prints if statement is wrong, the else case   
        else {
            cout << "The largest is \"" << second <<"\"" << endl;
        }

    return 0;
}