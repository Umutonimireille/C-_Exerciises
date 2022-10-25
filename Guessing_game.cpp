#include<iostream>
#include<cstdlib>
#include<math.h>
#include<string.h>
using namespace std;

int main(){



  string word;
  char str[]="Honore";
  char letter;
  string dash = "-";
  int categotyIndex;
  string animals[] = {"cat,gorilla","pig","dog","bird"};
  string names[] = {"alice","eden","lois","oxane","prince"};
  string colors[]= {"red","white","green","blue","orange"} ;
  string countries[]= {"rwanda","kenya","uganda","burundi","tanzania"};
  string categories[] = {"animals","people","colors","contries"};
  
  cout<<"-----------------------GUESSING GAME------------------------"<<endl;
  cout<<"please select a category"<<endl;
  
  for(int i = 0 ; i < (sizeof(categories) / sizeof(*categories));i++){\
  
  cout<<"The categories are:"<<categories[i]<<endl;
  }
  
  cin>>categotyIndex;
  	int random = rand()% 5;
  	
  
 switch (categotyIndex){
 	

 	
 	case 1:
 		word = animals[random];
 		cout<<word;
 		
 		break ;
 		
 			case 2:
 		word = names[random];
 			cout<<word;
 		
 		break ;
 		
 			case 3:
 		word = colors[random];
 			cout<<word;
 		
 		break ;
 		
 			case 4:
 		word = countries[random];
 			cout<<word;
 		
 		break ;
 		
 }
 
 cout<<endl;
 
 // 
 
  cout<<"please enter a character:"<<endl;
  cin>>letter;
  
 for(std::string::size_type i = 0; i < word.size(); ++i) {
if(word[i] != letter){
    word.replace(i, 1, "-");
    }
}

  
  cout<<word<<endl;
  
  string guessedWord;

cout << "Give it a try: ";
cin >> guessedWord;


if(guessedWord == word){
cout  << "----- You lose------";
}else{
cout << "-------You win------";
}
  
  
 
 
 
  
  
  
  return 0;
  
  
	
	
}
