/*
  if (condition1) {
  // block of code to be executed if condition1 is true
} else if (condition2) {
  // block of code to be executed if the condition1 is false and condition2 is true
} else {
  // block of code to be executed if the condition1 is false and condition2 is false
}
*/
#include <iostream>
using namespace std;

int main()
{
    int score{};
    cout << "Enter your score on he exam (0-100) : ";
    cin >> score;

    char letter_grade {};

    if(score >= 0 && score <=100) {
        if(score >= 90)
            letter_grade = 'A';
        else if (score >= 80)
            letter_grade = 'B';
        else if (score >= 70)
            letter_grade = 'C';
        else if (score >= 60)
            letter_grade = 'D';
        else
            letter_grade = 'F';
        cout << "Your grade is : " << letter_grade << "\n";

        if (letter_grade == 'F')
            cout << "Sorry, you must repeat the class" << "\n";
        else
            cout << "Congrats!" << "\n";
        
    } else {
        cout << "Sorry, " << score << " is not in range:\n";
    }

    return 0;
}