// Function: std::_Conditionally_enabled_hash<unsigned_long,1>::operator()
// Addr: 140032570
// Size: 65 bytes


/* Library Function - Single Match
    public: unsigned __int64 __cdecl std::_Conditionally_enabled_hash<unsigned
   long,1>::operator()(unsigned long const & __ptr64)const __ptr64
   
   Library: Visual Studio 2019 Release */

__uint64 __thiscall
std::_Conditionally_enabled_hash<unsigned_long,1>::operator()
          (_Conditionally_enabled_hash<unsigned_long,1> *this,ulong *param_1)

{
  return ((((ulonglong)*(byte *)((longlong)param_1 + 1) ^
           ((ulonglong)(byte)*param_1 ^ 0xcbf29ce484222325) * 0x100000001b3) * 0x100000001b3 ^
          (ulonglong)*(byte *)((longlong)param_1 + 2)) * 0x100000001b3 ^
         (ulonglong)*(byte *)((longlong)param_1 + 3)) * 0x100000001b3;
}

