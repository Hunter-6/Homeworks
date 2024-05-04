int* p = new int;
int* p2 = p;
*p = 10;
delete p; // Chỉ giải phóng p

// *p2 = 100; // Bỏ dòng này vì p đã bị giải phóng

cout << *p2; // In ra giá trị 10

// delete p2; // Bỏ dòng này vì p2 đã được giải phóng cùng p
