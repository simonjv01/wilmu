#include <iostream>

using namespace std;



int main() 
{
    char l;
    char isVowel(char l);
    bool trueOrFalse;
    
    

    cout << "Enter a letter: " << endl;
    cin >> l;
   

    if (isVowel(l) == true)
    {
        cout << l << " is a vowel:" << " " << true << endl;
    } else
        cout << l << " is not a vowel: " << " " << false << endl;   

    return 0;

}

char isVowel(char l)
{

    bool isT = true;
    bool isF = false;
    switch (l)
    {
    case 'a':
        return isT;
        break;
    case 'A':
        return isT;
    case 'e':
        return isT;
    case 'E':
        return isT;
    case 'i':
        return isT;
    case 'I':
        return isT;
    case 'o':
        return isT;
    case 'O':
        return isT;
    case 'u':
        return isT;
    case 'U':
        return isT;
    default:
        return isF;
        break;
    }
    
    
}


