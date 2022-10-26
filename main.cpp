#include <iomanip>
#include <iostream>
using namespace std;

int main() {

  const int N_ROWS = 5;
  const int N_COLS = 5;
  double gradeMatrix[N_ROWS][N_COLS];

  // user input of matrix values
  cout << "Enter the student number and their test scores: " << endl;
  for (int r = 0; r < N_ROWS; r++) {
    for (int c = 0; c < N_COLS; c++) {
      cin >> gradeMatrix[r][c];
    }
    cout << endl;
  }

  // print to check if matrix is correct
  cout << "The matrix you entered is: " << endl;
  for (int r = 0; r < N_ROWS; r++) {
    for (int c = 0; c < N_COLS; c++) {
      cout << setw(6) << gradeMatrix[r][c] << " ";
    }
    cout << endl;
    cout << endl;
  }

  // need outer for loop to loop through rows
  const int O_ROWS = 5;
  const int O_COLUMNS = 7;

  double gradeOutput[O_ROWS][O_COLUMNS];

  for (int r = 0; r < O_ROWS; r++) {

    // loop to add columns
    for (int c = 0; c < O_COLUMNS; c++) {
      gradeOutput[r][0] = gradeMatrix[r][0];
      gradeOutput[r][1] = gradeMatrix[r][1];
      gradeOutput[r][2] = gradeMatrix[r][2];
      gradeOutput[r][3] = gradeMatrix[r][3];
      gradeOutput[r][4] = gradeMatrix[r][4];
      gradeOutput[r][5] = ((gradeMatrix[r][1] + gradeMatrix[r][2] +
                            gradeMatrix[r][3] + gradeMatrix[r][4]) /
                           4);
      gradeOutput[r][6] = (gradeMatrix[r][1] * 0.2) +
                          (gradeMatrix[r][2] * 0.3) +
                          (gradeMatrix[r][3] * 0.3) + (gradeMatrix[r][4] * 0.2);
    }
  }

  cout << "The final grades are: " << endl;
  for (int k = 0; k < O_ROWS; k++) {
    for (int l = 0; l < O_COLUMNS; l++) {
      cout << setw(6) << gradeOutput[k][l] << " ";
    }
    cout << endl;
  }
}