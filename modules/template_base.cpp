#include "template_base.hpp"

template <typename _Tp>
TemplateBase<_Tp>::TemplateBase(_Tp varin, _Tp *var_arr_in, int count)
    : var(varin), var_arr(var_arr_in), count_var_arr(count)
{
}

template <typename _Tp>
TemplateBase<_Tp>::~TemplateBase()
{
}
