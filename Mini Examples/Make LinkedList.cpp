#include <iostream>
using namespace std;

/* 

9) Bir program yazınız. Programda bir çiftli linklist kodlayacaksınız:
Programınızda node’larınız bir sayı değeri tutacak. İlk olarak kullanıcıdan listenizin kaç node olacağını girmesini, ardından da sırayla değerleri istemelisiniz. Kullanıcı bir node için değer girdiğinde listeye ekleme yapabilirsiniz.

*/

struct Node{

    int data;
    struct Node* prev;
    struct Node* next;

};

//Başlangıç node'unu oluşturmak için:
Node* newNode(int val){

    Node *temp = new Node;
    temp->data = val;
    temp->next = nullptr;
    temp->prev = nullptr;

    return temp;
}

//Değeri listenin sonuna eklemek için:
void insert(Node** head, int val)
{
    Node* temp = newNode(val);
    temp->prev = *head;
    (*head)->next = temp;
    (*head) = temp;
}

//Listeyi sondan başa doğru yazmak için:
void reversePrintList(Node* head)
{
    while (head->prev != nullptr) {
        cout << head->data << endl;
        head = head->prev;
    }
    cout << head->data << endl;
}

//Listeyi baştan sona doğru okumak için iki farklı yöntem kullanmak istedim, birincisi printList fonksiyonu içerisinde *head pointer'ı başa tutturmak: 
void printList(Node* head)
{
    while (head->prev != nullptr) {
        head = head->prev;
    }

    cout << "Data Entered in the list is: " << endl;

    while (head->next != nullptr) {
        cout << head->data << endl;
        head = head->next;
    }
    cout << head->data << endl;
}

//ikincisi, listeyi ters çeviriyorum:
void reverseList(Node** head)
{
    Node* left = *head, * right = *head;

    while (left->prev != nullptr)
        left = left->prev;

    while (left != right && left->prev != right) {
        
        //left ve right node'larının değerlerini değiştirelim:
        swap(left->data, right->data);

        //left node'unu sağa doğru bir adım yaklaştıralım:
        left = left->next;

        //right node'unu sola doğru bir adım yaklaştıralım:
        right = right->prev;
    }

    cout << "Data Entered in the list: " << endl;
    reversePrintList(*head);
}

int main(){

    int nodeNum, val, i=1;

    //Kullanıcıdan Linkedlist'in kaç node olacağı istenir: 
    cout << "LinkedList'iniz kac node olacak: " ; 
    cin >> nodeNum;

    Node* head;

    while(nodeNum > 0){

        cout << i << ". node degeri: ";
        cin >> val;

        if(i == 1){
            head = newNode(val);
            i++;
            nodeNum--;
            continue;
        }

        insert(&head, val);
        i++;
        nodeNum--;
    }
    
    //Baştan sona doğru yazmak için birinci yöntem: 
    printList(head);

    //ikinci yöntem: 
    // reverseList(&head);

    //Sondan başa doğru yazmak için: 
    cout << "Data Entered in the reverse list is: " << endl;
    reversePrintList(head);
}

/* 
Output will be: 
    LinkedList'iniz kac node olacak: 5
    1. node degeri: 1
    2. node degeri: 2
    3. node degeri: 3
    4. node degeri: 4
    5. node degeri: 5
    Data Entered in the list is: 
    1
    2
    3
    4
    5
    Data Entered in the reverse list is:
    5
    4
    3
    2
    1
*/
