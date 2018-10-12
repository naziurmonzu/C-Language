#include<stdio.h>
int main() {
	int i, a[20], newv, newi, n;
	printf("array size: ");
	scanf("%d", &n);
	printf("elements of the array: ");
	for (i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	printf("Enter new value1: ");
	scanf("%d", &newv);
	printf("Enter new index1: ");
	scanf("%d", &newi);
	for (i = n; i >= newi; i--) {
		a[i] = a[i - 1];
	}
	n++;
	a[newi - 1] = newv;
	printf("Array after first insertion: ");
	for (i = 0; i < n; i++) {
		printf("%d  ", a[i]);
	}
	printf("\nnew value2: ");
	scanf("%d", &newv);
	printf("new index 2: ");
	scanf("%d", &newi);
	for (i = n; i >= newi; i--) {
		a[i] = a[i - 1];
	}
	n++;
	a[newi - 1] = newv;
	printf("Array after second insertion: ");
	for (i = 0; i < n; i++) {
		printf("%d  ", a[i]);
	}
	printf("\nnew value3: ");
	scanf("%d", &newv);
	printf("new index3: ");
	scanf("%d", &newi);
	for (i = n; i >= newi; i--) {
		a[i] = a[i - 1];
	}
	n++;
	a[newi - 1] = newv;
	printf("Final output: ");
	for (i = 0; i < n; i++) {
		printf("%d  ", a[i]);
	}
	printf("\n");


	return 0;
}
