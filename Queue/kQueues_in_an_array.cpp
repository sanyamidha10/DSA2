#include<iostream>
using namespace std;

class kQueue{
    private:
        int k;
        int n;
        int *arr;
        int *next;
        int *front;
        int *rear;
        int freespot;

    public:
        kQueue(int n, int k){
            this ->n = n;
            this ->k = k;
            arr = new int[n];
            
            front = new int[k];
            rear = new int[k];
            for(int i=0; i<k; i++){
                front[i] = -1;
                rear[i] = -1;
            }

            next = new int[n];
            for(int i=0; i<n; i++){
                next[i] = i+1;
            }
            next[n-1] = -1;

            freespot = 0;
            
        }

    void enqueue(int data, int qn){
        // check overflow
        if(freespot == -1){
            cout<<"overflow"<<endl;
            return;
        }

        // find first free index
        int index = freespot;

        // update freespot
        freespot = next[index];

        // check if first element
        if(front[qn-1] == -1){
            front[qn-1] = index;
        }
        else{
            // link new element to previous element
            next[rear[qn-1]] = index;

        }

        // update next
        next[index] = -1;

        // update rear
        rear[qn-1] = index;

        // push data
        arr[index] = data;
    }

    int dequeue(int qn){
        if(front[qn-1] == -1){
            cout<<"Underflow"<<endl;
            return -1;
        }

        // find index on top;
        int index = front[qn-1];

        // front ko aage badhao
        front[qn-1] = next[index];

        // freeslots ko manage kro
        next[index] = freespot;
        freespot = index;
        return arr[index];

    }
};

int main(){

    kQueue q(10, 3);
    q.enqueue(10, 1);
    q.enqueue(15, 1);
    q.enqueue(20, 2);
    q.enqueue(25, 1);

    cout<< q.dequeue(1)<<endl;
    cout<<q.dequeue(2)<<endl;
    cout<<q.dequeue(1)<<endl;
    cout<<q.dequeue(1)<<endl;

    cout<<q.dequeue(1)<<endl;
    

return 0;

}