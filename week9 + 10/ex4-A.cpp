#include <iostream>

using namespace std;

int main() {
  // Khai báo biến địa phương 'data'
  int data = 10;

  // Tạo con trỏ 'ptr' trỏ đến biến 'data'
  int* ptr = &data;

  // In giá trị của 'data' và địa chỉ mà 'ptr' trỏ đến
  cout << "data: " << data << endl;
  cout << "ptr: " << ptr << endl;

  // Giải phóng vùng nhớ mà 'ptr' trỏ đến (vùng nhớ của biến 'data')
  delete ptr;

  // In giá trị của 'data' sau khi giải phóng
  cout << "data after delete: " << data << endl;

  return 0;
}


//lỗi :
// Việc delete ptr; không giải phóng biến data.
// Nếu ta tiếp tục sử dụng ptr sau khi delete ptr;, sẽ dẫn đến lỗi truy cập vùng nhớ đã giải phóng, có thể gây ra lỗi chương trình hoặc kết quả sai lệch.