#include <iostream>
using namespace std;

class Money{
	public:
	int dollars;
	int cents;
};

Money add_money(Money x, Money y){
	Money total;
	total.dollars = x.dollars + y.dollars;
	total.cents = x.cents + y.cents;
	while(total.cents >= 100){
		total.cents -= 100;
		total.dollars += 1;
	}
	return total;
}

int main(){
	Money first = {3,10};
	Money second = {2,99};
	Money total = add_money(first, second);
	cout<< total.dollars << " and " << total.cents <<endl;
}
