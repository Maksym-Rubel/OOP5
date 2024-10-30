#include <iostream>
#include "TV.h" 

#include "Remote.h" 

int main()

{

TV tv1(20, 30, false, 50, 30);
Remote remote(&tv1);
remote.power();
+remote;
++remote;

tv1.printInfo();
-remote;
--remote;
tv1.printInfo();

remote.goChannel(5);
tv1.printInfo();

+remote;

 
}

