/*
*   PRACTICE EXAM #1: PRACTICAL PART
*   Filename: main.c
*   This file allows a user to run any of the 3 problems for Practical Exam #1
*   Last modified by: Angel F. Garcia (2/19/2021)
*/
#include <stdio.h>
#include <string.h>
#include <math.h>


int main(void) {

  int opt;
  printf("Enter 1 to test P1, 2 to test P2, 3 to test P3: ");
  scanf("%d", &opt);
  
  if(opt == 1) {
    
    /***************************
     *  Problem 1: Last Digits
     ***************************/
    
    // TODO: Fix the code below.
    int x, y;
    scanf("%d %d", &x, &y);

    int x_digit = x % 100;
    int y_digit = y % 100;

    if(x_digit == y_digit) {
      printf("TRUE");
    }
    else{

    printf("FALSE");
    }
    /* Problem 1 End */
  } else if(opt == 2) {
    
    /***************************
     *  Problem 2: Lotto
     ***************************/
    char winner[5] = {'7', '2', '3', '9'};
    char ticket[5];
    int counter = 0;


    // TODO: Your P2 code goes here
    
    scanf("%s", ticket);

    if(ticket[0] == winner[0]){
      
      counter++;
    }
    

     if(ticket[1] == winner[1])
    counter++;

     if(ticket[2] == winner[2])
    counter++;

     if(ticket[3] == winner[3])
    counter++;

    if(counter == 4){
      printf("1st Prize!\n");
    }
        if(counter == 3){
      printf("2nd Prize!\n");
    }
            if(counter == 2){
      printf("3rd Prize!\n");
    }
            if(counter < 2){
      printf("No Prize! Better luck next time!\n");
    }

    
    /* Problem 2 End */
  } else if(opt == 3) {
    
    /***************************
     *  Problem 3: Hex2Dec
     ***************************/
    char hex_in[4];
    scanf("%s", hex_in);

    //TODO: Your P3 code goes here
    int number=0;
    int multiplier;
    int changer = 0;
    
    for(int i = 0; i < strlen(hex_in); i++){
      multiplier = 0;
      if (hex_in[changer] == '1')
        multiplier = 1;
      else if (hex_in[changer] == '2')
      multiplier = 2;
      else if (hex_in[changer] == '3')
      multiplier = 3;
      else if (hex_in[changer] == '4')
      multiplier = 4;
      else if (hex_in[changer] == '5')
      multiplier = 5;
      else if (hex_in[changer] == '6')
      multiplier = 6;
      else if (hex_in[changer] == '7')
      multiplier = 7;
      else if (hex_in[changer] == '8')
      multiplier = 8;
      else if (hex_in[changer] == '9')
      multiplier = 9;
      else if (hex_in[changer] == 'a' || hex_in[changer] == 'A')
      multiplier = 10;
      else if (hex_in[changer] == 'B' || hex_in[changer] == 'b')
      multiplier = 11;
      else if (hex_in[changer] == 'c' || hex_in[changer] == 'C')
      multiplier = 12;
      else if (hex_in[changer] == 'd' || hex_in[changer] == 'D')
      multiplier = 13;
      else if (hex_in[changer] == 'e' || hex_in[changer] == 'E')
      multiplier = 14;
      else if (hex_in[changer] == 'f'|| hex_in[changer] == 'F')
      multiplier = 15;

        changer++;
        number = number + pow(16, (strlen(hex_in) - changer)) * multiplier;
  
    }
    printf("%d\n", number);


    /* Problem 3 End */
  }
}
