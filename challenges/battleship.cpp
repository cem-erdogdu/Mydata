#include <iostream>
using namespace std;
int draw_board (int **ptrptr1){
cout<<"     "<<"1   |"<<"  2  |"<<"  3 |"<<"  4 |"<<"  5 |"<<"  6 |"<<"  7 |"<<"  8 |"<<"  9 |"<<"  10 |"<<endl;
cout<<"    "<<"---------"<<"---------"<<"-------"<<"--------"<<"--------"<<"-----------"<<endl;
cout<<" "<<"1|  "<<ptrptr1[0][0]<<"   | "<<ptrptr1[0][1]<<"   | "<<ptrptr1[0][2]<<"  | "<<ptrptr1[0][3]<<"  | "<<ptrptr1[0][4]<<"  |  "<<ptrptr1[0][5]<<" | "<<ptrptr1[0][6]<<"  | "<<ptrptr1[0][7]<<"  | "<<ptrptr1[0][8]<<"  |  "<<ptrptr1[0][9]<<"  |"<<endl;
cout<<" "<<"2|  "<<ptrptr1[1][0]<<"   | "<<ptrptr1[1][1]<<"   | "<<ptrptr1[1][2]<<"  | "<<ptrptr1[1][3]<<"  | "<<ptrptr1[1][4]<<"  |  "<<ptrptr1[1][5]<<" | "<<ptrptr1[1][6]<<"  | "<<ptrptr1[1][7]<<"  | "<<ptrptr1[1][8]<<"  |  "<<ptrptr1[1][9]<<"  |"<<endl;
cout<<" "<<"3|  "<<ptrptr1[2][0]<<"   | "<<ptrptr1[2][1]<<"   | "<<ptrptr1[2][2]<<"  | "<<ptrptr1[2][3]<<"  | "<<ptrptr1[2][4]<<"  |  "<<ptrptr1[2][5]<<" | "<<ptrptr1[2][6]<<"  | "<<ptrptr1[2][7]<<"  | "<<ptrptr1[2][8]<<"  |  "<<ptrptr1[2][9]<<"  |"<<endl;
cout<<" "<<"4|  "<<ptrptr1[3][0]<<"   | "<<ptrptr1[3][1]<<"   | "<<ptrptr1[3][2]<<"  | "<<ptrptr1[3][3]<<"  | "<<ptrptr1[3][4]<<"  |  "<<ptrptr1[3][5]<<" | "<<ptrptr1[3][6]<<"  | "<<ptrptr1[3][7]<<"  | "<<ptrptr1[3][8]<<"  |  "<<ptrptr1[3][9]<<"  |"<<endl;
cout<<" "<<"5|  "<<ptrptr1[4][0]<<"   | "<<ptrptr1[4][1]<<"   | "<<ptrptr1[4][2]<<"  | "<<ptrptr1[4][3]<<"  | "<<ptrptr1[4][4]<<"  |  "<<ptrptr1[4][5]<<" | "<<ptrptr1[4][6]<<"  | "<<ptrptr1[4][7]<<"  | "<<ptrptr1[4][8]<<"  |  "<<ptrptr1[4][9]<<"  |"<<endl;
cout<<" "<<"6|  "<<ptrptr1[5][0]<<"   | "<<ptrptr1[5][1]<<"   | "<<ptrptr1[5][2]<<"  | "<<ptrptr1[5][3]<<"  | "<<ptrptr1[5][4]<<"  |  "<<ptrptr1[5][5]<<" | "<<ptrptr1[5][6]<<"  | "<<ptrptr1[5][7]<<"  | "<<ptrptr1[5][8]<<"  |  "<<ptrptr1[5][9]<<"  |"<<endl;
cout<<" "<<"7|  "<<ptrptr1[6][0]<<"   | "<<ptrptr1[6][1]<<"   | "<<ptrptr1[6][2]<<"  | "<<ptrptr1[6][3]<<"  | "<<ptrptr1[6][4]<<"  |  "<<ptrptr1[6][5]<<" | "<<ptrptr1[6][6]<<"  | "<<ptrptr1[6][7]<<"  | "<<ptrptr1[6][8]<<"  |  "<<ptrptr1[6][9]<<"  |"<<endl;
cout<<" "<<"8|  "<<ptrptr1[7][0]<<"   | "<<ptrptr1[7][1]<<"   | "<<ptrptr1[7][2]<<"  | "<<ptrptr1[7][3]<<"  | "<<ptrptr1[7][4]<<"  |  "<<ptrptr1[7][5]<<" | "<<ptrptr1[7][6]<<"  | "<<ptrptr1[7][7]<<"  | "<<ptrptr1[7][8]<<"  |  "<<ptrptr1[7][9]<<"  |"<<endl;;
cout<<" "<<"9|  "<<ptrptr1[8][0]<<"   | "<<ptrptr1[8][1]<<"   | "<<ptrptr1[8][2]<<"  | "<<ptrptr1[8][3]<<"  | "<<ptrptr1[8][4]<<"  |  "<<ptrptr1[8][5]<<" | "<<ptrptr1[8][6]<<"  | "<<ptrptr1[8][7]<<"  | "<<ptrptr1[8][8]<<"  |  "<<ptrptr1[8][9]<<"  |"<<endl;
cout<<""<<"10|  "<<ptrptr1[9][0]<<"   | "<<ptrptr1[9][1]<<"   | "<<ptrptr1[9][2]<<"  | "<<ptrptr1[9][3]<<"  | "<<ptrptr1[9][4]<<"  |  "<<ptrptr1[9][5]<<" | "<<ptrptr1[9][6]<<"  | "<<ptrptr1[9][7]<<"  | "<<ptrptr1[9][8]<<"  |  "<<ptrptr1[9][9]<<"  |"<<endl;
}
int main() {
const int row = 10;
const int column = 10;
int **ptrptr1;
int j = 0;
ptrptr1 = new int *[row]; // we are creating a pointer in heap
for(int i = 0; i < row; i++){
ptrptr1[i] = new int [column];
}
for(int i = 0; i < row; i++){
    for(int j = 0; j < column; j++){
        ptrptr1[i][j] = 10*i +j;
}
}
draw_board(ptrptr1);






}
