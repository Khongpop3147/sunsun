#include <iostream>
#include <string>
#include <conio.h>
#include <curses.h>
#include <stdio.h>
using namespace std;

int total_score=0;
int correct_answer = 0;
int hints_used = 0;
string Name[5];
string level;

//the main menu view and some additionl functionalities
int main_menu_view()
{
	system("color 3F");
	cout << "\t\t  *************************************************************************************" << endl;
	cout << "\t\t  *****                                                                           *****" << endl;
	cout << "\t\t  *****           H E L L O !  W E L C O M E  T O  T H E  'Q U I Z L E T'         *****" << endl;
	cout << "\t\t  *****                = = = = = = = = = = = = = = = = = = = = = = = =            *****" << endl;
	cout << "\t\t  *****                          = = = = = = = = = = = =                          *****" << endl;
	cout << "\t\t  *****                                   B Y                                     *****" << endl;
	cout << "\t\t  *****                       R U S T A M    Z O K I R O V                        *****" << endl;
	cout << "\t\t  *****                                                                           *****" << endl;
	cout << "\t\t  *************************************************************************************" << endl;
	cout << endl;

	cout << "\t\t\t\t\t\tH O W  T O  P L A Y\n\n";
	cout << "\t\t1. IN THIS QUIZ GAME YOU WILL BE GIVEN 10 'C++ PROGRAMMING LANGUAGE' RELATED QUESTIONS.\n\n";
	cout << "\t\t2. IF YOU PRESS INCORRECT KEY, THE PROGRAM WILL AGAIN ASK YOU TO INPUT CORRECT VALUE.\n\n";
	cout << "\t\t3. ADDITIONALLY YOU WILL HAVE SOME HINTS WHICH YOU CAN USE FROM the 8TH QUESTION.\n\n";
	cout << "\t\t4. YOU WILL LOSE '5' POINTS FROM YOUR OVERALL SCORE IF YOU WILL USE HINTS.\n\n\n\n";
	cout << "\t\t\t\t\tPRESS THE 'ENTER' KEY TO START A QUIZ... ";
	if (cin.get() == '\n') {
		system("cls");
		cout << "\t\t\t\t\tI N F O R M A T I O N   T A B L E\n\n";
		cout << "What is your name? ";
		getline(cin, Name[0]);
		cout << "What is your level of C++?"<<endl;
		cout << "[1]. Junior" << endl;
		cout << "[2]. Middle" << endl;
		cout << "[3]. Senior" << endl;
		do {
			cout << "Choose the level of difficulty: ";
			cin >> level;
			cin.clear();
		} while (level != "1"&&level!="2"&&level!="3");
		string Respond;
		cout << endl;
		cout << "Are you ready to take the Quiz " << Name[0] << " ? Yes = 'Yes'/No = 'Any key'. " << endl;
		cout << "Your choice: ";
		cin >> Respond;
		if (Respond == "yes" || Respond == "Yes")
		{
			cout << endl;
			cout << "OK, Good Like!!! " << endl;
			system("cls");
			return 1;
		}
		else
		{
			cout << "OK. Goodbye." << endl;
			system("exit");
			return 0;
		}
	}
	else
		cout << "I meant ONLY the ENTER key... Oh well.\n";
	return 0;
}
//the view for the hints in the corner
void hints()
{
	cout << "                                                                                     ***********************************" << endl;
	cout << "                                                                                     **   A: Audience help            **" << endl;
	cout << "                                                                                     **   B: 50:50                    **" << endl;
	cout << "                                                                                     **   C: Room for mistake         **" << endl;
	cout << "                                                                                     **   D: Change the question      **" << endl;
	cout << "                                                                                     ***********************************" << endl;
}
//questions
void doq1() {
    cout << "                                                                                     ***********************************" << endl;
	cout << "                                                                                     *****      TOTAL SCORE:" << total_score << "     *****" << endl;
	cout << "                                                                                     ***********************************" << endl;
    cout << "\t\t\t\t\t Q U E S T I O N No. 1"<< endl;
    cout << "What is the name of bully Gian's sister?" << endl;
    cout << "[1] Hannah"<<endl;
    cout << "[2] Giani" << endl;
    cout << "[3] Jaiko" << endl;
    cout << "[4] Artisia" << endl;
    string answer;
    cout << endl;
    cout << "\t\t\t\t\tENTER YOUR CHOICE: ";
    cin >> answer;
    //limiting the answers of the user
    if (answer == "1" || answer == "2" || answer == "3" || answer == "4"){
        if (answer == "3"){
            total_score += 10;
            correct_answer += 1;
            cout << "C O R R E C T A N S W E R !!!" << endl;
            cout << "You got 10 points out of 10." << endl;
        }
    else if (answer == "1" || answer == "2" || answer == "4"){
        cout << "W R O N G A N S W E R !!!" << endl;
        cout << "You got 0 points out of 10." << endl;
    }
    cout << endl;
    system("pause");
    system("cls");
    }else{
        system("cls");
        cout << "\t\t**********" << endl;
        cout << "\t\t**** P L E A S E I N P U T C O R R E C T V A L U E ! " << endl;
        cout << "\t\t*********************************************************************************" << endl;
        cout << endl;
        doq1();
    }
}
void doq2() {
    cout << "                                                                                     ***********************************" << endl;
	cout << "                                                                                     *****      TOTAL SCORE:" << total_score << "     *****" << endl;
	cout << "                                                                                     ***********************************" << endl;
    cout << "\t\t\t\t\t Q U E S T I O N No. 2" << endl;
    cout << "Who is the only main female character in the show whom Nobita likes very much?" << endl;
    cout << "[1] Ran" << endl;
    cout << "[2] Christine Goda" << endl;
    cout << "[3] Miyoko" << endl;
    cout << "[4] Shizuka Minamoto" << endl;
    string answer;
    cout<<endl;
    cout << "\t\t\t\t\tENTER YOUR CHOICE: ";
    cin >> answer;
    if (answer == "1" || answer == "2" || answer == "3" || answer == "4"){
        if (answer == "4"){
            total_score += 10;
            correct_answer += 1;
            cout << "C O R R E C T A N S W E R !!!" << endl;
            cout << "You got 10 points out of 10." << endl;
        }
    else if (answer == "1" || answer == "2" || answer == "3"){
        cout << "W R O N G A N S W E R !!!" << endl;
        cout << "You got 0 points out of 10." << endl;
    }
    cout << endl;
    system("pause");
    system("cls");
    }else{
        system("cls");
        cout << "\t\t**********" << endl;
        cout << "\t\t**** P L E A S E I N P U T C O R R E C T V A L U E ! " << endl;
        cout << "\t\t*********************************************************************************" << endl;
        cout << endl;
        doq2();
    }
}
void doq3() {
    cout << "                                                                                     ***********************************" << endl;
	cout << "                                                                                     *****      TOTAL SCORE:" << total_score << "     *****" << endl;
	cout << "                                                                                     ***********************************" << endl;
    cout << "\t\t\t\t\t Q U E S T I O N No. 3" << endl;
    cout << "What is the color of Dorami, Doraemon's sister?" << endl;
    cout << "[1] Pink" << endl;
    cout << "[2] Orange" << endl;
    cout << "[3] Purple" << endl;
    cout << "[4] Yellow" << endl;
    string answer;
    cout << endl;
    cout << "\t\t\t\t\tENTER YOUR CHOICE: ";
    cin >> answer;
    if (answer == "1" || answer == "2" || answer == "3" || answer == "4"){
        if (answer == "4") {
        total_score += 10;
        correct_answer += 1;
        cout << "C O R R E C T A N S W E R !!!" << endl;
        cout << "You got 10 points out of 10." << endl;
        }else if (answer == "1" || answer == "2" || answer == "3"){
            cout << "W R O N G A N S W E R !!!" << endl;
            cout << "You got 0 points out of 10." << endl;
        }
    cout << endl;
    system("pause");
    system("cls");
    }else{
        system("cls");
        cout << "\t\t**********" << endl;
        cout << "\t\t**** P L E A S E I N P U T C O R R E C T V A L U E ! " << endl;
        cout << "\t\t*********************************************************************************" << endl;
        cout << endl;
        doq3();
    }
}
void doq4() {
    cout << "                                                                                     ***********************************" << endl;
	cout << "                                                                                     *****      TOTAL SCORE:" << total_score << "     *****" << endl;
	cout << "                                                                                     ***********************************" << endl;
    cout << "\t\t\t\t\t Q U E S T I O N No. 4" << endl;
    cout << "What is Gian's passion?" << endl;
    cout << "[1] Dancing" << endl;
    cout << "[2] Karate" << endl;
    cout << "[3] Sumo Wrestling" << endl;
    cout << "[4] Singing" << endl;
    string answer;
    cout << endl;
    cout << "\t\t\t\t\tENTER YOUR CHOICE: ";
    cin >> answer;
    if (answer == "1" || answer == "2" || answer == "3" || answer == "4"){
        if (answer == "4") {
        total_score += 10;
        correct_answer += 1;
        cout << "C O R R E C T A N S W E R !!!" << endl;
        cout << "You got 10 points out of 10." << endl;
        }else if (answer == "1" || answer == "2" || answer == "3"){
            cout << "W R O N G A N S W E R !!!" << endl;
            cout << "You got 0 points out of 10." << endl;
            }
    cout << endl;
    system("pause");
    system("cls");
    }else{
        system("cls");
        cout << "\t\t**********" << endl;
        cout << "\t\t**** P L E A S E I N P U T C O R R E C T V A L U E ! " << endl;
        cout << "\t\t*********************************************************************************" << endl;
        cout << endl;
        doq4();
    }
}
void doq5() {
    cout << "                                                                                     ***********************************" << endl;
	cout << "                                                                                     *****      TOTAL SCORE:" << total_score << "     *****" << endl;
	cout << "                                                                                     ***********************************" << endl;
    cout << "\t\t\t\t\t Q U E S T I O N No. 5" << endl;
    cout << "Who is Gian's sidekick?" << endl;
    cout << "[1] Dekisugi;" << endl;
    cout << "[2] Suneo" << endl;
    cout << "[3] Jaiko" << endl;
    cout << "[4] Nobita" << endl;
    string answer;
    cout << endl;
    cout << "\t\t\t\t\tENTER YOUR CHOICE: ";
    cin >> answer;
    if (answer == "1" || answer == "2" || answer == "3" || answer == "4"){if (answer == "2") {
        total_score += 10;
        correct_answer += 1;
        cout << "C O R R E C T A N S W E R !!!" << endl;
        cout << "You got 10 points out of 10." << endl;
    }else if (answer == "1" || answer == "3" || answer == "4"){
        cout << "W R O N G A N S W E R !!!" << endl;
        cout << "You got 0 points out of 10." << endl;
        }
    cout << endl;
    system("pause");
    system("cls");
    }else{
        system("cls");
        cout << "\t\t**********" << endl;
        cout << "\t\t**** P L E A S E I N P U T C O R R E C T V A L U E ! " << endl;
        cout << "\t\t*********************************************************************************" << endl;
        cout << endl;
        doq5();
    }
}
void doq6() {
    cout << "                                                                                     ***********************************" << endl;
	cout << "                                                                                     *****      TOTAL SCORE:" << total_score << "     *****" << endl;
	cout << "                                                                                     ***********************************" << endl;
    cout << "\t\t\t\t\t Q U E S T I O N No. 6" << endl;
    cout << "Whom or what is Doraemon scared of?" << endl;
    cout << "[1] Nobita" << endl;
    cout << "[2] Rats" << endl;
    cout << "[3] Suneo" << endl;
    cout << "[4] Cats" << endl;
    string answer;
    cout << endl;
    cout << "\t\t\t\t\tENTER YOUR CHOICE: ";
    cin >> answer;
    if (answer == "1" || answer == "2" || answer == "3" || answer == "4"){
        if (answer == "2"){
        total_score += 10;
        correct_answer += 1;
        cout << "C O R R E C T A N S W E R !!!" << endl;
        cout << "You got 10 points out of 10." << endl;
        }else if (answer == "1" || answer == "3" || answer == "4"){
			cout << "W R O N G  A N S W E R !!!" << endl;
			cout << "You got 0 points out of 10." << endl;
		}
			cout << endl;
			system("pause");
			system("cls");
		}else{
			system("cls");
			cout << "\t\t*************************************************************************************" << endl;
			cout << "\t\t****           P L E A S E  I N P U T  C O R R E C T  V A L U E !                ****" << endl;
			cout << "\t\t*************************************************************************************" << endl;
			cout << endl;
			doq6();
		}
}
void doq7() {
    cout << "                                                                                     ***********************************" << endl;
	cout << "                                                                                     *****      TOTAL SCORE:" << total_score << "     *****" << endl;
	cout << "                                                                                     ***********************************" << endl;
    cout << "\t\t\t\t\t Q U E S T I O N No. 7" << endl;
    cout << "What is Doraemon?" << endl;
    cout << "[1] an adventure storybook series!" << endl;
    cout << "[2] an adventure-fiction cartoon series!" << endl;
    cout << "[3] both!" << endl;
    cout << "[4] neither!" << endl;
    string answer;
    cout << endl;
    cout << "\t\t\t\t\tENTER YOUR CHOICE: ";
    cin >> answer;
        if (answer == "1" || answer == "2" || answer == "3" || answer == "4"){
            if (answer == "4") {
                total_score += 10;
                correct_answer += 1;
                cout << "C O R R E C T A N S W E R !!!" << endl;
                cout << "You got 10 points out of 10." << endl;
            }else if (answer == "1" || answer == "3" || answer == "2"){
                cout << "W R O N G A N S W E R !!!" << endl;
                cout << "You got 0 points out of 10." << endl;
	        }           
		cout << endl;
		system("pause");
		system("cls");
        }else{
		system("cls");
		cout << "\t\t*************************************************************************************" << endl;
		cout << "\t\t****           P L E A S E  I N P U T  C O R R E C T  V A L U E !                ****" << endl;
		cout << "\t\t*************************************************************************************" << endl;
		cout << endl;
		doq7();
	}
}
void doq8() {
    cout << "                                                                                     ***********************************" << endl;
	cout << "                                                                                     *****      TOTAL SCORE:" << total_score << "     *****" << endl;
	cout << "                                                                                     ***********************************" << endl;
    hints();
    cout << "\t\t\t\t\t Q U E S T I O N No. 8" << endl;
    cout << "Does Doraemon have any siblings?" << endl;
    cout << "[1] True" << endl;
    cout << "[2] False" << endl;
    cout << "[3] Unevaluatable" << endl;
    string answer;
    cout << endl;
    cout << "\t\t\t\t\tENTER YOUR CHOICE: ";
    cin >> answer;
    //limiting the answers of the user
        if (answer == "1" || answer == "2" || answer == "3" ){
            if (answer == "1") {
                total_score += 10;
                correct_answer += 1;
                cout << "C O R R E C T A N S W E R !!!" << endl;
                cout << "You got 10 points out of 10." << endl;
	        }
	else if (answer == "2" || answer == "3")
	{
		cout << "W R O N G  A N S W E R !!!" << endl;
		cout << "You got 0 points out of 10." << endl;
		
	}
		cout << endl;
		system("pause");
		system("cls");
}
//if cases for the hints
else if (answer == "A" || answer == "a")
{
	hints_used++;
	cout << endl;
	cout << "Audience prediction is...  " << endl;
	cout << "[1] 42%" << endl;
	cout << "[2] 38%" << endl;
	cout << "[3] 20%" << endl;
	cout << endl;
	cout << "\t\t\t\t\tENTER YOUR CHOICE: ";
	cin >> answer;
	if (answer == "1") {
		total_score += 5;
		correct_answer += 1;
		cout << "C O R R E C T   A N S W E R !!!" << endl;
		cout << "You got 10 points out of 5." << endl;

	}
	else if (answer == "2" || answer == "3")
	{
		cout << "W R O N G  A N S W E R !!!" << endl;
		cout << "You got 0 points out of 5." << endl;

	}

	cout << endl;
	system("pause");
	system("cls");
}
else if (answer == "B" || answer == "b")
{
	hints_used++;
	system("cls");
	cout << "Now you have chance to choose two answers. If one of them will correct you will take 5 points." << endl;
	cout << "\t\t\t\t\tQ U E S T I O N  No. 8" << endl;
	cout << "Does Doraemon have any siblings?" << endl;
	cout << "[1] True" << endl;
	cout << "[2] False" << endl;
	cout << "[3] Unevaluatable" << endl;
	string answer1, answer2;
	cout << endl;
	cout << "\t\t\t\t\tENTER YOUR FIRST CHOICE: ";
	cin >> answer1;
	cout << "\t\t\t\t\tENTER YOUR SECOND CHOICE: ";
	cin >> answer2;
	if (answer1 == "1" || answer2 == "1")
	{
		total_score += 5;
		correct_answer += 1;
		cout << "C O R R E C T   A N S W E R !!!" << endl;
		cout << "You got 5 points out of 5." << endl; 
	}
	else 
	{
		cout << "W R O N G  A N S W E R !!!" << endl;
		cout << "You got 0 points out of 5." << endl;
	}
	cout << endl;
	system("pause");
	system("cls");
}
else if (answer == "C" || answer == "c")
{
	hints_used++;
	system("cls");
	cout << "Now you have chance to answer incorrectly. You will take 5 points for this question." << endl;
	cout << "\t\t\t\t\tQ U E S T I O N  No. 8" << endl;
	cout << "Does Doraemon have any siblings?" << endl;
	cout << "[1] True" << endl;
	cout << "[2] False" << endl;
	cout << "[3] Unevaluatable" << endl;
	string answer;
	cout << endl;
	cout << "\t\t\t\t\tENTER YOUR CHOICE: ";
	cin >> answer;
    total_score += 5;
    correct_answer += 1;
	if(answer=="1")
    cout << "C O R R E C T   A N S W E R !!!" << endl;
    cout << "You got 5 points out of 5." << endl;
	cout << endl;
	system("pause");
	system("cls");
}
else if (answer == "D" || answer == "d") 
{
     hints_used++;
	system("cls");
	cout << "\t T H I S   I S  A  N E W   Q U E S T I O N. Y O U  W I L L  G E T  5  P O I N T S. " << endl;
	cout << endl;
	cout << "Who does Shizuka have a serious crush on?" << endl;
	cout << "[1] Nobody" << endl;
	cout << "[2] Nobita" << endl;
	cout << "[3] Dekisugi" << endl;
	string answer;
	cout << endl;
	cout << "\t\t\t\t\tENTER YOUR CHOICE: ";
	cin >> answer;
		if (answer == "1") {
			total_score += 5;
			correct_answer += 1;
			cout << "C O R R E C T   A N S W E R !!!" << endl;
			cout << "You got 5 points out of 5." << endl;

		}
		else if (answer == "2" || answer == "3")
		{
			cout << "W R O N G  A N S W E R !!!" << endl;
			cout << "You got 0 points out of 5." << endl;

		}
	cout << endl;
	system("pause");
	system("cls");
}

else
	{
		system("cls");
		cout << "\t\t*************************************************************************************" << endl;
		cout << "\t\t****           P L E A S E  I N P U T  C O R R E C T  V A L U E !                ****" << endl;
		cout << "\t\t*************************************************************************************" << endl;
		cout << endl;
		doq8();
	}
}
void doq9() {
    cout << "                                                                                     ***********************************" << endl;
	cout << "                                                                                     *****      TOTAL SCORE:" << total_score << "     *****" << endl;
	cout << "                                                                                     ***********************************" << endl;
    hints();
    cout << "\t\t\t\t\t Q U E S T I O N No. 9" << endl;
    cout << "Gian always picks on Nobita. Who helps him(unwillingly) to do this?" << endl;
    cout << endl;
    cout << "[1] Suneo" << endl;
    cout << "[2] Dekisugi" << endl;
    cout << "[3] Doraemon" << endl;
    cout << "[4] Nobisuke" << endl;
    string answer;
    cout << endl;
    cout << "\t\t\t\t\tENTER YOUR CHOICE: ";
    cin >> answer;
        if (answer == "1" || answer == "2" || answer == "3" || answer == "4"){
            if (answer == "1") {
                total_score += 10;
                correct_answer += 1;
                cout << "C O R R E C T A N S W E R !!!" << endl;
                cout << "You got 10 points out of 10." << endl;
                	}
	else if (answer == "2" || answer == "3" || answer == "4")
	{
		cout << "W R O N G  A N S W E R !!!" << endl;
		cout << "You got 0 points out of 10." << endl;
		
	}
		cout << endl;
		system("pause");
		system("cls");
}
else if (answer == "A" || answer == "a")
{
	hints_used++;
	cout << endl;
	cout << "Audience prediction is...  " << endl;
	cout << "[1] 30%" << endl;
	cout << "[2] 25%" << endl;
	cout << "[3] 20%" << endl;
	cout << "[4] 25%" << endl;
	cout << endl;
	cout << "\t\t\t\t\tENTER YOUR CHOICE: ";
	cin >> answer;
	if (answer == "1") {
		total_score += 5;
		correct_answer += 1;
		cout << "C O R R E C T   A N S W E R !!!" << endl;
		cout << "You got 5 points out of 5." << endl;

	}
	else if (answer == "2" || answer == "3" || answer == "4")
	{
		cout << "W R O N G  A N S W E R !!!" << endl;
		cout << "You got 0 points out of 5." << endl;
	}
	cout << endl;
	system("pause");
	system("cls");
}
else if (answer == "B" || answer == "b")
{
	hints_used++;
	system("cls");
	cout << "Now you have chance to choose two answers. If one of them will correct you will take 5 points." << endl;
	cout << "\t\t\t\t\tQ U E S T I O N  No. 9" << endl;
	cout << "Gian always picks on Nobita. Who helps him(unwillingly) to do this?" << endl;
	cout << endl;
	cout << "[1] Suneo" << endl;
    cout << "[2] Dekisugi" << endl;
    cout << "[3] Doraemon" << endl;
    cout << "[4] Nobisuke" << endl;
	string answer1, answer2;
	cout << endl;
	cout << "\t\t\t\t\tENTER YOUR FIRST CHOICE: ";
	cin >> answer1;
	cout << "\t\t\t\t\tENTER YOUR SECOND CHOICE: ";
	cin >> answer2;
	if (answer1 == "1" || answer2 == "1")
	{
		total_score += 5;
		correct_answer += 1;
		cout << "C O R R E C T   A N S W E R !!!" << endl;
		cout << "You got 5 points out of 5." << endl;
	}
	else
	{
		cout << "W R O N G  A N S W E R !!!" << endl;
		cout << "You got 0 points out of 5." << endl;
	}
	cout << endl;
	system("pause");
	system("cls");
	
}
else if (answer == "C" || answer == "c")
{
	hints_used++;
	system("cls");
	cout << "Now you have chance to answer incorrectly. You will take 5 points for this question." << endl;
	cout << "\t\t\t\t\tQ U E S T I O N  No. 9" << endl;
    cout << "Gian always picks on Nobita. Who helps him(unwillingly) to do this?" << endl;
    cout << endl;
    cout << "[1] Suneo" << endl;
    cout << "[2] Dekisugi" << endl;
    cout << "[3] Doraemon" << endl;
    cout << "[4] Nobisuke" << endl;
	string answer;
	cout << endl;
	cout << "\t\t\t\t\tENTER YOUR CHOICE: ";
	cin >> answer;
	total_score += 5;
	correct_answer += 1;
	if (answer == "1")
		cout << "C O R R E C T   A N S W E R !!!" << endl;
	cout << "You got 5 points out of 5." << endl;
	cout << endl;
	system("pause");
	system("cls");
	}
    else if (answer == "D" || answer == "d") {
    hints_used++;
    system("cls");
    cout << "\t T H I S   I S  A  N E W   Q U E S T I O N. Y O U  W I L L  G E T  5  P O I N T S. " << endl;
    cout << endl;
    cout << "Doraemon is afraid of mice. Why?" << endl;
    cout << "[1] He had his ears bitten off by a mouse" << endl;
    cout << "[2] He's not afraid of mice" << endl;
    cout << "[3] Because he's an elephant" << endl;
    string answer;
    cout << endl;
    cout << "\t\t\t\t\tENTER YOUR CHOICE: ";
    cin >> answer;
    if (answer == "1") {
    	total_score += 5;
    	correct_answer += 1;
    	cout << "C O R R E C T   A N S W E R !!!" << endl;
    	cout << "You got 5 points out of 5." << endl;

    }
    else if (answer == "2" || answer == "3")
    {
    	cout << "W R O N G  A N S W E R !!!" << endl;
    	cout << "You got 0 points out of 5." << endl;

    }
    	cout << endl;
    	system("pause");
    	system("cls");
    }
    else
    	{
    		system("cls");
    		cout << "\t\t*************************************************************************************" << endl;
    		cout << "\t\t****           P L E A S E  I N P U T  C O R R E C T  V A L U E !                ****" << endl;
    		cout << "\t\t*************************************************************************************" << endl;
    		cout << endl;
    		doq9();
    	}
}
void doq10() {
    cout << "                                                                                     ***********************************" << endl;
	cout << "                                                                                     *****      TOTAL SCORE:" << total_score << "     *****" << endl;
	cout << "                                                                                     ***********************************" << endl;
    hints();
    cout << "\t\t\t\t\t Q U E S T I O N No. 10" << endl;
    cout << "Which is the first Doraemon film?" << endl;
    cout << "[1] Nobita's Little Space War" << endl;
    cout << "[2] The Record of Nobita's Spaceblazer" << endl;
    cout << "[3] Nobita's Dinosaur" << endl;
    cout << "[4] Nobita's Great Adventure in the South Seas" << endl;
    string answer;
    cout << endl;
    cout << "\t\t\t\t\tENTER YOUR CHOICE: ";
    cin >> answer;
    if (answer == "1" || answer == "2" || answer == "3" || answer == "4"){
        if (answer == "3") {
            total_score += 10;
            correct_answer += 1;
            cout << "C O R R E C T A N S W E R !!!" << endl;
            cout << "You got 10 points out of 10." << endl;
        }
    else if (answer == "1" || answer == "2" || answer == "4")
    {
    cout << "W R O N G A N S W E R !!!" << endl;
    cout << "You got 0 points out of 10." << endl;
    }
    cout << endl;
    system("pause");
    system("cls");
    }
    else if (answer == "A" || answer == "a")
    {
    hints_used++;
    cout << endl;
    cout << "Audience prediction is... " << endl;
    cout << "[1] 30%" << endl;
    cout << "[2] 25%" << endl;
    cout << "[3] 20%" << endl;
    cout << "[4] 25%" << endl;
    cout << endl;
    cout << "\t\t\t\t\tENTER YOUR CHOICE: ";
    cin >> answer;
    if (answer == "3") {
    total_score += 5;
    correct_answer += 1;
    cout << "C O R R E C T A N S W E R !!!" << endl;
    cout << "You got 5 points out of 5." << endl;
    }
    else if (answer == "1" || answer == "2" || answer == "4")
    {
    cout << "W R O N G A N S W E R !!!" << endl;
    cout << "You got 0 points out of 5." << endl;
	}
	cout << endl;
	system("pause");
	system("cls");
}
else if (answer == "B" || answer == "b")
{
	hints_used++;
	system("cls");
	cout << "Now you have chance to choose two answers. If one of them will correct you will take 5 points." << endl;
	cout << "\t\t\t\t\tQ U E S T I O N  No. 10" << endl;
	cout << "Which is the first Doraemon film?" << endl;
    cout << "[1] Nobita's Little Space War" << endl;
    cout << "[2] The Record of Nobita's Spaceblazer" << endl;
    cout << "[3] Nobita's Dinosaur" << endl;
    cout << "[4] Nobita's Great Adventure in the South Seas" << endl;
	string answer1, answer2;
	cout << endl;
	cout << "\t\t\t\t\tENTER YOUR FIRST CHOICE: ";
	cin >> answer1;
	cout << "\t\t\t\t\tENTER YOUR SECOND CHOICE: ";
	cin >> answer2;
	if (answer1 == "3" || answer2 == "3")
	{
		total_score += 5;
		correct_answer += 1;
		cout << "C O R R E C T   A N S W E R !!!" << endl;
		cout << "You got 5 points out of 5." << endl;
	}
	else
	{
		cout << "W R O N G  A N S W E R !!!" << endl;
		cout << "You got 0 points out of 5." << endl;
	}
	cout << endl;
	system("pause");
	system("cls");
}
else if (answer == "C" || answer == "c")
{
	hints_used++;
	system("cls");
	cout << "Now you have chance to answer incorrectly. You will take 5 points for this question." << endl;
	cout << "\t\t\t\t\tQ U E S T I O N  No. 10" << endl;
	cout << "Which is the first Doraemon film?" << endl;
    cout << "[1] Nobita's Little Space War" << endl;
    cout << "[2] The Record of Nobita's Spaceblazer" << endl;
    cout << "[3] Nobita's Dinosaur" << endl;
    cout << "[4] Nobita's Great Adventure in the South Seas" << endl;
	string answer;
	cout << endl;
	cout << "\t\t\t\t\tENTER YOUR CHOICE: ";
	cin >> answer;
	total_score += 5;
	correct_answer += 1;
	if (answer == "3")
		cout << "C O R R E C T   A N S W E R !!!" << endl;
	cout << "You got 5 points out of 5." << endl;
	cout << endl;
	system("pause");
	system("cls");

}
else if (answer == "D" || answer == "d") {
hints_used++;
	system("cls");
	cout << "\t T H I S   I S  A  N E W   Q U E S T I O N. Y O U  W I L L  G E T  '5'  P O I N T S. " << endl;
	cout << endl;
	cout << "Last question. What name did Nobita give the puppy he found in one episode/book?" << endl;
	cout << "[1] Hachi" << endl;
	cout << "[2] Ichi" << endl;
	cout << "[3] Papi" << endl;
	string answer;
	cout << endl;
	cout << "\t\t\t\t\tENTER YOUR CHOICE: ";
	cin >> answer;
	if (answer == "2") {
		total_score += 5;
		correct_answer += 1;
		cout << "C O R R E C T   A N S W E R !!!" << endl;
		cout << "You got 5 points out of 5." << endl;

	}
	else if (answer == "1" || answer == "3")
	{
		cout << "W R O N G  A N S W E R !!!" << endl;
		cout << "You got 0 points out of 5." << endl;

	}
	cout << endl;
	system("pause");
	system("cls");
}
else
{
	system("cls");
	cout << "\t\t*************************************************************************************" << endl;
	cout << "\t\t****           P L E A S E  I N P U T  C O R R E C T  V A L U E !                ****" << endl;
	cout << "\t\t*************************************************************************************" << endl;
	cout << endl;
	doq10();
}
}
void after_game() {
	system("cls");
	system("color 0A");
	cout << "\t\t*************************************************************************************" << endl;
	cout << "\t\t*****                                                                           *****" << endl;
	cout << "\t\t*****                       C O N G R A T U L A T I O N S ! ! !                 *****" << endl;
	cout << "\t\t*****                = = = = = = = = = = = = = = = = = = = = = = = =            *****" << endl;
	cout << "\t\t*****                            = = = = = = = = = = =                          *****" << endl;
	cout << "\t\t*****                                                                           *****" << endl;
	cout << "\t\t*****                                                                           *****" << endl;
	cout << "\t\t*****                                                                           *****" << endl;
	cout << "\t\t*************************************************************************************" << endl;
	cout << endl;
	cout << "\tTOTAL SCORE: " << total_score << endl;
	cout << "\tYOU HAVE ANSWERED FOR '" << correct_answer << "' QUESTIONS OUT OF 10." << endl;
	cout << "\tYOU HAVE USED "<<hints_used<<" HINTS DURING THE GAME."<<endl;
	system("pause");
}

