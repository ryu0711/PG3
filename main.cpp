#include <stdio.h>
#include<thread>

void Thread1() {
	
	printf("thread1\n");
};
void Thread2() {
	
	printf("thread2\n");
};
void Thread3() {
	
	printf("thread3\n");
};
int main() {
	std::thread th1(Thread1);
	th1.join();
	std::thread th2(Thread2);;
	th2.join();
	std::thread th3(Thread3);
	th3.join();
	return 0;
}