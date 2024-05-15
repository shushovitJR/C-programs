// Online C++ compiler to run C++ program online
#include <iostream>
#include<conio.h>
using namespace std;
class distance{
    int feet;
    int inches;
    public:
    distance (){
        feet=inches=0;
    }
    distance (int f,int i){
        feet=f;
        inches=i;
    }
    friend distance operator+(distance&,distance&);
    void display(){
        cout<<feet<<"--"<<inches<<endl;
    }
};
distance operator=(distance& x,distance& y){
    distance fi;
    fi.feet=x.feet+y.feet;
    fi.inches=x.inches+y.inches;
    return fi;
}
int main(){
    distance d1(5,4),d2(4,5),d3(5,8);
    d3=d1+d2;
    d1.display;
    d2.display;
    d3.display;
    return 0;
}
