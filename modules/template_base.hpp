#pragma once

#include <iostream>
using namespace std;

template <typename _Tp>
class TemplateBase
{
protected:
    _Tp var;
    _Tp *var_arr;
    int count_var_arr;

public:
    TemplateBase() : var(0), var_arr(NULL), count_var_arr(0){};
    TemplateBase(_Tp varin, _Tp *var_arr_in, int count);
    virtual ~TemplateBase();

    _Tp getVar() { return var; };
    _Tp *getVarArr() { return var_arr; }
    int getVarArrCount() { return count_var_arr; }

    virtual TemplateBase operator+(const TemplateBase<_Tp> &oper2) { return TemplateBase<_Tp>(); }
};
template class TemplateBase<char>;
template class TemplateBase<short>;
template class TemplateBase<int>;
template class TemplateBase<long>;
template class TemplateBase<long long>;
template class TemplateBase<double>;
template class TemplateBase<float>;
