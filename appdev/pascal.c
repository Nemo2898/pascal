// function definitions
int factorial(int n) {
	if (n == 0) return 1;
	else return n * factorial(n - 1);
}

int n_choose_k(int n, int k) {
	return factorial(n) / factorial(k) / factorial(n - k);
}

void recursive_pascal() {
	const int rows = 5;
	for (int n = 0; n < rows; n++) {
		for (int k = 0; k <= n; k++) {
			int val = n_choose_k(n, k);
			printf("%d ", val);
		}
		printf("\n");
	}
}