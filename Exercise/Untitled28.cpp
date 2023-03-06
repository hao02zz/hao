#include <iostream>
#include <cstring>

using namespace std;

int main (){
	
char studentName[21];
char myname[16];
char yourname[16];

strcpy(myname, "John Robinson");

strlen("John Robinson");

int len;
len = strlen("Sunny Day");

strcpy(yourname, "Lisa Miller");
strcpy(studentName, yourname);

strcmp("Bill", "Lisa");

strcpy(yourname, "Kathy Brown");
strcpy(myname, "Mark G. Clark");
strcpy(myname, yourname);

return 0;
}

