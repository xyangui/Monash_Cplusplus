
void sample1();
void sample2();

void arraysSample() {
	sample1();
	sample2();
}

void sample1(){

	int marks[4];
	marks[0] = 23;
	marks[1] = 45;
	marks[2] = 65;
	marks[3] = 78;

	//int marks[] = { 23, 45, 65, 78 };

	int total = 0;
	for (int i = 0; i < 4; i++) {
		total += marks[i];
	}
	cout << "The average mark is " << total / 5.0 << endl;
}

void sample2(){

	int marks[3][4] = { {1,2,3,4},{5,6,7,8},{9,10,11,12} };
	//2D
	int total = 0;
	for (int row = 0; row < 3; row++) {
		for (int col = 0; col < 4; col++) {
			total += marks[row][col];
		}
	}
	cout << "The average mark is" << total / 12.0 << endl;
}