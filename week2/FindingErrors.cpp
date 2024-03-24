// 1. while (n<20); // Vòng lặp này sẽ không thực hiện bất kỳ lệnh nào bên trong vì điều kiện đã được đặt trong dấu chấm phẩy.
//     cout << n++ <<endl;

// 2.for (int i = 1, i <= 8, ++i) // Phần tử trong vòng lặp for không được phân cách bằng dấu phẩy.
//    cout << 1.0/i << endl;

// 3.int n = 10;
// do
//     cout << 1.0/n ; // Thiếu {}
//     n++;
// while (n < 20);

// 4. for (int i=10; i<20; ) { //  Vòng lặp vô hạn vì không có bước tăng/giảm giá trị của biến i.
//    cout << i*i <<endl;
//    i--;
// }

