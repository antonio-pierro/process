#include <iostream>
#include <unistd.h>

int main(void) {
	
	int number;
	
	std::cout << "The PID of this process is: " << getpid() << std::endl;
	// The following instruction will block the process waiting for input
	std::cin >> number;
	
	return 0;
}
