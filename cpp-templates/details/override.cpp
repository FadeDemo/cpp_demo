//
// Created by fade on 2024/2/11.
//

template<typename Func, typename T>
void apply(Func func_ptr, T x) {
    func_ptr(x);
}

template<typename T> void single(T);

template<typename T> void multi(T);

template<typename T> void multi(T *);

int main()
{
    apply(&single<int>, 3);
//    apply(&multi<int>, 7);
    apply(single<int>, 3);
    return 0;
}