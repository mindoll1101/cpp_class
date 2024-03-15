#include<iostream>
#include<ctime>
#include<random>

void print_status(int strike, int ball, int chances){
    if(strike == 3){
        std::cout << "You win!" << std::endl;
    }
    else if(chances == 1){
        std::cout << "You lose!" << std::endl;
    }
    else{
        std::cout << "Strikes: " << strike << ", Balls: " << ball << std::endl;
    }
}

int random(){
    std::mt19937 gen(time(NULL));
    std::uniform_int_distribution<int> dist(0, 9);
    int a = dist(gen); //create random answer
    int b = dist(gen);
    int c = dist(gen);
    while(a == b || b == c || a == c){
        if(a == b){
            b = dist(gen);
        }
        if(b == c){
            c = dist(gen);
        }
    }
    return a * 100 + b * 10 + c;
}