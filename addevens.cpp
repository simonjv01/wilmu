#include <iostream>

using namespace std;

int main()
{
    int firstNum, secondNum, sumNum = 0;
   

        cout << "Please enter two numbers separated by a space.  The first number must be less than second number: " << endl;
        cin >> firstNum >> secondNum;

while (firstNum <= secondNum)
   {
       if(firstNum > 0)
       {
           sumNum = firstNum * firstNum;
           cout << sumNum << " ";

       }
       firstNum++;
   }

    
        
         
    }
    
