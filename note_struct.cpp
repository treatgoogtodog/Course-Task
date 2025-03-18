#include <string>
#include <iostream>
#include <vector>

using namespace std;


// Struct là kiểu dữ liệu có cấu trúc, được định nghĩa bằng từ khóa struct.
//Có thể chứa các biến, hàm, kiểu dữ liệu khác.
struct MyStruct {
    int x;
    int y;
    string name;

    MyStruct(int x, int y, string name) {
        this->x = x;
        this->y = y;
        this->name = name;
    }
    //Hàm khởi tạo
    //Trong struct có thể sử dụng các từ khoá public, private, protected để quy định phạm vi truy cập của các thành phần.
    //Ngoài ra, struct còn có các từ khoá this, other,... để chỉ đến các thành phần của struct.
};

struct MyStruct2 {
    int x;
    int y;
    string name;

    MyStruct2(int x, int y, string name): x(x), y(y), name(name) {}
    //Hàm khởi tạo, cách viết khác, có thể sử dụng danh sách khởi tạo qua cú pháp như trên.
    //Ngắn gọn hơn, dễ đọc hơn. Tuy nhiên không thể thực hiện các xử lý phức tạp. Không thể chống các lỗi giá trị.
};

int main(){
    vector<int> v = {1, 2, 3, 4, 5};
    for(vector<int>::iterator it = v.begin(); it != v.end(); it++){
        cout << *it << " ";
    }
}