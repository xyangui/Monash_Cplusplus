
void expressionsSample() {

	bool isTrue;
	isTrue = true;
	isTrue = false;

	int large = 30;
	int small = 20;
	isTrue = large == large; // return bool value, like x + y
	isTrue = large == small;
	isTrue = large != small;
	isTrue = large != large;//?

	isTrue = large > small;
	isTrue = large < small;

	isTrue = large >= small;
	isTrue = large <= small;
	isTrue = large <= large;

	isTrue = !false;
	isTrue = !true;
	isTrue = !(large == small);
	isTrue = !(large >= small);

	isTrue = true || true;   //true
	isTrue = true || false;  //true
	isTrue = false || true;  //true
	isTrue = false || false; //false

	isTrue = large <= small || large <= large;
	isTrue = large >= small || large <= small;

	isTrue = true && true;   //true
	isTrue = true && false;  //false
	isTrue = false && true;  //false
	isTrue = false && false; //false

	isTrue = large <= small && large <= large;
	isTrue = large >= small && large <= small;

	//??????????????????????????????
	bool isHD;
	int myScore = 80;
	isHD = myScore >= 80 && myScore <= 100;
	int yourScore = 57;
	isHD = yourScore >= 80 && yourScore <= 100;

	bool isWeekend;
	Day day = Sat;
	isWeekend = day == Sat || day == Sun;
	Day anotherDay = Tue;
	isWeekend = anotherDay == Sat || anotherDay == Sun; 
	
	// if  day_num = 0 , then day = Mon
	// if  day_num = 1 , then day = Tue
	// if  day_num = 2, then day = Wed
	// ...
	//to Decisions
}
