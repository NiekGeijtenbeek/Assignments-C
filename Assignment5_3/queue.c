#include "queue.h"
#include <assert.h>

void init_queue(Queue* pq) {
	pq -> head = -1;
	pq -> tail = -1;
}

void enqueue(Queue* pq, int data) {
	assert(pq->tail != pq->head || pq->head == -1);
	++(pq -> tail) % QUEUESIZE;
	pq -> a[pq -> tail] = data;
}

int dequeue(Queue* pq) {
	assert(pq->head != -1 && pq->tail != -1);
	
	++(pq -> head) % QUEUESIZE;
	if(pq->head == pq->tail) {
		pq->head = -1;
		pq->tail = -1;
	}
	return pq->a[pq->head];
}
	
void show(Queue q) {
	//Begin head ?
	// %? 	 
	for (int i = 0; i < QUEUESIZE; i++) {
		printf("inhoud op plaats %d is %d", i, q.a[i]);
	}

}


