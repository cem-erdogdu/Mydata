// Tic tac toe game
// I will use pointers to change the output during run time
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int first, second = 0;
char* p;
int player_1_win = 0;
int player_2_win = 0;
void check() {
    if ((*p == 'x') && (*(p + 1) == 'x') && (*(p + 2) == 'x')) {
        first++;
    }
    if ((*p == 'x') && (*(p + 3) == 'x') && (*(p + 6) == 'x')) {
        first++;
    }
    if ((*p == 'x') && (*(p + 4) == 'x') && (*(p + 8) == 'x')) {
        first++;
    }
    if ((*(p + 1) == 'x') && (*(p + 4) == 'x') && (*(p + 7) == 'x')) {
        first++;
    }
    if ((*(p + 2) == 'x') && (*(p + 5) == 'x') && (*(p + 8) == 'x')) {
        first++;
    }
    if ((*(p + 2) == 'x') && (*(p + 4) == 'x') && (*(p + 6) == 'x')) {
        first++;
    }
    if ((*(p + 3) == 'x') && (*(p + 4) == 'x') && (*(p + 5) == 'x')) {
        first++;
    }
    if ((*(p + 6) == 'x') && (*(p + 7) == 'x') && (*(p + 8) == 'x')) {
        first++;
    }
    // DISTINCTION BETWEEN X'S AND O'S
    if ((*p == 'o') && (*(p + 1) == 'o') && (*(p + 2) == 'o')) {
        second++;
    }
    if ((*p == 'o') && (*(p + 3) == 'o') && (*(p + 6) == 'o')) {
        second++;
    }
    if ((*p == 'o') && (*(p + 4) == 'o') && (*(p + 8) == 'o')) {
        second++;
    }
    if ((*(p + 1) == 'o') && (*(p + 4) == 'o') && (*(p + 7) == 'o')) {
        second++;
    }
    if ((*(p + 2) == 'o') && (*(p + 5) == 'o') && (*(p + 8) == 'o')) {
        second++;
    }
    if ((*(p + 2) == 'o') && (*(p + 4) == 'o') && (*(p + 6) == 'o')) {
        second++;
    }
    if ((*(p + 3) == 'o') && (*(p + 4) == 'o') && (*(p + 5) == 'o')) {
        second++;
    }
    if ((*(p + 6) == 'o') && (*(p + 7) == 'o') && (*(p + 8) == 'o')) {
        second++;
    }

}
void draw_board() {
    system("cls");
    cout << "    |      |   \n";
    cout << " " << *p << "  |  " << *(p+1) << "   | " << *(p+2) << "      \n";
    cout << "----|------|----\n";
    cout << "    |      |    \n";
    cout << " " << *(p+3) << "  |  " << *(p+4) << "   | " << *(p+5) << "      \n";
    cout << "----|------|----\n";
    cout << "    |      |    \n";
    cout << " " << *(p+6) << "  |  " << *(p+7) << "   | " << *(p+8) << "      \n";
    cout << "    |      |   \n";
}
int main() {
    char arr[] = { '1','2','3','4','5','6','7','8','9' };
    const int ROW = 3;
    const int COLUMN = 3;
    p = new char[ROW * COLUMN];
    // I declared a new array in heap, it will help me to work independently.
    // assignin values to the p
    for (int i = 0; i < ROW; i++) {
        for (int j = 0; j < COLUMN; j++) {
            *(p + i * COLUMN + j) = arr[i * COLUMN + j];
        }
    }
    int input1 = 0;
    int input2 = 0;
    int roll_1, roll_2 = 1;
    int temp_1, temp_2 = 0;
    int sum_of_dices = 0;
    srand(time(NULL));
    char name1[50];
    char name2[50];
    cout << "Hello, welcome to tic tac toe game." << endl;
    cout << "First player please enter your name: ";
    cin.get(name1, 50);
    cin.ignore();
    cout << "Second player please enter your name: ";
    cin.get(name2, 50);
    cin.ignore();
    cout << "In order to decide which player will start the game first we will roll a dice" << endl;
    cout << "Whoever rolls bigger number, that person will start." << endl;
    cout << name1 << ", to roll the first dice please enter 1: ";
    cin >> roll_1;
    cout << "" << endl;
    while (roll_1 != 1) {
        cout << "You did not enter the valid number." << endl;
        cout << "Please enter again" << endl;
        cin >> roll_1;
    }
    temp_1 = rand() % 6 + 1;
    cout << "First dice is: " << temp_1 << endl;
    cout << name2 << ", to roll the second dice please enter 2: ";
    cin >> roll_2;
    cout << "\n";
    while (roll_2 != 2) {
        cout << "You did not enter the valid number." << endl;
        cout << "Please enter again" << endl;
        cin >> roll_2;
    }
    temp_2 = rand() % 6 + 1;
    cout << "Second dice is: " << temp_2 << endl;
    if (temp_1 > temp_2) {
        cout << name1 << " will start first." << endl;
    }
    else if (temp_2 > temp_1) {
        cout << name2 << " will start first." << endl;
    }
    draw_board();
    cout << name1 << " enter a number: ";
    cin >> input1;
    switch (input1) {
    case 1: *p = 'x'; break;
    case 2: *(p + 1) = 'x'; break;
    case 3: *(p + 2) = 'x'; break;
    case 4: *(p + 3) = 'x'; break;
    case 5: *(p + 4) = 'x'; break;
    case 6: *(p + 5) = 'x'; break;
    case 7: *(p + 6) = 'x'; break;
    case 8: *(p + 7) = 'x'; break;
    case 9: *(p + 8) = 'x'; break;
    }
    check();
    draw_board();
    if ((first == 1)) {
        cout << name1 << " win." << endl;
        return 0;
    }

    cout << name2 << " enter a number: ";
    cin >> input2;
    switch (input2) {
    case 1: *p = 'o'; break;
    case 2: *(p + 1) = 'o'; break;
    case 3: *(p + 2) = 'o'; break;
    case 4: *(p + 3) = 'o'; break;
    case 5: *(p + 4) = 'o'; break;
    case 6: *(p + 5) = 'o'; break;
    case 7: *(p + 6) = 'o'; break;
    case 8: *(p + 7) = 'o'; break;
    case 9: *(p + 8) = 'o'; break;
    }
    check();
    draw_board();
    if ((second == 1)) {
        cout << name2 << " win." << endl;
        return 0;
    }

    cout << name1 << " enter a number: ";
    cin >> input1;
    switch (input1) {
    case 1: *p = 'x'; break;
    case 2: *(p + 1) = 'x'; break;
    case 3: *(p + 2) = 'x'; break;
    case 4: *(p + 3) = 'x'; break;
    case 5: *(p + 4) = 'x'; break;
    case 6: *(p + 5) = 'x'; break;
    case 7: *(p + 6) = 'x'; break;
    case 8: *(p + 7) = 'x'; break;
    case 9: *(p + 8) = 'x'; break;
    }
    check();
    draw_board();
    if ((first == 1)) {
        cout << name1 << " win." << endl;
        return 0;
    }

    cout << name2 << " enter a number: ";
    cin >> input2;
    switch (input2) {
    case 1: *p = 'o'; break;
    case 2: *(p + 1) = 'o'; break;
    case 3: *(p + 2) = 'o'; break;
    case 4: *(p + 3) = 'o'; break;
    case 5: *(p + 4) = 'o'; break;
    case 6: *(p + 5) = 'o'; break;
    case 7: *(p + 6) = 'o'; break;
    case 8: *(p + 7) = 'o'; break;
    case 9: *(p + 8) = 'o'; break;
    }
    check();
    draw_board();
    if ((second == 1)) {
        cout << name2 << " win." << endl;
        return 0;
    }

    cout << name1 << " enter a number: ";
    cin >> input1;
    switch (input1) {
    case 1: *p = 'x'; break;
    case 2: *(p + 1) = 'x'; break;
    case 3: *(p + 2) = 'x'; break;
    case 4: *(p + 3) = 'x'; break;
    case 5: *(p + 4) = 'x'; break;
    case 6: *(p + 5) = 'x'; break;
    case 7: *(p + 6) = 'x'; break;
    case 8: *(p + 7) = 'x'; break;
    case 9: *(p + 8) = 'x'; break;
    }
    check();
    draw_board();
    if ((first == 1)) {
        cout << name1 << " win." << endl;
        return 0;
    }

    cout << name2 << " enter a number: ";
    cin >> input2;
    switch (input2) {
    case 1: *p = 'o'; break;
    case 2: *(p + 1) = 'o'; break;
    case 3: *(p + 2) = 'o'; break;
    case 4: *(p + 3) = 'o'; break;
    case 5: *(p + 4) = 'o'; break;
    case 6: *(p + 5) = 'o'; break;
    case 7: *(p + 6) = 'o'; break;
    case 8: *(p + 7) = 'o'; break;
    case 9: *(p + 8) = 'o'; break;
    }
    check();
    draw_board();
    if ((second == 1)) {
        cout << name2 << " win." << endl;
        return 0;
    }

    cout << name1 << " enter a number: ";
    cin >> input1;
    switch (input1) {
    case 1: *p = 'x'; break;
    case 2: *(p + 1) = 'x'; break;
    case 3: *(p + 2) = 'x'; break;
    case 4: *(p + 3) = 'x'; break;
    case 5: *(p + 4) = 'x'; break;
    case 6: *(p + 5) = 'x'; break;
    case 7: *(p + 6) = 'x'; break;
    case 8: *(p + 7) = 'x'; break;
    case 9: *(p + 8) = 'x'; break;
    }
    check();
    draw_board();
    if ((first == 1)) {
        cout << name1 << " win." << endl;
        return 0;
    }

    cout << name2 << " enter a number: ";
    cin >> input2;
    switch (input2) {
    case 1: *p = 'o'; break;
    case 2: *(p + 1) = 'o'; break;
    case 3: *(p + 2) = 'o'; break;
    case 4: *(p + 3) = 'o'; break;
    case 5: *(p + 4) = 'o'; break;
    case 6: *(p + 5) = 'o'; break;
    case 7: *(p + 6) = 'o'; break;
    case 8: *(p + 7) = 'o'; break;
    case 9: *(p + 8) = 'o'; break;
    }
    check();
    draw_board();
    if ((second == 1)) {
        cout << name2 << " win." << endl;
        return 0;
    }

    cout << name1 << " enter a number: ";
    cin >> input1;
    switch (input1) {
    case 1: *p = 'x'; break;
    case 2: *(p + 1) = 'x'; break;
    case 3: *(p + 2) = 'x'; break;
    case 4: *(p + 3) = 'x'; break;
    case 5: *(p + 4) = 'x'; break;
    case 6: *(p + 5) = 'x'; break;
    case 7: *(p + 6) = 'x'; break;
    case 8: *(p + 7) = 'x'; break;
    case 9: *(p + 8) = 'x'; break;
    }
    check();
    draw_board();
    if ((first == 1)) {
        cout << name1 << " win." << endl;
        return 0;
    }
}