#include <stdio.h>

struct Item {
	char id[5];
	int weight;
	int value;
	float density;
};

void fractionalKnapsack(Item items[], int n, int W);

int main(void) {
	//variables
	int i, j;

	//list items
	Item items[6] = {
		{"i1",  6, 6, 0},
		{"i2", 10, 2, 0},
		{"i3",  3, 1, 0},
		{"i4",  5, 8, 0},
		{"i5",  1, 3, 0},
		{"i6",  3, 5, 0}
	};

	//temp item
	Item temp;

	//number of items
	int n = 6;

	//max weight limit of knapsack
	int W = 16;

	//compute desity = (value/weight)
	for(i = 0; i < n; i++) {
		items[i].density = float(items[i].value) / items[i].weight;
	}

	//sort by density in descending order
	for(i = 1; i < n; i++) {
		for(j = 0; j < n - i; j++) {
			if(items[j+1].density > items[j].density) {
				temp = items[j+1];
				items[j+1] = items[j];
				items[j] = temp;
			}
		}
	}

	fractionalKnapsack(items, n, W);

	return 0;
}
