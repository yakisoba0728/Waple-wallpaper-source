// Function: __acrt_CompareStringW
// Addr: 1402ec1bc
// Size: 189 bytes


/* Library Function - Single Match
    __acrt_CompareStringW
   
   Libraries: Visual Studio 2017 Release, Visual Studio 2019 Release */

ulonglong __acrt_CompareStringW
                    (undefined8 param_1,undefined4 param_2,undefined8 param_3,int param_4,
                    undefined8 param_5,int param_6)

{
  ulonglong uVar1;
  
  if (0 < param_4) {
    param_4 = FUN_1402d6cc0(param_3,(longlong)param_4);
  }
  if (0 < param_6) {
    param_6 = FUN_1402d6cc0(param_5,(longlong)param_6);
  }
  if ((param_4 == 0) || (param_6 == 0)) {
    uVar1 = (ulonglong)((param_4 - param_6 >> 0x1f & 0xfffffffeU) + 3);
    if (param_4 - param_6 == 0) {
      uVar1 = 2;
    }
  }
  else {
    uVar1 = FUN_1402dc050(param_1,param_2,param_3,param_4,param_5,param_6,0,0,0);
  }
  return uVar1;
}

