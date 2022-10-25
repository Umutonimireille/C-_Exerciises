#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){
    int wordCat;
    bool value = false;
    int cnt = 0, i = 0;
    char guessLetter;
    string word;
    string first;
    cout<<"enter one of the category below:\n 1. names of animals\n 2. teams\n 3. districts\n 4. films\n 5. books\n enter your category : ";
    cin>>wordCat;
    string names[5] = {"tigress", "lion", "elephant", "cat", "dog", "pig", "donkey"};
    string teams[5] = {"psg", "liverpool", "arsenal", "mun", "man", "ure"};
    string districts[5] = {"rubavu", "kicukiro", "gasabo", "nyarugenge", "nyabihu"};
    string films[5] = {"swat", "duh", "uhhm", "lesas", "mpbaaa"};
    string books[5] = {"after", "i met you", "muhaa", "lastlast", "itsPlenty"};
    switch(wordCat){
        case 1:
        word = names[rand() % 7];
        break;
        case 2:
        word = teams[rand() % 6];
        break;
        case 3:
        word = districts[rand() % 5];
        break;
        case 4:
        word = films[rand() % 5];
        break;
        case 5:
        word = books[rand() % 5];
    }
    first = word;
    int numberOfTrial;
    int j ;
    string changed;
    //for(j = 0; j<numberOfTrial; j++){
    //cout<<word<<endl;
    cout<<"enter the alphabet you think is in the word : ";
    cin>>guessLetter;
    for(i=0; i<word.length(); i++){
        if(word[i] != guessLetter){
            word[i] = '_';
        }

    }
    changed = word;
    cout<<changed<<endl;
    //}
    char anotherGuess;
    cout<<"\nenter another letter : ";
    cin>>anotherGuess;
    i = 0;
    word = first;
    for(i=0; i<first.length(); i++){
        if(first[i] != guessLetter && first[i] != anotherGuess){
            word[i] = '_';
        }
    }
    changed = word;
    cout<<changed<<endl;
    char thirdGuess;
    cout<<"\nenter the last guess letter : ";
    cin>>thirdGuess;
    word = first;
    for(i=0; i<first.length(); i++){
        if(first[i] != guessLetter && first[i] != anotherGuess && first[i] != thirdGuess){
            word[i] = '_';
        }
    }
    changed = word;
    if(changed == first){
        cout<<"you've won";
    }
    else{
        cout<<"you've lost";
    }

}

