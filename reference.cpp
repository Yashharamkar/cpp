// reference-- reference store the reference of the variable
// it store the memory address because memory required to have reference
//reference does not store the value  of the variable
//any changes made to reference direct affect the value of variable
// we pass variable value in pointer by reference and not acutal variable
// reference can be stand alone as well


#include <iostream>
int main(){
    int score=100;
    int *myp=&score;
    printf(" the value of score %d\n",score);
    printf(" the value of pointer %p\n",myp);
    int another_score=score;
    printf(" the value of reference %p\n",another_score);
    another_score=2222;
    printf(" the value of score %d\n",score);
    printf(" the value of reference %p\n",another_score);
     printf(" the value of pointer %p\n",myp);
    return 0;
}

//op-:  the value of score 100
//      the value of pointer 0x7ffc12e3fff4
//     the value of reference 0x64
//      the value of score 100
 //     the value of reference 0x8ae
 //      the value of pointer 0x7ffc12e3fff4
