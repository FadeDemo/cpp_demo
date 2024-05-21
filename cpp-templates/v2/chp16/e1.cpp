//
// Created by fade on 2024/5/21.
//
template<typename T>
int f(T) {

}

template <>
int f(int) {
   return 1;
}

//template <>
//int f<int>(int) {
//    return 3;
//}

template <>
int f<int *>(int *) {
    return 2;
}