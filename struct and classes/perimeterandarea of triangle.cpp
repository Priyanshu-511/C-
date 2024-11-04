#include<iostream>
#include<math.h>
using namespace std;

class triangle{
    public:
    float a,b,c;
    void Area(float a, float b , float c){
        float s = (a+b+c)/2;
        float area =  sqrt(s*(s-a)*(s-b)*(s-c));
        cout<<"Area of triangle is: "<< area<<"\n";
    }
    void Perimeter(float a, float b, float c){
        cout<<"Perimeter of Triangle: "<<a+b+c<<"\n";
    }
};

int main() {
    class triangle t1;
    t1.a=3;t1.b=5;t1.c=5;
    t1.Area(3,4,5);
    t1.Perimeter(3,4,5);
}