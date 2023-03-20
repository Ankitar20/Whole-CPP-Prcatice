#include<iostream>
using namespace std;
//bit manipulation

int getBit(int n, int pos){
    return((n &(1<<pos))!=0);
}
int setBit(int n,int pos){
    return(n |(1<<pos));

}
int clearBit(int n, int pos){
    int mask =~(1<<pos);
    return( n & mask);
}
int updateBit(int n, int pos, int value){
    int mask =~(1<<pos);
    n=n&mask;
    return n|(value<<pos);
}


int main(){

//cout<<getBit(5,2)<<endl;
//cout<<setBit(5,1)<<endl;
//cout<<clearBit(5,2);
cout<<updateBit(5,1,1)<<endl;
return 0;
}
//set bit n=0101
//set bit means set bit as 1 and setting 0 is that unset the bit
//update bit- n=0101 it means first clear bit and then set bit
