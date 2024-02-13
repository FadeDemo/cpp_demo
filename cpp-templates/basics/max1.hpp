template<typename T>
T max (T a, T b)
{
  // if b < a then yield a else yield b
  return  b < a ? a : b;
}

auto test(int a, int b) {
    return a + b;
}
