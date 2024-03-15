#include "CheatTutorialTool.h"


int main(){
	//Get Process ID of running console window
	int varInt{ 123456 };
	std::string varString{ "DefaultString" };
	char arrChar[128]{ "Long char array right there ->" };

	do {
		// Output Value and address of all variables to be manipulated using the cheat I will create
		DWORD PID{ GetCurrentProcessId() };
		std::cout << "Process ID: " << std::dec << PID << '\n' << '\n';
		std::cout << "varInt       (0x" << std::hex << &varInt << ") = " << std::dec << varInt << '\n';
		std::cout << "varString    (0x" << std::hex << &varString << ") = " << varString << '\n';
		std::cout << "arrChar[" << std::dec << sizeof(arrChar) << "] (0x" << std::hex << &arrChar << ") = " << arrChar << '\n' << '\n';

		int* ptr2int{ &varInt };
		int** ptr2ptr{ &ptr2int };
		int*** ptr2ptr2{ &ptr2ptr };

		std::cout << "ptr2int      (0x" << std::hex << &ptr2int << ") = 0x" << ptr2int << '\n';
		std::cout << "ptr2ptr      (0x" << std::hex << &ptr2ptr << ") = 0x" << ptr2ptr << '\n';
		std::cout << "ptr2ptr2     (0x" << std::hex << &ptr2ptr2 << ") = 0x" << ptr2ptr2 << '\n' << '\n';

		std::cout << "Press ENTER to print again.";
		//Pause and ask for input
		system("pause");
		std::cout << '\n' << "---------------------------------------------------" << '\n' << '\n';
	} while (true); //Infinite loop

	return 0;
}