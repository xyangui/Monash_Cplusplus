
void isEvenorOdd();
void isEvenorOdd2();
void getGrade();

void questions1() {
	isEvenorOdd();
	isEvenorOdd2();
	getGrade();
}

//Question1
void isEvenorOdd() {

	int num = 3;

	switch (num) {
	case 1:
		cout << "odd" << endl;
		break;
	case 2:
		cout << "even" << endl;
		break;
	case 3:
		cout << "odd" << endl;
		break;
	case 4:
		cout << "even" << endl;
		break;
	case 5:
		cout << "odd" << endl;
		break;
	case 6:
		cout << "even" << endl;
		break;
	case 7:
		cout << "odd" << endl;
		break;
	case 8:
		cout << "even" << endl;
		break;
	case 9:
		cout << "odd" << endl;
		break;
	case 10:
		cout << "even" << endl;
		break;
	default:
		cout << "out of the range" << endl;
	}
}

void isEvenorOdd2() {

	int num = 6;

	switch (num % 2) {
	case 0:
		cout << "even" << endl;
		break;
	case 1:
		cout << "odd" << endl;
		break;
	}
}
//Question2
enum Grade {
	HD, D, C, P, N
};
void getGrade() {

	int score = 55;

	Grade grade;

	if (score <= 100 && score >= 80) {
		grade = HD;
	}
	else if (score <= 79 && score >= 70) {
		grade = D;
	}
	else if (score <= 69 && score >= 60) {
		grade = C;
	}
	else if (score <= 59 && score >= 50) {
		grade = P;
	}
	else if (score <= 49 && score >= 0) {
		grade = N;
	}

	if (grade != N) {
		cout << "You passed!" << endl;
	}

	// if AND loop
}
