// #include <iostream>
// #include <vector>
// #include <ctime> 
// #include <cstdlib>
// #include <string>

// using namespace std;

// // Hàm vẽ hình ảnh ASCII cho bộ phận cơ thể
// void drawBodyPart(int wrongGuesses) {
//   switch (wrongGuesses) {
//     case 0:
//       cout << "   \n";
//       cout << "   O\n";
//       cout << "   |\n";
//       cout << "   /\n";
//       cout << "  /\n";
//       cout << " <\n";
//       cout << " /\n";
//       break;
//     case 1:
//       cout << "   \n";
//       cout << "   O\n";
//       break;
//     case 2:
//       cout << "   \n";
//       cout << "   O\n";
//       cout << "   |\n";
//       break;
//     case 3:
//       cout << "   \n";
//       cout << "   O\n";
//       cout << "   |\n";
//       cout << "   /\n";
//       break;
//     case 4:
//       cout << "   \n";
//       cout << "   O\n";
//       cout << "   |\n";
//       cout << "   /\n";
//       cout << "  /\n";
//       break;
//     case 5:
//       cout << "   \n";
//       cout << "   O\n";
//       cout << "   |\n";
//       cout << "   /\n";
//       cout << "  /\n";
//       cout << " <\n";
//       break;
//     case 6:
//       cout << "   \n";
//       cout << "   O\n";
//       cout << "   |\n";
//       cout << "   /\n";
//       cout << "  /\n";
//       cout << " <>\n";
//       break;
//   }
// }

// // Hàm vẽ trạng thái game
// void drawGameState(const string& word, string& guessedWord, int remainingGuesses) {
//   cout << "\nTrò chơi Hangman\n";
//   cout << "--------------------\n";

//   // Vẽ từ cần đoán
//   for (char c : guessedWord) {
//     cout << c << " ";
//   }
//   cout << "\n";

//   // Vẽ hình ảnh bộ phận cơ thể
//   drawBodyPart(10 - remainingGuesses);

//   // Hiện số lượt đoán còn lại
//   cout << "\nBạn còn " << remainingGuesses << " lượt đoán.\n";
// }

// // Hàm kiểm tra ký tự
// bool checkCharacter(string& word, string& guessedWord, char guess) {
//   guess = tolower(guess); // Chuyển về chữ thường

//   // Kiểm tra xem ký tự đã đoán chưa
//   if (guessedWord.find(guess) != string::npos) {
//     cout << "Bạn đã đoán ký tự này rồi!" << endl;
//     return false;
//   }

//   // Cập nhật trạng thái từ cần đoán
//   bool found = false;
//   for (size_t i = 0; i < word.size(); ++i) {
//     if (word[i] == guess) {
//       guessedWord[i] = guess;
//       found = true;
//     }
//   }

//   return found;
// }

// int main() {

//     vector<string> word;
//   // ... (đọc danh sách từ)

//   while (true) {
//     // Chọn từ ngẫu nhiên
//     srand(time(NULL));
//     int randomIndex = rand() % word.size();
//     string secretWord = word[randomIndex];

//     // Chơi game
//     int remainingGuesses = 10;
//     string guessedWord(secretWord.size(), '_');
//     bool gameWon = false;

//     while (remainingGuesses > 0 && !gameWon) {
//       // ... (vẽ trạng thái game, xử lý đoán ký tự)
//     }

//     // Chọn mức độ khó
//     int difficulty;
//     while (true) {
//         cout << "Chọn mức độ khó (1 - dễ, 2 - trung bình, 3 - khó): ";
//         cin >> difficulty;
//         if (difficulty >= 1 && difficulty <= 3) {
//         break;
//         }
//         cout << "Mức độ khó không hợp lệ. Vui lòng nhập lại.\n";
//     }

//     // Khởi tạo số lượt đoán theo mức độ khó
//     int remainingGuesses;
//     switch (difficulty) {
//         case 1:
//         remainingGuesses = 15;
//         break;
//         case 2:
//         remainingGuesses = 10;
//         break;
//         case 3:
//         remainingGuesses = 7;
//         break;
//     }

//     // Kết thúc game
//     drawGameState(secretWord, guessedWord, remainingGuesses);

//     if (gameWon) {
//       cout << "Chúc mừng bạn đã chiến thắng!" << endl;
//     } else {
//       cout << "Rất tiếc, bạn đã thua!" << endl;
//       cout << "Từ cần đoán là: " << secretWord << endl;
//     }

//     // Hỏi người chơi có muốn chơi tiếp hay không
//     char choice;
//     cout << "\nBạn có muốn chơi tiếp không? (y/n): ";
//     cin >> choice;

//     if (choice != 'y') {
//       break; 
//   }

//   return 0;
// }
