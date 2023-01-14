//Nama     : Jimmy Fernando
//Nim      : 2022240031
//Kelas    : SI-B
//Kelompok : 2

#include <iostream>
#define MAX 20
using namespace std;

struct Queue {
	int front, rear, data[MAX];
}Q;

bool isFull() {
	return Q.rear == MAX;
}

bool isEmpty() {
	return Q.rear == 0;
}

void printQueue() {
if (isEmpty) {
cout << "Antrian Kosong" <<endl;		
}
else {
cout << "QUEUE : ";
for (int i = Q.front; i < Q.rear; i++)
	cout << Q.data[i] << ((Q.rear-1 == i) ? "" : ",");
	cout << endl;
}
}

void enqueue() {
if (isFull())
{
cout << "Antrian penuh!"<<endl;
}
else {
int data;
cout << "Masukan Data : ";cin >> data;
Q.data[Q.rear] = data;
Q.rear++;
cout << "Data ditambahkan\n";
printQueue();
}
}

void dequeue() {
if (isEmpty())
{
cout << "Antrian masih kosong"<<endl;
}
else {
cout << "Mengambil data \"" << Q.data[Q.front] << "\"..." << endl;
for (int i = Q.front; i < Q.rear; i++)
Q.data[i] = Q.data [i + 1];
Q.rear--;
printQueue();
}
}

int main() {
int choose;
do
{
cout << "---------------------\n"
;cout << "  Menu Pilihan	\n"
;cout << "---------------------\n"
;cout << " [1] Enqueue \n"
;cout << " [2] Dequeue \n"
;cout << " [3] Keluar \n\n"
;cout << "--------------------\n"
;cout << "Masukkan Pilihan : "; cin >> choose;
switch (choose)
{
	case 1:
	enqueue();
	break;
	case 2:
	dequeue();
	break;
	default:
	cout << "Pilihan tidak t ersedia";
	break;
}
 } while (choose !=3);
return 0;
}
