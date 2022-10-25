#include <iostream>
#include <cstdlib>
#include <string.h>
using namespace std;


int main(){

int categoryIndex;
string word = "";
char letter;
string names[] = {"Aela", "Evan", "Aidan", "Keanna", "Kaylan", "Ava", "Mireille"};
string countries[] = {"Rwanda", "Burundi", "Kenya", "Tanzania", "Congo", "Sudan", "America"};
string colors[] = {"Red", "White", "Blue", "Yellow", "Black", "purple", "Violet"};
string animals[] = {"pig", "cow", "cat", "sheep", "goat", "rat", "gorilla"};
string categories[] = {"names", "countries", "colors", "animals"};


cout << "--------------WELCOME TO THE GUESSING GAME------------------ \n \n \n";


//display and choose category
for(int i = 0; i <(sizeof(categories) / sizeof(*categories)); i++){
cout << i + 1 << "." << categories[i] << endl;
}
cout << "Please select the category(eg : 1 for names):";
cin >> categoryIndex;

// choose a random word;
int random = rand() % 6;
//cout << random;
switch(categoryIndex){

    case 1:
word = names[random];
cout << word << endl;
break;
case 2:
word = countries[random];
cout << word << endl;
break;
case 3:
word = colors[random];
cout << word << endl;
break;
case 4:
word = animals[random];
cout << word << endl;
}

//choose a letter of the alphabet

cout << "Choose any letter of the alphabet " <<  endl;
cin >> letter;

for(std::string::size_type i = 0; i < word.size(); ++i) {
if(word[i] != letter){
    word.replace(i, 1, "-");
    }
}
cout << word;

string guessedWord;

cout << "Give it a try: ";
cin >> guessedWord;


if(guessedWord == word){
cout  << "----- You win------";
}else{
cout << "-------You lose------";
}


return 0;
}
