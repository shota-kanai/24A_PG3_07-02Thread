#include<stdio.h>
#include<thread>

void print1() {
	printf("thread1\n");
}

void print2() {
	printf("thread2\n");
}

void print3() {
	printf("thread3\n");
}

int main() {
	//マルチスレッド
	std::thread th1(print1);
	th1.join();
	std::thread th2(print2);
	th2.join();
	std::thread th3(print3);
	th3.join();

}