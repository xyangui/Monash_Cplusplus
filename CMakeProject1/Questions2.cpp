void question3_a(int n);
void question3_b(int n);
void question4(int n);
void question5();
void question6(int n, int m);
void breakAndContinue();
void question7();
void question();

void questions2() {

	question3_a(6);
	question3_b(5);

	question4(0);
	question4(1);
	//question4(3);

	question5();

	question6(3, 4);

	breakAndContinue();
	question7();

	question();
}

//Question3
void question3_a(int n) {

	int sum = 0;
	for (int x = 1; x <= n; x++) {
		sum = sum + x;
	}
	cout << sum << endl;
}

void question3_b(int n) {

	int sum = 0;
	for (int x = 1; x <= n; x++) {
		if (x % 2 == 1) {
			sum = sum + x;
		}
	}
	cout << sum << endl;
}
//Question4
void question4(int n) {

	int i = 1;
	while (i <= n) {
		if ((i % n) == 0) {
			++i;
		}
	}
	cout << i << endl;
}
//Question5
void question5() {

	for (int i = 1; i <= 10; i++) {
		for (int j = 1; j <= 10; j++) {
			cout << "* ";
		}
		cout << endl;
	}
}
//Question6
void question6(int n, int m) {

	for (int i = 1; i <= m; i++) {
		for (int j = 1; j <= n; j++) {
			cout << "* ";
		}
		cout << endl;
	}
}


void breakAndContinue() {

	int x = 0;
	while (true) {
		x += 1;
		if (x > 10) {
			break;
		}
		if (x == 5) {
			continue;
		}
		cout << x << endl;
	}
}

//Question7
void question7() {
	int x = 0;
	while (true) {
		x += 1;
		if (x > 10) {
			break;
		}
		if (x == 5) {
			continue;
		}
		if (x == 9) {
			continue;
		}
		cout << x << endl;
	}
}

//  *
// ***
//*****
void question() {

	int n = 15;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n - i; j++) {
			cout << " ";
		}
		for (int j = 1; j <= i * 2 - 1; j++) {
			cout << "*";
		}
		cout << endl;
	}
}

