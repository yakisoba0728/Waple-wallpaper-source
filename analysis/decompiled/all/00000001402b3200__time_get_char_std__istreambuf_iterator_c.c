// Function: std::time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_>::time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_>
// Addr: 1402b3200
// Size: 73 bytes


/* Library Function - Single Match
    public: __cdecl std::time_get<char,class std::istreambuf_iterator<char,struct
   std::char_traits<char> > >::time_get<char,class std::istreambuf_iterator<char,struct
   std::char_traits<char> > >(class std::_Locinfo const & __ptr64,unsigned __int64) __ptr64
   
   Library: Visual Studio 2019 Release */

time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> * __thiscall
std::time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_>::
time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_>
          (time_get<char,std::istreambuf_iterator<char,std::char_traits<char>_>_> *this,
          _Locinfo *param_1,__uint64 param_2)

{
  undefined4 uVar1;
  
  *(int *)(this + 8) = (int)param_2;
  *(undefined ***)this = vftable;
  *(undefined8 *)(this + 0x10) = 0;
  *(undefined8 *)(this + 0x18) = 0;
  *(undefined8 *)(this + 0x20) = 0;
  FUN_1402b2d90(this,0,param_1);
  uVar1 = FUN_1402b9cc0();
  *(undefined4 *)(this + 0x28) = uVar1;
  return this;
}

