#include<iostream>

int main(){
    int numbers[6]{5,10,15,50,80,90};

    std::cout << "Array memory: " << numbers << std::endl;
    std::cout << "Array memory: " << *numbers << std::endl;

    for(int i=0; i<6; i++){
        std::cout << numbers + i << "\t";

    }

    for(int n: numbers){

        std::cout << n << "\t";
    }

    std::cout << std::endl;

    std::cin.get();

    return 0;

}