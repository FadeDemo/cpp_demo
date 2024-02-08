//
// Created by fade on 2024/2/8.
//

#ifndef CPP_DEMO_VIRTUAL_H
#define CPP_DEMO_VIRTUAL_H

template<typename T>
class Dynamic {
public:
    virtual ~Dynamic();
    template<typename T2>
    virtual void copy(T2 const &);
};


#endif//CPP_DEMO_VIRTUAL_H
