#include<stdio.h>
# define CHAIRS 5
semaphore customers=0;
binary semaphore barber=0;
binary semaphore mutex=1;
int waiting=0;
semaphore cutting = 0;
int main()
{
int n;
void barber();
void customer();
int wait(int);
int signal(int);
printf()

void barber() {
while(true) {
wait(customers); //sleep when there are no waiting customers
wait(mutex); //mutex for accessing customers1
waiting = waiting - 1;
signal(barbers);
signal(mutex);
cut_hair();
}
}
void customer() {
wait(mutex); //mutex for accessing customers1
if (waiting < CHAIRS) {
waiting = waiting + 1;
signal(customers);
signal(mutex);
wait(barbers); //wait for available barbers
get_haircut();
}
else { //do nothing (leave) when all chairs are used.
signal(mutex);
}
}
cut_hair(){
waiting(cutting);
}
get_haircut(){
get hair cut for some time;
signal(cutting);
}
}