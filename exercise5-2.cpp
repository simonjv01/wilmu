#include <iostream>

using namespace std;

int main() 
{
    int firstNum, secondNum, sumNum = 0;
    int squareNum = 0;
    int sumSquareOdd = 0;
    int j = 1;
    int squareJ;
    int l = 65;


    do
    {
        cout << "Please enter two numbers separated by a space. The first number must be less than second number: " << endl;
        cin >> firstNum >> secondNum;
    } while (secondNum <= firstNum);
        int i = firstNum;
        while (i <= secondNum)
   
        {
            
            if (i % 2 != 0)
                {
                    cout << i << " ";
                    sumSquareOdd = sumSquareOdd + (i * i);
             
                }
               
             else if(i % 2 == 0 )
                {
                    sumNum = sumNum + i;
                }
                i++; 
        }

       
              cout << sumNum << " ";
              cout << squareNum << " ";
              cout << sumSquareOdd << " ";
              
        
             while (j <= 10)
             {
                 squareJ = j * j;
                 cout << j <<" " << squareJ << " ";
                  j++;
             }

              while (l <= 90)
               {
                
                   cout << (char)l << " ";
                   l++;
               }

                return 0;
                 
             }
             

            
        
        
    
