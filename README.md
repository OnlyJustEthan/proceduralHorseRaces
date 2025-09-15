# proceduralHorseRaces

```
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
```