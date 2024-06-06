#include<iostream>
using namespace std;

typedef struct node *address;
struct node{
    address prev;
    int data;
    address next;
};

address first, last=NULL;

address alokasi(int datanya){
    address hasil=new node;
    hasil->data=datanya;
    hasil->next=hasil->prev=NULL;
    return hasil;
}

void insertfirst(address baru){
    if(first==NULL){
        first=last=baru;
    }
    else{
        baru->next=first;
        first->prev=baru;
        first=baru;
    }
}

void insertlast(address baru){
    if(first==NULL){
        first=last=baru;
    }
    else{
        last->next=baru;
        baru->prev=last;
        last=baru;
    }
}

void deletefirst(){
    if(first==NULL){
        cout<<"Daftra buku kosong"<<endl;
        return;
    }

    first=first->next;
    delete first->prev;
    first->prev=NULL;
}

void deletelast(){
    if(first==NULL){
        cout<<"Daftar buku kosong."<<endl;
        return;
    }
    last=last->prev;
    delete last->next;
    last->next=NULL;
}

void cetak(){
    address p=first;
    while (p!=NULL){
        cout<<"ID Buku: "<<p->data<<endl;
        p=p->next;
    }
}


void printprimebookids(){
    
}

bool isPrime(int n){
    if(n%2==1){
        if(n%3==1){}
            printprimebookids(n);
         }
    }
}

address caribuku(int id){
    
}
void hapusbuku(int id){

}

int main(){
    insertlast(alokasi(10));
    insertfirst(alokasi(30));
    insertlast(alokasi(50));
    insertlast(alokasi(19));
    insertfirst(alokasi(90));
    insertlast(alokasi(27));
    insertlast(alokasi(11));

    cout<<"Daftar buku awal:"<<endl;
    cetak();

    hapusbuku(20);
    hapusbuku(10);

    cout<<"\nDaftar buku setelah penghapusan:"<<endl;
    cetak();
    printprimebookids();
    return 0;
}