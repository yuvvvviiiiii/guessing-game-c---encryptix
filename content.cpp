// Creating  a number (1-100) guessing game using c++.

#include <bits/stdc++.h>
#include <cstdlib>
#include <ctime>
using namespace std;

int main(){
    srand((unsigned int) time(NULL)); //to randomly generate numbers.

    int num = (rand() % 100) + 1; //limiting the range to 1 - 100.
    cout << num<<endl;
    int guess = 0;
    // do while loop to what to do and when to stop
    do{
        cout << "Enter guess(1 - 100): "<<endl;
        cin >> guess;

        if(guess > num)
            cout<< "Guess Lower!"<<endl;
        else if(guess < num)
            cout << "Guess Higher!"<<endl;
        else 
            cout<< "You won!"<<endl;
        
    // if guess == num than the game is won so the code stops here.
    } while(guess != num);
}