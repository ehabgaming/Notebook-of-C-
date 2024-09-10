// LabO.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

      //  ##   ##   #####  #####       ##### ##   ##   #####  #####  
      //  ###  ##  ##   ##   ##        ##    ##   ##  ##   ## ##   ## 
      //  ## # ##  ##   ##   ##        ####  #######  ####### ######  
      //  ##  ###  ##   ##   ##        ##    ##   ##  ##   ## ##   ## 
      //  ##   ##   #####    ##        ##### ##   ##  ##   ## ##### 

#include <iostream>


bool IsLeapYear(int Year);
int DaysInMonth(int Month , int Year);

using namespace std;
int main()
{
    int Month, Day, Year;
    
    cout << "Input a Month: ";
    cin >> Month;
    cout << "\nInput a Day: ";
    cin >> Day;
    cout << "\nInput a Year: ";
    cin >> Year;

    cout << "\nThe date enterd is: " << Month << "/" << Day << "/" << Year << endl;

    return 0;

    
}

bool IsLeapYear(int Year)                            //How This Works: Step By Step
{                                                    //Step One: Checks if Year is Divisible by 4 (checks to see if even)
    if(Year % 4 == 0)                                //--If its not Even, then its NOT a Leap Year.                                
    {                                                
        if (Year % 100 == 0)                         //Step Two: Checks if Year is Divisible by 100
        {                                            //--If its not Even, THEN IT IS A LEAP YEAR.
            if (Year % 400 == 0)
            {                                        //Step Three: Checks if Year is Divisible by 400
                return true;                         //--If its not Even, Then its NOT a Leap Year.
            }
        }
        else
        {
            return true;
        }
    }
    return false;
}

int DaysInMonth(int Month,int Year)
{
    switch (Month)                                                      // CODE TO WORDS: how it works
    {                                                                   //
    case 1: case 3: case 5: case 7: case 8: case 10: case 12:           // If the Month is 1(January), 3(March), 5(May), 7(July), 8(August), 10(October), 12(December)      
        return 31;                                                      // then the number of days in that month is 31.
    case 4: case 6: case 9: case 11:                                    //
        return 30;                                                      //If the Month is 4(April), 6(June), 9(September), 11(November)
    case 2:                                                             //then the number of days in that month is 30.
        return IsLeapYear(Year) ? 29 : 28;   //Short Hand If-Else       //
                                                                        //If the Month is 2(February)
        default:                                                        //then the number of days in that month is 28 But if its a Leap Year, Then the number of days in that month is 29.
            break;                                                      //
    }                                                                   //If the number is not any of the months(1-12) then its Invalid
}
