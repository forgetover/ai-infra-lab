#include <iostream>

// 使用指针交换两个整数的值
void swap(int* a, int* b) {
    int temp = *a;  // 解引用a，取出a指向的值
    *a = *b;        // 把b指向的值赋给a指向的内存
    *b = temp;      // 把temp赋给b指向的内存
}

int main() {
    int x = 10;
    int y = 20;

    std::cout << "===== 交换前 =====" << std::endl;
    std::cout << "x 的值: " << x << ", x 的内存地址: " << &x << std::endl;
    std::cout << "y 的值: " << y << ", y 的内存地址: " << &y << std::endl << std::endl;

    // 传入变量的地址（&x 和 &y 就是指针）
    swap(&x, &y);

    std::cout << "===== 交换后 =====" << std::endl;
    std::cout << "x 的值: " << x << ", x 的内存地址: " << &x << std::endl;
    std::cout << "y 的值: " << y << ", y 的内存地址: " << &y << std::endl;

    return 0;
}