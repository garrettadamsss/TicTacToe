template <typename T>
void drawBoard(T A[10]){
    std::cout << "\n";
    std::cout << A[0] << "  | " << A[1] << "  | " << A[2] << "\n";
    std::cout << "____________\n";
    std::cout << A[3] << "  | " << A[4] << "  | " << A[5] << "\n";
    std::cout << "____________\n";
    std::cout << A[6] << "  | " << A[7] << "  | " << A[8] << "\n";
    std::cout << "\n";
    
}
bool validate(int pos, char choice, char player);
bool checkIfWon(int array[9]);