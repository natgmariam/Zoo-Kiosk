/*
Description: prompting user to input char value and using a switch 
            statement to print out a value range based on the character 
            entered showing grades point ranges. Making sure to print 
            out error meassage for unrecognized characters.  
Input:  User prompted to input both upper & lower case letter grade as 
        char value 
Output: Using a switch statement the corect value range for the grades 
        will be printed out based on the character entered. 
*/
#include <iostream> //library for C++ code
#include <iomanip> //library with parametric/output miniplator libraray
using namespace std;


int main() {  //required for c++ code to function 

char grades = '\00'; /*declaration of grades as character, 
                    will be user input*/ 

//print an enter statment & ** 
cout << "Enter a letter grade \n**";
cin >> grades;  //user input

cout << endl; 

//switches based on the selction of listed cases to print
switch (grades) {  //integral expression of a data type   
    case 'A':      // where the char falls under to print  
    case 'a':      // expression where the chosen input must match 
        cout << "Grade range is 90 - 100 \n";
        break; //breaks out of the expression allowing other cases 
    case 'B': 
    case 'b':
        cout << "Grade range is 80 - 89.99 \n"; //printed statment 
        break; 
    case 'C':
    case 'c': 
        cout << "Grade range is 70 - 79.99 \n";
        break; 
    case 'D':  //forth set of cases to match input too 
    case 'd':  //including both capital & lower case letters 
        cout << "Grade range is 60 - 69.99 \n";
        break;
    case 'F':
    case 'f': 
        cout << "Grade range is 0 - 59.99 \n";
        break; 
    default: //result when expression doesnt match the cases 
        cout << "Error: " <<"\'"<< grades << "\'" //prints out Error 
        << " is not a valid letter grade \n";  // error statment 

    }

    return 0;
}