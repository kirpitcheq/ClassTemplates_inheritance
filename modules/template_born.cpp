#include "template_born.hpp"

template <typename _Tp>
TemplateBorn<_Tp>::TemplateBorn(_Tp varin, _Tp *var_arr_in, int count)
    : TemplateBase<_Tp>(varin, var_arr_in, count)
{
}

template <typename _Tp>
TemplateBorn<_Tp>::~TemplateBorn()
{
}

template <typename _Tp>
TemplateBorn<_Tp> TemplateBorn<_Tp>::operator+(const TemplateBorn<_Tp> &oper2)
{
    TemplateBorn<_Tp> Result;
    Result.var = TemplateBorn<_Tp>::var + oper2.var;
    // Result->TemplateBorn<_Tp>::var = var + oper2.var;
    if (this->count_var_arr > oper2.count_var_arr)
    {
        Result.var_arr = new _Tp[oper2.count_var_arr];
        for (int i = 0; i < oper2.count_var_arr; i++)
            Result.var_arr[i] = this->var_arr[i] + oper2.var_arr[i];
        Result.count_var_arr = oper2.count_var_arr;
    }
    else
    {
        Result.var_arr = new _Tp[this->count_var_arr];
        for (int i = 0; i < this->count_var_arr; i++)
            Result.var_arr[i] = this->var_arr[i] + oper2.var_arr[i];
        Result.count_var_arr = this->count_var_arr;
    }
    return Result;
}
