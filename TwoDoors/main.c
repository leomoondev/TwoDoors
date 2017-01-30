//
//  main.c
//  TwoDoors
//
//  Created by Leo Moon on 2017-01-24.
//  Copyright © 2017 leomoon. All rights reserved.
//

#include <stdio.h>

void gamePlay();
int choice = 0;

int main(int argc, const char * argv[]) {
    
    char play;
    
    printf("Welcome to Two doors.\n");
    printf("Would you like to play? (y/n): ");
    scanf("%c", &play);

    if (play == 'y') {
        
        gamePlay();

    }
    else if (play == 'n') {
        
        printf("Bye\n");

        return 0;
    }
    
    do {
        
        printf("Welcome to Two doors.\n");
        printf("Would you like to play? (y/n): ");
        scanf("%*c%c", &play);
        
        if (play == 'y') {
            
            gamePlay();
        }
        
        else if (play == 'n') {
            
            printf("Goodbye\n");
            return 0;
        }
        
    } while (play == 'y');
    
    return 1;
}

void gamePlay() {
    
    printf("\nYou are a prisoner in a room with 2 doors and 2 guards.\n");
    printf("One of the doors will guide you to freedom and behind the other is a hangman --you don't know which is which.\n");
    printf("One of the guards always tells the truth and the other always lies. You don't know which one is the truth-teller or the liar either.\n");
    printf("You have to choose and open one of these doors, but you can only ask a single question to one of the guards.\n");
    printf("What do you ask so you can pick the door to freedom?\n\n");
    printf("\t1.Ask the truth-guard to point to the door of doom.\n");
    printf("\t2.Ask the liar-guard to point to the door of doom.\n");
    printf("\t3.Doesn't matter which one you pick.\n");
    scanf("%d", &choice);
    
    char *answer = "No matter which one you choose the guards both tell you which door leads to death, and therefore you can pick the other door.\n";
    
    switch (choice) {
            
        case 1:
            printf("%s", answer);
            break;
        case 2:
            printf("%s", answer);
            break;
        case 3:
            printf("%s", answer);
            break;
        default:
            break;
    }
}
