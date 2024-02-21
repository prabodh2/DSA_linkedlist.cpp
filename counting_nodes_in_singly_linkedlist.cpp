//counting nodes in this program.
#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
    Node(int value) : data(value), next(nullptr) {}};
Node* insert(Node* head, int value) {
    Node* newNode = new Node(value);
    newNode->next = head;
    return newNode;
}
void display(Node* head) {
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " ";
        current = current->next;
    }
    cout << endl;
}
int countNodes(Node* head) {
    int count = 0;
    Node* current = head;
    while (current != nullptr) {
        count++;
        current = current->next;
    }
    return count;
}
int main() {
    Node* head = nullptr;
    head = insert(head, 3);
    head = insert(head, 1);
    head = insert(head, 9);
    head = insert(head, 9);
    head = insert(head, 0);
    head = insert(head, 0);
    head = insert(head, 9);
    head = insert(head, 0);
    head = insert(head, 3);
    head = insert(head, 8);
    cout << "Linked List: ";
    display(head);
    int nodeCount = countNodes(head);
    cout << "Number of nodes: " << nodeCount << endl;
    return 0;
}
