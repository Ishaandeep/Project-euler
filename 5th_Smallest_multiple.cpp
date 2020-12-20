//2520 is the smallest number that can be divided by each of the numbers from 1 to 10 without any remainder.
//What is the smallest positive number that is evenly divisible by all of the numbers from 1 to 20?

#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int x = 1, y = 1, smallest = 0;
	while(1) {
	
		for (y = 1; (x % y == 0) && (y <= 20) ;y++) {
			if (y == 20) {
				smallest = x;
				break;
			}
		
		}
		if (smallest > 0) {
			break;
		}
		x++;
	}
	cout << smallest;
}

//output - 232792560