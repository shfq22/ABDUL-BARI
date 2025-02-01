#include<iostream>
using namespace std;

struct Rectangle{
    int length;
    int breadth;
};
// all the below functions are related to the above structure 

void initialize(struct Rectangle *r, int l,int b){
    r->length = 15;
    r->breadth = 6;

}


int area (struct Rectangle r){
    return r.length*r.breadth;
}


void changeLength(struct Rectangle *r, int l){
    r->length = l;
}


int main(){
    struct Rectangle r;
    
    initialize(&r,10,5);
    area(r);
    changeLength(&r,20);
    
}
