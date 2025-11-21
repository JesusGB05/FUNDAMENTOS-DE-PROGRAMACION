#include "difference_of_squares.h"

unsigned int square_of_sum(unsigned int number){
    unsigned int var=0; 
    unsigned int suma=0;
    for (var=0; var < number+1;var++){
        suma+=var;
    }
    suma=suma*suma;
    return suma;
}

unsigned int sum_of_squares(unsigned int number){
    unsigned int var=0; 
    unsigned int suma=0;
    for (var=0; var< number+1;var++){
        suma+=var*var;
    }
    return suma;
}

unsigned int difference_of_squares(unsigned int number){
    return square_of_sum(number)-sum_of_squares(number);
    
}