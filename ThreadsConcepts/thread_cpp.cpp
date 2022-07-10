#include<iostream>
#include<thread>
#ifdef __unix__
# include <unistd.h>
#elif defined _WIN32
# include <windows.h>
#define sleep(x) Sleep(1000 * (x))
#endif




using namespace std;

void taskA(){
    for(int i=0;i<10;i++){
        sleep(1);
        printf("Task A: %d\n",i);
        fflush(stdout);
    }
}
void taskB(){
    for(int i=0;i<10;i++){
        sleep(1);
        printf("Task B: %d\n",i);
        fflush(stdout);
    }
}

int main(){
    
    thread t1(taskA);
    thread t1(taskB);
    t1.join();
    t2.join();
    return 0;

}