#include<iostream>
#include<math.h>
#include<time.h>
using namespace std;

int main(){
	
	time_t timetoday;
    time(&timetoday);
    cout << "Calendar date and time as per todays is : " << asctime(localtime(&timetoday));
    return 0;
	
	
	
	
}
