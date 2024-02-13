template<typename T1, typename T2>
auto max (T1 a, T2 b) -> decltype(b<a?a:b)
{
  return  b < a ? a : b;
}

//template<typename T1, typename T2>
//auto max1 (T1 a, T2 b) -> decltype(true?a:b)
//{
//    return  b < a ? a : b;
//}