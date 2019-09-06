#include <iostream>
#include <thread>
#include <string>


using namespace std;
 
void ha (int x){
	int i=0;
	for(i=0; i < x; i++){
		cout << "This is rom thread 1 \n";
	}
}

void hatdog (int x){
	int i=0;
	for (i=0; i < x; i++){
		cout << "This is from thread 2 \n";
	}
}
void halaman (int x){
	int i=0;
	for (i=0; i < x; i++){
		cout << "This is from thread 3 \n";
	}
}

void hamonado (int x){
	int i=0;
	for (i=0; i < x; i++){
		cout << "This is from thread 4 \n";
	}
}

int main() {
	
	int i = 0;
	thread th1(ha, 4);
	thread th2(hatdog, 4);
	thread th3(halaman, 4);
	thread th4(hamonado, 4);
    
    for(i = 0; i< 10; i++) {
    	cout << "This print is from Main Method \n" ;
	}
	
	th1.join();
	th2.join();
	th3.join();
	th4.join();
     return 0;

}
