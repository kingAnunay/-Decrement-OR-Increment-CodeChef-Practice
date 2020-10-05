  // SECOND QUESTION
  // DECREMENT OR INCREMENT 
#include <iostream>
using namespace std;

int main() {
	// your code goes here
    int n = 0;
    cin>>n;
    if(n>=0&&n<=1000){
        if(n%4==0){
            n++;
            
        }
        else{
            n--;
        }
        std::cout<<n;
    }
	return 0;
}
