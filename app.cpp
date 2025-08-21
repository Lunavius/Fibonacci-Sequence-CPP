#include <iostream>
#include <string>

using namespace std;

void quiz();
void fibonacci(unsigned long long count);

int main(){
    unsigned long long userInput = 0;
    cout << "Enter a random number: \n";
    cin >> userInput;
    fibonacci(userInput);
    quiz();

    return 0;
}


void quiz(){
    string userAnswer = "";
    cout << "whats the name of the sequence? \n";

    cin >> userAnswer;

    string correctAnswer = "fibonacci";

    if(userAnswer == correctAnswer){
        cout << "Correct! \n";
    }
    else{
        cout << "Incorrect! \n";
    }
}

void fibonacci(unsigned long long count){
    unsigned long long n1 = 0;
    unsigned long long n2 = 1;


    while(n2 < count){
        cout << n2 << "\n";
        n2 = n1 + n2;
        n1 = n2 - n1;
    }

}