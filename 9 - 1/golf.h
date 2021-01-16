#include <iostream>
using namespace std;

namespace golfclub
{
  const int Len = 40;
  struct golf
  {
    char fullname[Len];
    int handicap;
  };
  void setgolf(golf & g, const char * name, int hc);
  void setgolf(golf & g);
  void handicap(golf & g, int hc);
  void showgolf(const golf & g);
}
