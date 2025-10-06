/*
* Title: Math Tutor
* Programmer (s):Colton McQueen, Dane McClary
* Date: 2025.09.22
* Github: https://github.com/comcqu02/MathTutorV2
*Description: A easy Math Tutor for students.
*Description 2:
*/

#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <cctype>
#include <ios>


using namespace std;

int main() {
    string name;
    int leftn;
    int rightn;
    int correctAnswer = 0;
    int mathType;
    int userAnswer = 0;
    std::srand(std::time(nullptr));

    //   /\  Input any new values here please!
    cout << "*********************************" << endl;
    cout << "__  __       _   _       _____      _              __     ___ \n";
    cout << "|  \\/  | __ _| |_| |__   |_   _|   _| |_ ___  _ __  \\ \\   / / |\n";
    cout << "| |\\/| |/ _` | __| '_ \\    | || | | | __/ _ \\| '__|  \\ \\ / /| |\n";
    cout << "| |  | | (_| | |_| | | |   | || |_| | || (_) | |      \\ V / | |\n";
    cout << "|_|  |_|\\__,_|\\__|_| |_|   |_| \\__,_|\\__\\___/|_|       \\_/  |_|\n";

    cout << endl << "*********************************" << endl;
    cout << "Math is good for your brain." << endl;
    cout << "So lets feed your brain some math!" << endl << endl;
    cout << "What is your name my pupil? :";
    getline(cin, name);
    cout << "Hello ";
    cout << name << ". Lets learn some math!!!" << endl;
    // This is the introduction of the program before the math. Only one string value used.

    // generating the random numbers and math type
    leftn = std::rand() % 10 +1;
    rightn = std::rand() % 10 +1;
    mathType = std::rand() % 4 +1;

    // if statement for the math type and question

   switch (mathType){
     case 1:
       correctAnswer = (leftn + rightn);
       cout << leftn << "+" << rightn <<"=";
       cin >> userAnswer;
       break;

     case 2:
       if (rightn > leftn) {
           correctAnswer =(rightn - leftn);
           cout << rightn <<"-" <<leftn <<"=";
           cin >> userAnswer;
         }


       else {
           correctAnswer = (leftn - rightn);
           cout << leftn <<"-" <<rightn <<"=";
           cin >> userAnswer;
         }
         break;

       case 3:
       correctAnswer =(rightn * leftn);
       cout << rightn <<"*" <<leftn <<"=";
       cin >> userAnswer;
       break;

       case 4:
           if (rightn > leftn) {
               correctAnswer =(rightn / leftn);
               cout << rightn <<"/" <<leftn <<"=";
               cin >> userAnswer;
           }


           else {
               correctAnswer = (leftn / rightn);
               cout << leftn <<"/" <<rightn <<"=";
               cin >> userAnswer;
           }
       break;

       default:
           cout << "Display error -1" << endl << "contact DaneMcClary on Github";
       break;

}


    if (userAnswer == correctAnswer) {
        cout << endl << "Your answer is correct." << endl;
    }
    else {
        cout << endl << "The correct number is " << correctAnswer << endl;
    }


  //  cout << endl << endl;
    //cout << "What is " << leftn << " + " << rightn << "?" << endl;
    // Asking the big question
   // cin >> answer;
    // Getting an answer for the question
 //   cout << "Thank you for using our beta version of Math Tutor! More is on the way." << endl;


    return 0;
}
