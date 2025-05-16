int fibonacci(int index) {
	if (index < 1) {
		return -1;
	}

	if (index <= 2) {
		return index - 1;
	}

	return fibonacci(index - 1) + fibonacci(index - 2);
}