//WAP to create quiz application.
#include <iostream>
using namespace std;

int main() {
    int answer, score = 0;

    cout << "===== Quiz Application =====\n\n";

    // Question 1
    cout << "1. What is the capital of India?\n";
    cout << "1. Mumbai\n2. Delhi\n3. Kolkata\n4. Chennai\n";
    cout << "Enter your answer: ";
    cin >> answer;

    if (answer == 2)
        score++;

    // Question 2
    cout << "\n2. Which language is primarily used for Android development?\n";
    cout << "1. Java\n2. Python\n3. C\n4. HTML\n";
    cout << "Enter your answer: ";
    cin >> answer;

    if (answer == 1)
        score++;

    // Question 3
    cout << "\n3. How many days are there in a week?\n";
    cout << "1. 5\n2. 6\n3. 7\n4. 8\n";
    cout << "Enter your answer: ";
    cin >> answer;

    if (answer == 3)
        score++;

    // Display Result
    cout << "\n===== Result =====\n";
    cout << "Your Score: " << score << " out of 3\n";

    if (score == 3)
        cout << "Excellent!\n";
    else if (score == 2)
        cout << "Good Job!\n";
    else
        cout << "Keep Practicing!\n";

    return 0;
}