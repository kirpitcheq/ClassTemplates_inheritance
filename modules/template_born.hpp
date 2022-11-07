#pragma once
#include "template_base.hpp"

template <typename _Tp>
class TemplateBorn : public TemplateBase<_Tp>
{
public:
    TemplateBorn() : TemplateBase<_Tp>(){};
    TemplateBorn(_Tp varin, _Tp * var_arr_in, int count);
    ~TemplateBorn();
    TemplateBorn operator+(const TemplateBorn<_Tp> &oper2);
};
template class TemplateBorn<char>;
template class TemplateBorn<short>;
template class TemplateBorn<int>;
template class TemplateBorn<long>;
template class TemplateBorn<long long>;
template class TemplateBorn<float>;
template class TemplateBorn<double>;