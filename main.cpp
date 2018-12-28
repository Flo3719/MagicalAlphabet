#include <iostream>
using namespace std;
/*
 
 Inputs:
 
 T:  Number of input words (int)
 N:  Lenght of next input word string (int)
 S:  input word string (string)
 
 Outputs:
 
 The closest prime numbered ASCII letter for each letter of the input string.
 
 
 */

//Function that takes a number and returns true or false if it is a prime number.
bool primetest(int inputInt){
    for(int i = 2;i<inputInt;i++){
        if(inputInt % i == 0){
            return false;
        }
    }
    return true;
}


//Funcion that takes a number(a dec ASCII-code) and finds the closest prime ASCII code which translates to a real letter.
//If a ASCII code is equidistant to two prime numbers it returns the lower one.
//The function return a ASCII code integer.
int findClosestPrime(int inputInt){
    int functionOutputInt;
    int closestPrime = 0;
    
    //Loop to look upwards of the given number
    for(int i = inputInt;i <= 123; i++){
        if(primetest(i) == true){
            closestPrime = i;
            break;
        }
    }
    //Loop to look downwards of the given number and replace the result of the first Loop if the distance is smaller or the same.
    for(int i = inputInt;i >= 65; i--){
        if(primetest(i) == true && inputInt - i <= closestPrime - inputInt){
            closestPrime = i;
            break;
        }
    }
    functionOutputInt = closestPrime;
    return functionOutputInt;
}





int main(){
    
    int T;
    cin >> T;
    
    for(int i = 0;i<T;i++){
        // Main loop that goes through all input words
        int N;
        string S;
        string outputWord;
        
        cin >> N;
        cin >> S;
        
        
        for(int j = 0;(unsigned)j<S.length();j++)
        {
            // Loop that goes thought all characters of input string
            //bool letterIsPrime;
            int ASCIIforChar;
            char currentChar;
            
            currentChar = S.at(j);
            ASCIIforChar = int(currentChar);
            
            //All ASCII codes which are below or higher that the letter dataspace will be converted to the code of their closest prime letter ("C", "q")
            if(ASCIIforChar < 67){
                ASCIIforChar = 67;
            }
            if(ASCIIforChar > 113){
                ASCIIforChar = 113;
            }
            
            //Test if a ASCII code is already a prime number
            if(primetest(ASCIIforChar) == true){
                outputWord += char(ASCIIforChar);
            }
            else{
                outputWord += findClosestPrime(ASCIIforChar);
            }
            
        }
        
        cout << outputWord << endl;
        
    }
    return 0;
}




