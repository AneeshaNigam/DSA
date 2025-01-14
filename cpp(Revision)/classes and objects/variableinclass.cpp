//As good programming practice add variables in private and then make functions to access it public.
#include<iostream>
#include<string>
using namespace std;
class Anee{
    public:
        void setName(string x){
            name=x;
        }
        string getName(){
            return name;
        }
    private:
        string name;
};

int main(){

    Anee bo;
    bo.setName("sam");
    cout<<bo.getName();

    return 0;

}