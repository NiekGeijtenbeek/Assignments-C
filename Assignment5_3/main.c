#include <stdio.h>
#include "queue.h"

int main(void) {
	Queue queue;
	init_queue(&queue);
	
	for (int c = 0; c < 4; c++) {
		enqueue(&queue, c);
	}
	
	show(queue);
	
	return 0;
}
