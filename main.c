/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   main.c
 * Author: kingJ
 *
 * Created on February 11, 2017, 12:32 AM
 */

#include <stdio.h>
#include <stdlib.h>
typedef union{
    short count;
    float weight;
    float volume;
   
}quantity;
typedef struct {
    const char *name;
    const char *country;
    quantity amount;
}fruit_order;

/*
 * 
 */
int main(int argc, char** argv) {
    fruit_order apples ={"apple", "England", .amount.weight=4.2};
    printf("This order contain %2.2f lbs of %s\n", apples.amount.weight,apples.name);
    
    return (EXIT_SUCCESS);
}

