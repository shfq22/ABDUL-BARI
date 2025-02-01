#include<iostream>
using namespace std;

struct Rectangle{
    int length;
    int breadth;
};

void changeLength(struct Rectangle *R){  
    (*R).length = 8;
    // or 
   // R->length = 8;

   cout<<R->length<<endl;  //8
}

int main(){
    struct Rectangle r = {12,5};
    changeLength(&r);


    cout<<r.length<<endl;  //8
}