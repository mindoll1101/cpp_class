#include<iostream>
#include<array>

void print_status(int strike, int ball);
int random();

void strike_ball(int a, int b){
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
    print_status(strike, ball);

}

void game(){
    int a = random(); //create random answer
    std::cout << "Answer is " << a/100 << (a%100)/10 << a%10 << std::endl;
    int b = 0;
    while(a != b){
        std::cout << "Enter a guess: ";
        std::cin >> b;
        strike_ball(a, b);
    }
}

