
/*


*/

#include <iostream> 
using namespace std;

int main(){

double grade;
cout<< "enter your grade: ";
cin>>grade;
while(grade<0 || grade>100){
	cout<<"grade is not in [0,100], please reenter: "
	cin>>grade;
}
if(grade>=90){
	cout<<"A";
}else if(grade>=80){
	cout<<"B";
}else if(grade>=70){
	cout<<"C";
}else if(grade>=60){
	cout<<"D";
}else{
	cout<<"F";
}

}
