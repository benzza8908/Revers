#include <iostream>
#include <cstring>
using namespace std;

int main() {
	//	 VV--------- 1 2 3 4 5 6 7 8 9 ..... 20
	char str[20];	//   H e l l o _ _ _ _ ..... _     
	int lenStr;

	cout << "Input String\t: ";
	cin >> str; // Hello 0 1 2 3 4	<------ //
	// 5				       //
	lenStr = strlen(str);		      //
	// out loop because show 1 line	     //
	cout << "Reverse String\t: ";       //
			// 5-1 =  4	- 0 -----> //	
	for (int i = lenStr - 1; i >= 0; i--) {
		cout << (char)toupper(str[i]);
	}

	cout << endl;

	system("pause");
	return 0;
}