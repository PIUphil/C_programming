#ifndef QUEUE_H
#define QUEUE_H
#include "SafeArray.h"

template <typename T>
class Queue {
public:
	explicit Queue(int size = QUEUE_SIZE);
	//~Queue();

	bool full() const;
	bool empty() const;

	void push(const T& data);
	const T& pop();

private:
	static const int QUEUE_SIZE;

	/*int* pArr;
	int size;*/
	SafeArray<T> arr_;					// 'has-a'
	int front_;
	int rear_;

	Queue(const Queue& rhs);
	Queue& operator=(const Queue& rhs);
};


template <typename T>
const int Queue<T>::QUEUE_SIZE = 100;

template <typename T>
Queue<T>::Queue(int size) : arr_(size), front_(0), rear_(0) { }


// Queue<T>::~Queue() { }


template <typename T>
bool Queue<T>::full() const {
	return rear_ == Queue<T>::QUEUE_SIZE;
}

template <typename T>
bool Queue<T>::empty() const {
	return front_ == rear_;
}

template <typename T>
void Queue<T>::push(const T& data) {
	arr_[rear_] = data;
	++rear_;
}

template <typename T>
const T& Queue<T>::pop() {
	return arr_[front_++];
}


#endif