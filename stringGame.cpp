#include<iostream>
#include<string>

int main(){
    char message[20] = "Hello";
    char textInput[20];

    std::cout << "Please Insert your guess below: \n";
    std::cin >> textInput;

    int result = strcmp(message, textInput);

    if(result == 0){
        std::cout << "You answered correctly \n";
   }
    else{
        std::cout << "You answered Incorrectly \n";
   }


    return 0;
}