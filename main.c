#include <stdio.h>

char box[9] = {'1', '2','3','4','5','6','7','8','9'};

//board function
void board(){

    printf("\n\n\tLet's Play Tic Tac Toe\n\n");

    printf("Player 1 (X)  -  Player 2 (O)\n\n\n");


    printf("     |     |     \n");
    printf("  %c  |  %c  |  %c \n", box[0], box[1], box[2]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", box[3], box[4], box[5]);

    printf("_____|_____|_____\n");
    printf("     |     |     \n");

    printf("  %c  |  %c  |  %c \n", box[6], box[7], box[8]);

    printf("     |     |     \n\n");
}

//function to check the winner
int checkWinner(){
   if (box[0] == box[1] && box[1] == box[2] ){
    return 1;
   }
   else if (box[0] == box[3] && box[3] == box[6] ){
    return 1;
   }
   else if (box[1] == box[4] && box[4] == box[7] ){
    return 1;
   }
   else if (box[0] == box[4] && box[4] == box[8] ){
    return 1;
   }
   else if (box[2] == box[4] && box[4] == box[6] ){
    return 1;
   }
   else if (box[3] == box[4] && box[4] == box[5] ){
    return 1;
   }
   else if (box[2] == box[5] && box[5] == box[8] ){
    return 1;
   }
   else if (box[6] == box[7] && box[7] == box[8] ){
    return 1;
   }
   else if (box[0] != '1' && box[1] != '2' && box[2] != '3' && box[3] != '4' && box[4] != '5' && box[5] != '6'&& box[6] != '7'&& box[7] != '8'
   && box[8] != '9'){
    return 0;
   }
   else{
    return -1;
   }
}

int main(){
    int player = 1, choice, status;
    char symbol;

    do{
        board();
        player = (player % 2) ? 1 : 2;
        printf("Player %d, enter your move: ", player);
        scanf("%d", &choice);
        symbol = (player == 1) ? 'X' : 'O';

        if (choice == 1 && box[0] == '1'){
            box[0] = symbol;
        }
        else if (choice == 2 && box[1] == '2'){
            box[1] = symbol;
        }
        else if (choice == 3 && box[2] == '3'){
            box[2] = symbol;
        }
        else if (choice == 4 && box[3] == '4'){
            box[3] = symbol;
        }
        else if (choice == 5 && box[4] =='5'){
            box[4] = symbol;
        }
        else if (choice == 6 && box[5] == '6'){
            box[5] = symbol;
        }
        
        else if (choice == 7 && box[6] == '7'){
            box[6] = symbol;
        }
        else if (choice == 8 && box[7] == '8'){
            box[7] = symbol;
        }
        else if (choice == 9 && box[8] =='9'){
            box[8] = symbol;
        }
        else{
            printf("Invalid Move");
            player--;

        }
        status = checkWinner();
        player ++;
    } while (status == -1);

    board();
    if (status == 1){
        printf("==>\a Player %d WINS ", --player);
    }
    else{
        printf("==>\aGame ends in a DRAW");
    }
    
    

}