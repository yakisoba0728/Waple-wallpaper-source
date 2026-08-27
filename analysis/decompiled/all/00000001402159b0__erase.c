// Function: std::vector<CHN*___ptr64,std::allocator<CHN*___ptr64>_>::erase
// Addr: 1402159b0
// Size: 70 bytes


/* Library Function - Single Match
    public: class std::_Vector_iterator<class std::_Vector_val<struct std::_Simple_types<struct CHN
   * __ptr64> > > __cdecl std::vector<struct CHN * __ptr64,class std::allocator<struct CHN *
   __ptr64> >::erase(class std::_Vector_const_iterator<class std::_Vector_val<struct
   std::_Simple_types<struct CHN * __ptr64> > >) __ptr64
   
   Library: Visual Studio 2019 Release */

longlong * __thiscall
std::vector<CHN*___ptr64,std::allocator<CHN*___ptr64>_>::erase
          (vector<CHN*___ptr64,std::allocator<CHN*___ptr64>_> *this,longlong *param_2,
          longlong param_3)

{
  FUN_1404210f0(param_3,param_3 + 8,*(longlong *)(this + 8) - (param_3 + 8));
  *(longlong *)(this + 8) = *(longlong *)(this + 8) + -8;
  *param_2 = param_3;
  return param_2;
}

