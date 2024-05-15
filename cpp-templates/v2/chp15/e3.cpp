//
// Created by fade on 2024/5/15.
//
template<typename T>
void f(const T& t) {};

int main()
{
    bool a = false;
    f(a); // P = const T&，调整为 const T，A = bool：
            // 推导出 T = bool，推导出 A = const bool
            // 推导出的 A 比（原来的）A 更受 cv 限定
    return 0;
}