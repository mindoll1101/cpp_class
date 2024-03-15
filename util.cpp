#include<iostream>
#include<ctime>
#include<random>

void print_status(int strike, int ball){
    if(strike == 3){
        std::cout << "You win!" << std::endl;
    }
    else{
        std::cout << "Strikes: " << strike << ", Balls: " << ball << std::endl;
    }
}

int random(){
    std::mt19937 gen(time(NULL));
    std::uniform_int_distribution<int> dist(0, 999);
    int a = dist(gen); //create random answer
    return a;
}