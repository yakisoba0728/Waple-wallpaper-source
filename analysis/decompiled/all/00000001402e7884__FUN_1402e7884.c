// Function: FUN_1402e7884
// Addr: 1402e7884
// Size: 66 bytes


undefined4
FUN_1402e7884(ulonglong *param_1,undefined1 *param_2,ulonglong param_3,undefined8 param_4,
             ulonglong param_5,longlong param_6)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined4 uVar3;
  
  uVar3 = 0;
  if (param_2 == (undefined1 *)0x0) {
    if (param_3 != 0) goto UNWIND_INFO_1402e78c7_UnwindCodes_14__OffsetInProlog;
  }
  else {
    if (param_3 == 0) {
UNWIND_INFO_1402e78c7_UnwindCodes_14__OffsetInProlog:
      uVar3 = 0x16;
      *(undefined1 *)(param_6 + 0x30) = 1;
      *(undefined4 *)(param_6 + 0x2c) = 0x16;
      goto code_r0x0001402e78fd;
    }
    *param_2 = 0;
  }
  if (param_1 != (ulonglong *)0x0) {
    *param_1 = 0;
  }
  uVar2 = param_5;
  if (param_3 < param_5) {
    uVar2 = param_3;
  }
  if (0x7fffffff < uVar2) {
    uVar3 = 0x16;
code_r0x0001402e7958:
    *(undefined4 *)(param_6 + 0x2c) = uVar3;
    *(undefined1 *)(param_6 + 0x30) = 1;
code_r0x0001402e78fd:
    FUN_1402cada4(0,0,0,0,0,param_6);
    return uVar3;
  }
  lVar1 = func_0x0001402e7998(param_2,param_4,uVar2,param_6);
  if (lVar1 == -1) {
    if (param_2 != (undefined1 *)0x0) {
      *param_2 = 0;
    }
    if (*(char *)(param_6 + 0x30) == '\0') {
      return 0;
    }
    return *(undefined4 *)(param_6 + 0x2c);
  }
  uVar2 = lVar1 + 1;
  if (param_2 == (undefined1 *)0x0) goto code_r0x0001402e7973;
  if (param_3 < uVar2) {
    if (param_5 != 0xffffffffffffffff) {
      *param_2 = 0;
      uVar3 = 0x22;
      goto code_r0x0001402e7958;
    }
    uVar3 = 0x50;
    uVar2 = param_3;
  }
  param_2[uVar2 - 1] = 0;
code_r0x0001402e7973:
  if (param_1 == (ulonglong *)0x0) {
    return uVar3;
  }
  *param_1 = uVar2;
  return uVar3;
}

