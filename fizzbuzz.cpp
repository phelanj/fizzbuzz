// Example program
#include <iostream>
#include <string>

using namespace std;

int main()
{
  int count = 1;
  for (int i =1; i < 101; i++) {
start:      
      
   if (count % 3 == 0 && count % 5 !=0) {
    cout << "Fizz\n";
    count++;
	goto start;
   }
    
    
    if (count % 3 != 0 && count % 5 ==0) {
        cout << "Buzz\n";
        count++;
		goto start;

        
    }
        
    if (count % 3 == 0 && count % 5 ==0)  {  
        cout << "Fizzbuzz\n";
		count++;
		goto start;

        
    }
        
    else {
        cout << count << endl;
    }
    count++;
  }
}