void scores_table();

int main() {
	int user_choice;
	user_choice = main_menu_view();
	if (user_choice) {
		if(level=="1"){
            doq1();
            doq2();
		    doq3();
		    doq4();
		    doq5();
            doq6();
		    doq7();
		    doq8();
		    doq9();
		    doq10();
            after_game();
		    scores_table();
		    return 0;
        }else if(level=="2"){
            
        }else if(level=="3"){
        
        }
		
		
		
		return 0;
	}
	else {
		return 0;
	}
	return 0;
}

void scores_table()
{
	system("cls");
	cout << "\t\tH I G H E S T   S C O R E S" << endl;
	cout << "*********************************************************************" << endl;
	cout << "***** 1 Rustam Zokirov  ***" << "              ***  " << "100" <<"  *****"<< endl;
	cout << "***** 2 Alimov 8        ***" << "              ***  " << "80" << "   *****" << endl;
	cout << "***** 3 " << Name[0] << "                      ***" << "              ***  " << total_score << "    *****" << endl;
	cout << "***** 4 " << Name[1] << "                ***" << "              ***  " << total_score << "   *****" << endl;
	cout << "***** 5 " << Name[2] << "                ***" << "              ***  " << total_score << "   *****" << endl;
	 
	cout << endl; 
	cout << "Do you want to start a QUIZ again? (Yes/No)" << endl;
	string play_again;
	cin >> play_again;
	if (play_again == "Yes" || play_again == "yes")
	{
		total_score = 0;
		main();
	}
	else
		cout << "OK, Goodbye! ";
}