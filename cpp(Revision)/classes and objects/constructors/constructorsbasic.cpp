#include<iostream>
#include<string>
using namespace std;
class anee{
    
    public:
        
        anee(){
        name="anee";
    }
        anee(string i){
            setName(i);
        }

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

    anee a;
    cout<<a.getName()<<endl;

    anee an("aneesha");
    cout<<an.getName()<<endl;
    return 0;
}