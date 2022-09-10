#ifndef VECTOR131_H_
#define VECTOR131_H_

// template so we can use any data type
template <class T>
class vector131 {
    private:
        int size; // number of elements in array
        int *ptr; // points to the array
        int next; // index of next item in array
    public:
        vector131();
        ~vector131();
        void push_front();
        void push_back();
        void resize();
        int getSize();
};

#endif