#include<iostream>//import c++  library for cin and cout
using namespace std;//using namespace std for cin and cout
void prime_number(int);//function declaration for prime_number function
int main(){//start main function of program
    int num;//declare variable num
    cout<<"Enter the number: ";//print message to enter the number
    cin>>num;//input the number for variable num from user
    prime_number(num);//call function prime_number with parameter num as argument 
    return 0;//return 0 to main function
}//end main function of program
void prime_number(int num){//start function prime_number with parameter num as argument
    if(num==1){//if condition for prime number 1
        cout<<"1 is not a prime number"<<endl;//print message for prime number 1
    }//close if condition
    else if(num==2){//if condition for prime number 2 
        cout<<"2 is a prime number"<<endl;//print message for prime number 2
    }//
    else if(num%2==0){//if condition for prime number divisible by 2
        cout<<num<<" is not a prime number"<<endl;//print message for prime number divisible by 2
    }
    else{//else condition for prime number
        cout<<num<<" is a prime number"<<endl;//print message for prime number
    }

}
