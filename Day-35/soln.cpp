#include <iostream>
#include <vector>
#include <queue>

using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int val) {
        data = val;
        next = NULL;
    }
};

struct Compare {
    bool operator()(Node* a, Node* b) {
        return a->data > b->data;
    }
};

Node* mergeKLists(vector<Node*>& lists) {

    priority_queue<Node*, vector<Node*>, Compare> pq;

    for (Node* head : lists) {
        if (head != NULL)
            pq.push(head);
    }

    Node dummy(0);
    Node* tail = &dummy;

    while (!pq.empty()) {

        Node* curr = pq.top();
        pq.pop();

        tail->next = curr;
        tail = tail->next;

        if (curr->next != NULL)
            pq.push(curr->next);
    }

    return dummy.next;
}

void printList(Node* head) {
    while (head != NULL) {
        cout << head->data << " ";
        head = head->next;
    }
    cout << endl;
}

int main() {

    int k;
    cin >> k;

    vector<Node*> lists;

    for (int i = 0; i < k; i++) {

        int n;
        cin >> n;

        if (n == 0) {
            lists.push_back(NULL);
            continue;
        }

        int x;
        cin >> x;

        Node* head = new Node(x);
        Node* tail = head;

        for (int j = 1; j < n; j++) {
            cin >> x;
            tail->next = new Node(x);
            tail = tail->next;
        }

        lists.push_back(head);
    }

    Node* ans = mergeKLists(lists);

    printList(ans);

    return 0;
}