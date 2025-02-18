// #include<iostream>
// using  namespace std;

// struct Rectangle{   // b/c of struct all the members are public
// // if we write class here instead of structure, all the members are private so, we have to make it public
// // writing a class means c++ style programming
//     int length;   
//     int breadth;

// void initialize(int l,int b){
//     length = l;
//     breadth = b;
// }
// int area(){
//     return length*breadth;  // inside the structure they are directly accessing length and breadth
// }

// int perimeter(){
//     int p;
//     p = 2*(length+breadth);
//     return p;
// }
// };

// int main(){
//     struct Rectangle r = {0,0};

//     int l,b;
//     cout<<"enter length and breadth:"<<endl;
//     cin>>l>>b;


// //  the functions initialize(), area(), and perimeter() are defined inside the Rectangle structure and called using the r object. 
//     r.initialize(l,b);

//     int a = r.area();
//     int c = r.perimeter();

//     cout<<"area = "<<a<<endl;          // 20
//     cout<<"perimeter = "<<c<<endl;     // 18
// }





#include<iostream>
using namespace std;


class Rectangle{
    private:
        int length;
        int breadth;

    public:

    // member fn of Rectangle class
        Rectangle(){length = breadth = 1;}           // default constructor
        Rectangle(int l,int b){
            length = l;
            breadth = b;
        }       // parameterized constructor
    // the above two are overloaded constructor



        int area(){
            return length * breadth;
        }
        int perimeter(){
            return 2*(length + breadth);
        }
    // the  above are called facilitators

        int getLength(){return length;}  // accessor
        void setLength(int l){length = l;}   // mutator
        ~Rectangle(){      // destructor
            cout << "Destructor called!" << endl;
        }   
};


    
int main() {
    int l, b;

    cout << "Enter length and breadth: ";
    cin >> l >> b;

    Rectangle r(l, b);  // Calling parameterized constructor

    cout << "Area = " << r.area() << endl;
    cout << "Perimeter = " << r.perimeter() << endl;


    r.setLength(40);
    cout<<r.getLength()<<endl;

    return 0;
}
