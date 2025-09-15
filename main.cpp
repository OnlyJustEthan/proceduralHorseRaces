/* Algorithm

main():
    Make list of horse positions (All starting at 0)
    keepGoing = true
    while(keepGoing):
        for(int horse = 0, horse > 4, horse++):
            advance(horse, horseList)
            printLine(horse, horseList)
            if horse has advanced 15 times:
                isWinner
        print "Enter to continue"

advance(horse, horseList):
    for horse number in list:
        add either 0 or 1 to value in list
        isWinner(horse, horseList)


printLane(horse, horseList):
    spaces before = (current horse progress)
    spaces after = (15 - current horse progress)
    for number of spaces before position:
        print period
    print number
    for number of spaces after position:
        print period
    print newline


isWinner(horse, horseList):
    print "The current horse is the winner!"
    return(true)

*/

#include <iostream>
#include <random>
#include <string>
// Seeding the random number generator
std::random_device rd;
std::uniform_int_distribution<int> dist(0, 1);


// Function Prototypes
void advance(int horseNum, int* horses);
void printLane(int horseNum, int* horses);
bool isWinner(int horseNum, int* horses);

int main(){
    int tempSentry = 0;
    int horse = 0;
    int horseList[5] = {0,0,0,0,0};
    bool keepGoing = true;
    while (keepGoing){
        for (horse = 0; horse < 5; horse++){
            advance(horse, horseList);
            printLane(horse, horseList);
            //std::cout<<"Horse "<< horse <<" progress: "<<(horseList[horse])<<std::endl;
            if(horseList[horse] >= 15){
                isWinner(horse, horseList);
                keepGoing = false;
            }// End if
        }// End for
        tempSentry++;
        if (keepGoing){
            std::cout << "Press enter to run the next cycle" << std::endl;
            std::cin.ignore();
        } // End if

    } // End game while
    
} // End main

void advance(int whichHorse, int array[]){
    int coin = dist(rd);
    //std::cout << "Coin result: " << coin <<std::endl; // Result Test
    array[whichHorse] += coin;
} // End advance

void printLane(int whichHorse, int array[]){
    int before = array[whichHorse];    
    //std::cout << "Pips Before: " << before <<std::endl; // Result Test
    int after = (15 - array[whichHorse] - 1);    
    //std::cout << "Pips After: " << after <<std::endl; // Result Test
    for (int sentry = 0; sentry < before; sentry++){
        std::cout << ".";
    } // End before . for
    if (before < 15){
        std::cout << whichHorse;
    }// End if
    for (int sentry = 0; sentry < after; sentry++){
        std::cout << ".";
    } // End after . for
    std::cout << std::endl;
} // End printLane

bool isWinner(int whichHorse, int array[]){
    std::cout << whichHorse << " is the winner!" << std::endl;
    return(true);
} // End isWinner