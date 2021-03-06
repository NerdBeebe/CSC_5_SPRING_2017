/* 
 * File:   CppTemplate
 * Author: Christian Beebe
 * Created on February 14, 2017, 5:13 PM
 * Purpose: Template to be utilized in creating
 *          solutions to problems in our CSC/CIS 5 
 *          class.
 */

//System Libraries
#include <iostream> //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare Variables
    float payChk, //Gross pay in $'s
          hrsWrkd, //hours worked in hours
          payRate; //$ made per hour
    //Initialize variables
    hrsWrkd=20;
    payRate=-20;    
    //Input data
    payChk=hrsWrkd*payRate;   
    //Map inputs to outputs or process the data
    cout<<"Hours Worked = "<<hrsWrkd<<" hrs"<<endl;
    cout<<"Pay Rate = $"<<payRate<<"/hr"<<endl;
    cout<<"Gross Pay = $"<<payChk<<endl;
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}

