#include "aka.h"

long fibi(int x) {
   if((x==1)||(x==0)) {
      return(x);
   }else {
      return(fibi(x-1)+fibi(x-2));
   }
}
