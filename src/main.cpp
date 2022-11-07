#include "template_born.hpp"
#include "template_base.hpp"

#include <iostream>
using namespace std;

#define FIRST_TYPE int
#define SECOND_TYPE double

int main(int argc, char const *argv[])
{
    /* FIRST_TYPE */
    FIRST_TYPE arrA[5] = {1, 4, 2, 3, 5};
    FIRST_TYPE *pA = new FIRST_TYPE[5];
    for (size_t i = 0; i < 5; i++)
        pA[i] = arrA[i];
    FIRST_TYPE arrB[7] = {9, 53, 42, 3, 1, 5, 8};
    FIRST_TYPE *pB = new FIRST_TYPE[7];
    for (size_t i = 0; i < 7; i++)
        pB[i] = arrB[i];

    TemplateBase<FIRST_TYPE> *pTempBase;    // probe
    pTempBase = new TemplateBorn(4, pA, 5); // same as A
    TemplateBorn<FIRST_TYPE> A(4, pA, 5);   // same as *pTempBase now
    cout << "A.var = " << pTempBase->getVar() << endl;
    for (size_t i = 0; i < A.getVarArrCount(); i++)
        cout << "A.var_arr[" << i << "] = " << pA[i] << endl;
    cout << endl
         << "len of arr = " << A.getVarArrCount() << endl;

    delete pTempBase;
    pTempBase = new TemplateBorn(3, pB, 7); // same as B
    TemplateBorn<FIRST_TYPE> B(3, pB, 7);   // same as *pTempBase now
    cout << "B.var = " << B.getVar() << endl;
    for (size_t i = 0; i < B.getVarArrCount(); i++)
        cout << "B.var_arr[" << i << "] = " << pB[i] << endl;
    cout << endl
         << "len of arr = " << B.getVarArrCount() << endl;

    TemplateBorn<FIRST_TYPE> C = A + B;
    cout << "C = A+B" << endl;
    cout << "C.var = " << C.getVar() << endl;
    FIRST_TYPE *pC = C.getVarArr();
    for (size_t i = 0; i < C.getVarArrCount(); i++)
        cout << "C.var_arr[" << i << "] = " << pC[i] << endl;
    cout << endl
         << "len of arr = " << C.getVarArrCount() << "is min of len of arrs A or B";
    /* ---------------------------------------- */



    /* SECOND_TYPE */
    SECOND_TYPE arrA2[5] = {1, 4, 2, 3, 5};
    SECOND_TYPE *pA2 = new SECOND_TYPE[5];
    for (size_t i = 0; i < 5; i++)
        pA2[i] = arrA2[i];

    SECOND_TYPE arrB2[7] = {9, 53, 42, 3, 1, 5, 8};
    SECOND_TYPE *pB2 = new SECOND_TYPE[7];
    for (size_t i = 0; i < 7; i++)
        pB2[i] = arrB2[i];

    TemplateBorn<SECOND_TYPE> A2(4, pA2, 5);
    cout << "A2.var = " << A2.getVar() << endl;
    for (size_t i = 0; i < A2.getVarArrCount(); i++)
        cout << "A2.var_arr[" << i << "] = " << pA2[i] << endl;
    cout << endl
         << "len of arr = " << A2.getVarArrCount() << endl;

    TemplateBorn<SECOND_TYPE> B2(3, pB2, 7);
    cout << "B2.var = " << B2.getVar() << endl;
    for (size_t i = 0; i < B.getVarArrCount(); i++)
        cout << "B2.var_arr[" << i << "] = " << pB2[i] << endl;
    cout << endl
         << "len of arr = " << B2.getVarArrCount() << endl;

    TemplateBorn<SECOND_TYPE> C2 = A2 + B2;
    cout << "C2 = A2+B2" << endl;
    cout << "C2.var = " << C2.getVar() << endl;
    SECOND_TYPE *pC2 = C2.getVarArr();
    for (size_t i = 0; i < C2.getVarArrCount(); i++)
        cout << "C2.var_arr[" << i << "] = " << pC2[i] << endl;
    cout << endl
         << "len of arr = " << C2.getVarArrCount() << "is min of len of arrs A2 or B2";
    /* ---------------------------------------- */


    
    return 0;
}
