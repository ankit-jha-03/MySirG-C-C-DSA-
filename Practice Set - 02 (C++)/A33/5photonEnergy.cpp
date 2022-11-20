// E = hc / λ
// Where
// E = photon energy,
// h = Planck’s constant (6.626×10^−34 Js)
// c = speed of the light and c = 3×10^8m/s
// λ = wavelength of the light.
#include<iostream>
#include<math.h>
#define H 6.626*pow(10,-34)
#define C 3*pow(10, 8)
using namespace std;
class PhotonEnergy
{
    protected :
    double wavelength;

    public :
    PhotonEnergy (double x)
    {
        wavelength = x;  // in meter
    }
};
class CalPhotonEnergy : public PhotonEnergy
{
    public :
    CalPhotonEnergy (double x) : PhotonEnergy (x) {}
    void calcPE()
    {
        cout<<"Photon Energy : "<<H*C/wavelength<<"j";   // in eV
    }
};
int main()
{
    CalPhotonEnergy e(0.5);
    e.calcPE();
    return 0;
}