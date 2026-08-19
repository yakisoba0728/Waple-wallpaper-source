// Function: ExFilterRethrowFH4
// Addr: 1402bea50
// Size: 48 bytes


/* Library Function - Single Match
    int __cdecl ExFilterRethrowFH4(struct _EXCEPTION_POINTERS * __ptr64,struct EHExceptionRecord *
   __ptr64,int,int * __ptr64)
   
   Library: Visual Studio 2019 Release */

int __cdecl
ExFilterRethrowFH4(_EXCEPTION_POINTERS *param_1,EHExceptionRecord *param_2,int param_3,int *param_4)

{
  int iVar1;
  longlong lVar2;
  
  iVar1 = func_0x0001402be9c0(param_1,param_2,param_4);
  if (iVar1 == 0) {
    lVar2 = FUN_1402bbf90();
    *(int *)(lVar2 + 0x78) = param_3;
  }
  return iVar1;
}

