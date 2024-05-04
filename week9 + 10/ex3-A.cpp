// Đoạn code có một lỗi trong lệnh cerr << "a after deleting c:" << "-" << a << "-" << endl;. Lỗi này xảy ra do vi phạm quy tắc giải phóng mảng động.

// Sửa lại như sau:
char* a = new char[10];
char* c = a + 3;
for (int i = 0; i < 9; i++) a[i] = 'a';
a[9] = '\0';
cerr <<"a: " << "-" << a << "-" << endl;
cerr <<"c: " << "-" << c << "-" << endl;
delete [] a; // Sửa thành delete [] a
cerr << "a after deleting c:" << "-" << a << "-" << endl;
