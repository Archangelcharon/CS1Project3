/* Project #: CSProject3
 * Author: Zach Oryszak-Ley
 * Due: 10/31/2011
 * Description
 *	Part 1: Framework for part 2
 * 	Part 2: Animal Functions
 */

#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

//initializing all the functions.
int start();
int callfarmer(int);
void cow();
void cat();
void dog();
void pig();
void duck();
void squirrel();
void hippie();
void terminator();
void baby();
void demon();

int returnRandom(){
    return (rand()%(10)+1); 
}
int main(){
        srand(time(0));
        start();
    return 0;
}

int start(){
    //Making it loop 10 times.
    for (int i=0; i < 10; i++){
    int x;
    x = returnRandom();
    callfarmer(x);
}
}
//Function with all the animals and noises each in its own function
int callfarmer(int x){
    cout << "The farmer says, ";
    switch(x){
        case 1: cow();
        break;
        case 2: cat();
        break;
        case 3: dog();
        break;
        case 4: pig();
        break;
        case 5: duck();
        break;
        case 6: squirrel();
        break;
        case 7: hippie();
        break;
        case 8: terminator();
        break;
        case 9: baby();
        break;
        case 10: demon(); 
        break;
        case 11: cout << "An invalid random number has been selected." << endl;
        break;
    }
}
//Animal Functions
void cow(){
   cout << "\"I have a cow, and the cow says \"Moo!\"" << endl;
}

void cat(){
   cout << "\"I have a cat and it says, \"Meow.\"" << endl;
}
void dog(){
   cout << "\"I have a dog and it says, \"Woof-Woof!\"" << endl;  
}

void pig(){
   cout << "\"I have a pig and it says, \"Oink-Oink\"" << endl;
}
void duck(){
   cout << "\"I have a duck and it says, \"ALFAC!!\"" << endl;
}

void squirrel(){
   cout << "\"I have a squirrel and it says, \"Squeak Squeak\"" << endl;  
}

void hippie(){
   cout << "\"I have a hippie and he says, \"Peace out man!\"" << endl;  
}

void terminator(){
   cout << "\"I have a Terminator and he says, \"GET OUT!! ";
   cout << "Get to da chopper!\"" << endl; 
}

void baby(){
   cout << "\"I have a baby and it says, \"goo-goo.\"" << endl;
}

void demon(){
   cout << "\"I have a demon inside me and it says, \"I have your soul!!!!\"" << endl;  
}
//====Things to do yet:=====
//Check Indentations
