//
// Created by fade on 2024/2/11.
//

#ifndef CPP_DEMO_DEFAULTPARAMETER_H
#define CPP_DEMO_DEFAULTPARAMETER_H

template<typename T1, typename T2, typename T3, typename T4 = char, typename T5 = char>
class Quintuple;

//template<typename T1, typename T2, typename T3, typename T4 = char, typename T5 = char>
//class Quintuple;

template<typename T1, typename T2, typename T3 = char, typename T4, typename T5>
class Quintuple;

//template<typename T1 = char, typename T2, typename T3, typename T4, typename T5>
//class Quintuple;

#endif//CPP_DEMO_DEFAULTPARAMETER_H
