
#include <iostream>
#include "PIDCon.h"

using namespace std;
PIDCon deg = PIDCon(0, 0.8, 0.2, 0.3);
PIDCon dis = PIDCon(0, 0.8, 0.2, 0.3);
int main(void)
{
  string key;
  float deg_data;
  float dis_data;
  float PIDdeg;
  float PIDdis;
  float deggosa = 254;
  float disgosa = 179;
  cin >> deg_data >> dis_data;
  while (1)
  {
    deg.Setdt(1);
    deg.Input(deg_data);
    dis.Setdt(1);
    dis.Input(dis_data);
    PIDdeg = deg.GetPID();
    PIDdis = dis.GetPID();
    deggosa -= PIDdeg;
    disgosa -= PIDdis;
    cout << "PIDdeg: " << PIDdeg << "  PIDdis: " << PIDdis << "  degosa:" << deggosa << "  disgosa:" << disgosa << endl;
    deg_data = deggosa;
    dis_data = disgosa;
    getchar();
  }
  return 0;
}
