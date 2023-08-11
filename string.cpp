#include <iostream>
using namespace std;

int main() {
	char my_string[]="yash";
   printf("%s\n",my_string);
   
   
   cout<<"take a break"<<endl;
   //the last character store in character array is zero
   
   
    for(int i=0;my_string[i]!=0;i++ ){
        cout<< my_string[i]<<endl;
    }
     cout<< "take a break 2"<<endl;
    for(char ch: my_string){
        cout<< "the character is "<< ch<<endl;
    }
    // we can iterate like these over the pointer of the array;
	return 0;
}

//op--       // yash
            // take a break
            // y
            // a
            // s
            // h
            // take a break 2
            // the character is y
            // the character is a
            // the character is s
            // the character is h
            // the character is 
