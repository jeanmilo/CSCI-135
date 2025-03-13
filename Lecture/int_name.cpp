//File name: /Users/laptopuser/Documents/courses/cs135/s22/progs/exercises/method/int_name_incomplete.cpp
#include <iostream>
#include <cassert>
using namespace std;

//convert 1-9 to Engligh name
string digit_name(int n);

//convert 10-19 to Engligh name
string teen_name(int n);

//convert 20-29, 30-39, ..., 90-99 
//to Engligh name of its tens
string tens_name(int n);

//convert 1 to 99 to English name
string oneTo99_name(int n);

//convert 1-999 to English name
string int_name(int n); 

int main()
{
    assert(int_name(100) == "one hundred");       assert(int_name(120) == "one hundred twenty");
    assert(int_name(312) == "three hundred twelve");
    assert(int_name(16) == "sixteen");
    assert(int_name(7) == "seven");
    assert(int_name(607) == "six hundred seven");
    assert(int_name(0) == ""); //no process
    assert(int_name(-1) == ""); //no process
    assert(int_name(999) == "nine hundred ninety nine");
    assert(int_name(1000) == ""); //no process
    return 0;
}

string digit_name(int n)
{
    if (n == 1)
       return "one";
    if (n == 2)
       return "two";
    if (n == 3)
       return "three";
    if (n == 4)
       return "four";
    if (n == 5)
       return "five";
    if (n == 6)
       return "six";
    if (n == 7)
       return "seven";
    if (n == 8)
       return "eight";
    if (n == 9)
       return "nine";

    //any number other than 1 to 9
    return "";
}

string teen_name(int n)
{
    switch (n)
    {
       case 10: return "ten";
       case 11: return "eleven";
       case 12: return "twelve";
       case 13: return "thirteen";
       case 14: return "fourteen";
       case 15: return "fifteen";
       case 16: return "sixteen";
       case 17: return "seventeen";
       case 18: return "eighteen";
       case 19: return "nineteen";
       default: return "";
       //default means "all the rest"
    }
}

//convert 20-99 to its tens name
string tens_name(int n)
{
    string str;
    switch (n / 10)
    {
       case 2: str = "twenty";
               break; //break means jump
               //out the current switch block,
               //break can jump out current
               //repetition block as well.
               //give me a break 
               //(or return; which is stronger
               //then break;
               //return means to leave
               //the current function
               //and return to its caller)
               //after each case!
       case 3: str = "thirty";
               break;
       case 4: str = "forty";
               break;
       case 5: str = "fifty";
               break;
       case 6: str = "sixty";
               break;
       case 7: str = "seventy";
               break;
       case 8: str = "eighty";
               break;
       case 9: str = "ninety";
               break;
       default: str = "";
                //break in the last case
                //can be omitted
    }
    return str;

    /* another implementation that is like
       to peel an onion
    */
//    if (n >= 90) 
//       return "ninety";
//    if (n >= 80)
//       return "eighty";
//    if (n >= 70)
//       return "seventy";
//    if (n >= 60)
//       return "sixty";
//    if (n >= 50)
//       return "fifty";
//    if (n >= 40)
//       return "forty";
//    if (n >= 30)
//       return "thirty";
//    if (n >= 20)
//       return "twenty";
//    return "";

//The above implementation is the same as
//the following, since return is very strong,
//if not return from if-part of (n >= 90),
//if (n >= 90)
//   return "ninety";
////At this point, n must be < 90.
//So we omit else before if (n >= 80),
//and so on.

//    if (n >= 90) 
//       return "ninety";
//    else if (n >= 80)
//            return "eighty";
//         else if (n >= 70)
//                 return "seventy";
//              else if (n >= 60)
//                      return "sixty";
//                   else if (n >= 50)
//                           return "fifty";
//                        else if (n >= 40)
//                                return "forty";
//                             else if (n >= 30)
//                                     return "thirty";
//                                  else if (n >= 20)
//                                          return "twenty";
//                                       else return "";
}

//convert 1 - 99 to English name
string oneTo99_name(int n)
{
    //TODO 
    //return "" when ints are out of [1, 99].

    //TODO: work on 20-99.

    //TODO: work on 10-19.

    //TODO: work on 1-9.
}

//convert 1-999 to English
string int_name(int n)
{
    //TODO: return "" 
    //when n is out of [1, 999].

    //TODO: return English name 
    //when n is in [1, 999].
}
