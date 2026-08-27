// Function: FUN_1402cb1e8
// Addr: 1402cb1e8
// Size: 194 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1402cb1e8(undefined8 param_1,undefined8 param_2,undefined4 param_3,undefined8 param_4)

{
  code *pcVar1;
  int iVar2;
  undefined1 auStack_4d8 [32];
  undefined4 local_4b8;
  undefined8 local_4b0;
  undefined1 local_4a8 [1152];
  ulonglong local_28;
  
  local_28 = DAT_1404dc040 ^ (ulonglong)auStack_4d8;
  FUN_1404217a0(local_4a8,0,0x480);
  local_4b8 = param_3;
  local_4b0 = param_4;
  FUN_1402cb2ac(local_4a8,0x240,param_1,param_2);
  iVar2 = FUN_1402ded48(local_4a8,L"Microsoft Visual C++ Runtime Library",0x12012);
  if (iVar2 == 3) {
    FUN_1402dce78(0x16);
                    /* WARNING: Subroutine does not return */
    FUN_1402d0f9c(3);
  }
  if (iVar2 != 4) {
    if (iVar2 == 5) {
      return;
    }
                    /* WARNING: Subroutine does not return */
    FUN_1402c97e4();
  }
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}

