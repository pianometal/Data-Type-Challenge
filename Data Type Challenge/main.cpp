/*
 
 This was a coding challenge from HackerRank.
 
 Task
 
 Complete the code in the editor below. The variables i, d, and s are already declared and initialized for you. You must:
 
 Declare 3 variables: one of type int, one of type double, and one of type String.
 
 Read 3 lines of input from stdin (according to the sequence given in the Input Format section below) and initialize your variables.
 
 Use the + operator to perform the following operations:
 
 Print the sum of  plus your int variable on a new line.
 Print the sum of  plus your double variable to a scale of one decimal place on a new line.
 Concatenate  with the string you read as input and print the result on a new line.
 
 Input Format
 
 The first line contains an integer that you must sum with i.
 The second line contains a double that you must sum with d.
 The third line contains a string that you must concatenate with s.
 
 Output Format
 
 Print the sum of both integers on the first line, the sum of both doubles (scaled to 1 decimal place) on the second line, and then the two concatenated strings on the third line.
 
 -------------------
 
 I liked this exercise, as it helped me learn about using different inputs with mixed data types. Below is my winning formula :)
 
 -------------------
 
 */

#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    
    int i {4};
    double d {4.0};
    string s {"Kyle is "};
    
    // Declare second integer, double, and String variables.
    
    int ii {};
    double dd {};
    string ss {};
    
    // Read and save an integer, double, and String to your variables.
    
    cin >> ii;
    cin >> dd;
    cin.ignore();
    getline(cin, ss);
    
    // Print the sum of both integer variables on a new line.
    
    cout << i+ii << endl;
    
    // Print the sum of the double variables on a new line.
    
    cout << fixed;
    cout << setprecision(1);
    cout << d+dd << endl;
    
    // Concatenate and print the String variables on a new line

    cout << s + ss;

    return 0;
}
