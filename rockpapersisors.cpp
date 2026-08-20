#include<iostream>
#include<ctime>
char playerchoice();
char computerchoice();
void showchoice(char choice);
void displaywinner(char player,char computer);

int main(){
    char computer,player;
    player=playerchoice();
    std::cout<<"Player choice is: \n";
    showchoice(player);
    computer=computerchoice();
    std::cout<<"computer choice is: \n";
    showchoice(computer);
    displaywinner(player,computer);
    return 0;
}
char playerchoice(){
    char choice;
    do{
        std::cout <<"'r' for Rock\n";
        std::cout <<"'p' for Paper\n";
        std::cout <<"'s' for Scissors\n";
        std::cout <<"Enter your choice: ";
        std::cin  >>choice;

    }while(choice != 'r' && choice != 's' && choice != 'p');
    return choice;
}
char computerchoice(){
    int num;
    srand(time(0));
    num=rand()%3+1;
    switch (num)
    {
    case 1: return 'r';
    case 2: return 'p';
    case 3: return 's';
    }

}
void showchoice(char choice){
    switch (choice){
        case 'r': std::cout <<"Rock\n";
                break;
        case 'p': std::cout <<"Paper\n";
                break;
        case 's': std::cout  <<"Scissors\n";
                break;
    }
}
void displaywinner(char player,char computer){
    switch(player){
        case 'r': if(computer=='r'){
                    std::cout <<"Its a tie!\n";
                  }
                else if(computer=='p'){
                    std::cout <<"You Lose\n";
                }
                else{
                    std::cout <<"You Won\n";
                }
                break;
        case 's': if(computer=='s'){
                    std::cout <<"Its a tie!\n";
                  }
                else if(computer=='r'){
                    std::cout <<"You Lose\n";
                }
                else{
                    std::cout <<"You Won\n";
                }
                break;
        case 'p': if(computer=='p'){
                    std::cout <<"Its a tie!\n";
                  }
                else if(computer=='s'){
                    std::cout <<"You Lose\n";
                }
                else{
                    std::cout <<"You Won\n";
                }
                break;
    }

}