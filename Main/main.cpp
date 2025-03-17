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
#include "HFighterJet.h"
void Print(TTransport& var)
{
	cout << "Name -" << var.GetName() << endl;
}
int main()
{
	TGround q;
	cout << q;
	cin >> q;
	cout << q;
	TPassengerCar w;
	cout << w;
	cin >> w;
	cout << w;
	TSpecialCar e;
	cout << e;
	cin >> e;
	cout << e;
	TLada r;
	cout << r;
	cin >> r;
	cout << r;
	TUAZ t;
	cout << t;
	cin >> t;
	cout << t;
	TAmbulance y;
	cout << y;
	cin >> y;
	cout << y;
	TFireTruck u;
	cout << u;
	cin >> u;
	cout << u;
	TAir i;
	cout << i;
	cin >> i;
	cout << i;
	TPlane o;
	cout << o;
	cin >> o;
	cout << o;
	THelicopter p;
	cout << p;
	cin >> p;
	cout << p;
	TCornhusker a;
	cout << a;
	cin >> a;
	cout << a;
	TFighterJet s;
	cout << s;
	cin >> s;
	cout << s;
	TSingleRotor g;
	cout << g;
	cin >> g;
	cout << g;
	TMultiScrew f;
	cout << f;
	cin >> f;
	cout << f;
	return 0;
}