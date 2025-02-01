#include<iostream>
using namespace std;

struct Rectangle{
    int length;
    int breadth;

};

int AREA(struct Rectangle rr){
    return (rr.breadth)*(rr.length);
}

int PERIMETER(struct Rectangle *rrr){
    return  2*(rrr->breadth)+(rrr->length);
}
int main(){
    struct Rectangle r = {0,0};

    cout<<"enter length and breadth"<<endl;
    cin>>r.length>>r.breadth;
    cout<<AREA(r)<<endl;
}