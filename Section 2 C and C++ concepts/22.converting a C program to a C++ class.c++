// #include<iostream>
// using namespace std;

// struct Rectangle{
//     int length;
//     int breadth;
// };
// // all the below functions are related to the above structure 

// void initialize(struct Rectangle *r, int l,int b){
//     r->length = 15;
//     r->breadth = 6;

// }


// int area (struct Rectangle r){
//     return r.length*r.breadth;
// }


// void changeLength(struct Rectangle *r, int l){
//     r->length = l;
// }


// int main(){
//     struct Rectangle r;   // Declaring a variable of type Rectangle 
    
//     initialize(&r,10,5);
//     area(r);
//     changeLength(&r,20);

//     cout<<r.breadth<<endl;   // 6
//     cout<<r.length<<endl;   // 20
    
// }





// converting into class
#include<iostream>
using namespace std;

struct Rectangle{
    int length;
    int breadth;

// all the below functions are related to the above structure 

void initialize(int l,int b){
    length = 15;
    breadth = 6;

}


int area (){
    return length*breadth;
}


void changeLength(int l){
    length = l;
}

};


int main(){
    Rectangle r;   // Declaring a variable of type Rectangle 
    
    r.initialize(10,5);
    int z = r.area();
    r.changeLength(20);

    cout<<z<<endl;    // 90

    cout<<r.breadth<<endl;   // 6
    cout<<r.length<<endl;   // 20
    
}



