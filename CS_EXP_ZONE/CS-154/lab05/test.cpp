#include<iostream>
using namespace std;

class Vectors {
    private:
        int x,y,z;
    public:
    Vectors (int x, int y, int z) {
        this->x=x; this->y=y; this->z=z;
    }
    Vectors operator+(Vectors v){
        Vectors v0(x + v.x, y+v.y,z+v.z);
        return v0;
    }
    void print() {
        cout<<x;
    }
};

int main() {
    Vectors v1(10,10,10),v2(10,10,10),v3(10,10,10);
    v3 = v1+v2;
    v3.print();
}