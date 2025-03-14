#include "HTransport.h"
#include "HGround.h"
#include "HAir.h"
#include "HSpecial.h"
#include "HPlane.h"
#include "HPassenger.h"
#include "HLada.h"
#include "HAmbulance.h"
#include "HFireTruck.h"
#include "HUAZ.h"
#include "HCornhusker.h"
#include "HMultiScrew.h"
#include "HSingleRotor.h"
#include "HHelicopter.h"
void Print(TTransport& var)
{
	cout << "Name -" << var.GetName() << endl;
}
int main()
{
	TGround q;
	cin >> q;
	cout << q;
	TGround f(q);
	cout << f;
}