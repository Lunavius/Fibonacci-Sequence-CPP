#include <iostream>
#include <string>

using namespace std;

void quiz();
void fibonacci(unsigned long long count);

int main(){
    unsigned long long userInput = 0;
    std::cout << "Enter a random number: \n";
    std::cin >> userInput;
    fibonacci(userInput);
    quiz();

    return 0;
}


void quiz(){
    string userAnswer = "";
    std::cout << "whats the name of the sequence? \n";

    std::cin >> userAnswer;

    string correctAnswer = "fibonacci";

    if(userAnswer == correctAnswer){
        std::cout << "Correct! \n";
    }
    else{
        std::cout << "Incorrect! \n";
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