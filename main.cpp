# include <iostream>
# include <cstdlib>
using namespace std;

class Base{
public:
    void show(){
        cout<<"Hello world!"<<endl;
    }
};

class Sub : public Base{

};

int main(){
    Sub obj;
    obj.show();

    system("pause > 0");
    return 0;
}
