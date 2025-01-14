#include<iostream>
#include<string>
using namespace std;

class Box{
    public:

        int *ptr;

        Box(int value){
            ptr = new int(value);
            cout<<"Box created!"<<endl;
        }

        Box(const Box &obj){
            ptr = new int(*(obj.ptr));
            cout<< "Box copied!" << endl;
        }

        ~Box(){
            delete ptr;
            ptr = nullptr; 
            cout<< "Box Destroyed! "<<endl;
        }

};

int main(){
    Box b1(10);
    Box b2 = b1;

    cout<< "b1 value: "<<(b1.ptr)<<endl;
    cout<< "b2 value: "<<(b2.ptr)<<endl;

    return 0;
    

}