#include<iostream>
using namespace std;
#define PI 3.14
class Volume
{
    protected :
    double side, volume;
};
class Cube : public Volume
{
    public :
    Cube(double x) {side = x;}
    void calCubeVolume() {volume = side*side*side;}
    double getVolume() {return volume;}
};
class Sphere : public Volume
{
    public :
    Sphere(double x) {side = x;}
    void calSphereVolume() {volume = (4/3.0)*PI*side*side*side;}
    double getVolume() {return volume;}
};
int main()
{
    Cube c(4);
    c.calCubeVolume();
    cout<<"Volume of the cube is : "<<c.getVolume()<<endl;

    Sphere s(1);
    s.calSphereVolume();
    cout<<"Volume of the sphere is : "<<s.getVolume();
    return 0;
}