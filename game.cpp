#include<iostream>
#include<array>

void print_status(int strike, int ball, int chances);
int random();

void strike_ball(int a, int b, int chances){
    int strike = 0, ball = 0;       //variable to save strikes and balls.

    std::array<int, 3> num_a;       //array to save answer and guess.
    std::array<int, 3> num_b;
    num_a[0] = a/100;
    num_a[1] = (a%100)/10;
    num_a[2] = a%10;

    num_b[0] = b/100;
    num_b[1] = (b%100)/10;
    num_b[2] = b%10;
    for(int i = 0; i < 3; i++){
        if(num_a[i] == num_b[i]){   //count strikes
            strike += 1;
        }
        else{
            for(int j = 0; j < 3; j++){
                if(i != j && num_a[i] == num_b[j]){     //count balls
                    ball += 1;
                }
            }
        }
    }
    print_status(strike, ball, chances);

}

void game(){
    int a = random(); //create random answer
    int b = -1;
    int chances = 5;
    while(a != b && chances > 0){
        std::cout << chances << " chances left." << std::endl;
        std::cout << "Enter a guess: ";
        std::cin >> b;
        strike_ball(a, b, chances);
        chances -= 1;
    }
}

