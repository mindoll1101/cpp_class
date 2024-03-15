#include<iostream>

void print_status(int strike, int ball, int chances){
    if(strike == 3){
        std::cout << "You win!" << std::endl;
    }
    else{
        std::cout << "Strikes: " << strike << ", Balls: " << ball << std::endl;
    }
}