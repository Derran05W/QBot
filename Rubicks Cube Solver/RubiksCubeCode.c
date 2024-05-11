#include "PC_FileIO.c"
const int MOTORSPEED = 25;
const int motorReverseSpeed = 20;
//Motor D is the big arm

void pullback();
void raiseArm();
void lowerArm();
void rotatePos (float turns);
void rotateNeg (float turns);
void turnDownFace(int numOfTurn);
void turnUpFace(int numOfTurn);
void turnFrontFace(int numOfTurn);
void turnBackFace(int numOfTurn);
void turnRightFace(int numOfTurn);
void turnLeftFace(int numOfTurn);
int solve (TFileHandle &fin);

task main()
{
	TFileHandle fin;
	bool fileOkay = openReadPC(fin, "fileRead.txt");
	solve(fin);
}

void pullback() {
	//nMotorEncoder[motorD] = 0;
	motor[motorD] = 25;
	while (nMotorEncoder(motorD) < 230) {}
	motor[motorD] = 0;
	wait1Msec(300);

	motor[motorD] = -25;
	while (nMotorEncoder(motorD) > 0) {}
	motor[motorD] = 0;
	wait1Msec(300);
}

void raiseArm(){
	//raises arm up
	wait1Msec(1000);
	motor[motorD] = -motorReverseSpeed;
	while (nMotorEncoder[motorD] > 0) {}
	motor[motorD] = 0;
	//nMotorEncoder[MotorD] =0;
}

void lowerArm(){
	//brings arm down
	motor[motorD] = 25;
	while (nMotorEncoder[motorD] < 90) {}
	motor[motorD] = 0;
	wait1Msec(1000);
}

void rotatePos (float turns){
	//turns LEFT FROM FRONT
	int x = nMotorEncoder[motorA];
	motor[motorA] = MOTORSPEED;
	while (abs(nMotorEncoder[motorA]-x) < (270 * turns)+25) {}
	motor[motorA] = 0;
	wait1Msec(500);

	//corrects turn
	motor[motorA] = -10;
	while (abs(nMotorEncoder[motorA]-x) > (270 * turns)) {}
	motor[motorA] = 0;
}

void rotateNeg (float turns){
	//turns RIGHT FROM FRONT
	int x = nMotorEncoder[motorA];
	motor[motorA] = -MOTORSPEED;
	while (-(abs(nMotorEncoder[motorA]-x)) > (-270 * turns)-25) {}
	motor[motorA] = 0;
	wait1Msec(500);

	//corrects turn
	motor[motorA] = 10;
	while (-(abs(nMotorEncoder[motorA]-x)) < (-270 * turns)) {}
	motor[motorA] = 0;
}

//Face Turning Functions (6):
void turnDownFace(int numOfTurn) {
	lowerArm();
	rotatePos(numOfTurn);
	raiseArm();
}

void turnUpFace(int numOfTurn) {
	pullback();
	pullback();
	lowerArm();
	rotateNeg(numOfTurn);
	raiseArm();
	pullback();
	pullback();
}

void turnFrontFace(int numOfTurn) {
	pullback();
	pullback();
	pullback();
	lowerArm();
	rotateNeg(numOfTurn);
	raiseArm();
	pullback();
}
void turnBackFace(int numOfTurn) {
	pullback();
	lowerArm();
	rotatePos(numOfTurn);
	raiseArm();
	pullback();
	pullback();
	pullback();
}
void turnRightFace(int numOfTurn) {
	//turn to orientate
	rotateNeg(1);
	pullback();
	lowerArm();
	rotateNeg(numOfTurn);
	raiseArm();
	pullback();
	pullback();
	pullback();
	//turns to orientate
	rotatePos(1);
}
void turnLeftFace(int numOfTurn) {
	//turns to orientate
	rotatePos(1);
	pullback();
	lowerArm();
	rotateNeg(numOfTurn);
	raiseArm();
	pullback();
	pullback();
	pullback();
	rotateNeg(1);
}

int solve (TFileHandle &fin)
{
	int turns = 0, count= 0;
	string solution, moveCount;

	while (readTextPC(fin, solution))
	{
		/*
		displayString(3, solution);
		string letter = stringGetChar(solution, 0), number = stringGetChar(solution, 1), num2 = stringGetChar(solution, 2);
		displayString(5,letter);
		displayString(7,number);
		displayString(9,num2);*/

		if (stringGetChar(solution, 0) != '(')
		{
			if (stringGetChar(solution, 1) == '1'){
				turns = 1;
			}
			if (stringGetChar(solution, 1) == '2'){
				turns = 2;
			}
			if (stringGetChar(solution, 1) == '3'){
				turns = 3;
			}

			if (stringGetChar(solution, 0) == 'U') {
				turnUpFace(turns);
			}
			if (stringGetChar(solution, 0) == 'R') {
				turnRightFace(turns);
			}
			if (stringGetChar(solution, 0) == 'L') {
				turnLeftFace(turns);
			}
			if (stringGetChar(solution, 0) == 'D') {
				turnDownFace(turns);
			}
			if (stringGetChar(solution, 0) == 'B') {
				turnBackFace(turns);
			}
			if (stringGetChar(solution, 0) == 'F') {
				turnFrontFace(turns);
			}
			count++;
			turns = 0;
		}
	}

	return count;
}
