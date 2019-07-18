
void whileSample();
void doWhileSample();
void forSample();
void whileReplaceFor();

void loopsSample() {

	whileSample();
	doWhileSample();
	forSample();
	whileReplaceFor();
}

void whileSample() {

	char again = 'y';
	while (again == 'y') {
		cout << "Do you want to play again?(y/n):";
		cin >> again;
	}
	cout << "OK, catch you later" << endl;
}

void doWhileSample() {

	char again = 'y';
	do {
		cout << "Do you want to play again?(y/n):";
		cin >> again;
	} while (again == 'y');
	cout << "OK, catch you later" << endl;
}

void forSample() {

	for (int x = 1; x < 10; x++) {
		cout << x << " ";
	}
	cout << "OK" << endl;
}

void whileReplaceFor() {

	int x = 1; 
	while(x < 10){
		cout << x << " ";
		x++;
	}
	cout << "OK" << endl;

	//to Questions2
}