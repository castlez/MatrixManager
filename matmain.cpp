//Jonathan Castle
//matrix manager test enviro
#include "mat.h"



int main(){
  int c,r;
  matrix mat;

  cout<<endl<<"columns? ";
  cin>>c;
  cin.ignore();
  
  cout<<endl<<"rows? ";
  cin>>r;
  cin.ignore();
  
  mat.populate(c, r);
  mat.display();
  return 0;
}
