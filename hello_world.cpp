// 'hello world'

#include <iostream>
#include <unistd.h>

unsigned int mic_sec;
int main(){
	mic_sec= 50000;

	for ( int i =0; i < 100;i++){
	
		usleep(mic_sec);
		std::cout << "Hello world akm " << std::endl;
	}	
}
