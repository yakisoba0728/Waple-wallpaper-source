// Function: std::ctype<char>::`scalar_deleting_destructor'
// Addr: 140013bc0
// Size: 106 bytes


/* Library Function - Single Match
    protected: virtual void * __ptr64 __cdecl std::ctype<char>::`scalar deleting
   destructor'(unsigned int) __ptr64
   
   Libraries: Visual Studio 2015 Release, Visual Studio 2017 Release, Visual Studio 2019 Release */

void * __thiscall std::ctype<char>::_scalar_deleting_destructor_(ctype<char> *this,uint param_1)

{
  *(undefined ***)this = vftable;
  if (*(int *)(this + 0x20) < 1) {
    if (*(int *)(this + 0x20) < 0) {
      thunk_FUN_14028af80(*(undefined8 *)(this + 0x18));
    }
  }
  else {
    thunk_FUN_1402d9040(*(undefined8 *)(this + 0x18));
  }
  thunk_FUN_1402d9040(*(undefined8 *)(this + 0x28));
  *(undefined ***)this = _Facet_base::vftable;
  if ((param_1 & 1) != 0) {
    thunk_FUN_14028af80(this,0x30);
  }
  return this;
}

