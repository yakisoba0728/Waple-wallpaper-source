// Function: FUN_1403d17b0
// Addr: 1403d17b0
// Size: 218 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined8 FUN_1403d17b0(longlong param_1,undefined8 param_2,undefined4 *param_3)

{
  longlong *plVar1;
  bool bVar2;
  undefined1 auStack_58 [40];
  undefined1 local_30 [2];
  short local_2e;
  short local_2c;
  short local_2a;
  ulonglong local_18;
  
  local_18 = DAT_1404dc040 ^ (ulonglong)auStack_58;
  plVar1 = *(longlong **)(param_1 + 0xb8);
  while ((plVar1 == (longlong *)0x0 &&
         (plVar1 = (longlong *)0x0, *(longlong *)(param_1 + 0xa8) != 0))) {
    plVar1 = (longlong *)FUN_140413ae0();
    LOCK();
    bVar2 = *(longlong *)(param_1 + 0xb8) == 0;
    if (bVar2) {
      *(longlong *)(param_1 + 0xb8) = (longlong)plVar1;
    }
    UNLOCK();
    if (bVar2) break;
    if (plVar1 != (longlong *)0x0) {
      (**(code **)(*plVar1 + 0x10))();
    }
    plVar1 = *(longlong **)(param_1 + 0xb8);
  }
  (**(code **)(*plVar1 + 0x40))(plVar1,local_30);
  *param_3 = (int)((ulonglong)((longlong)local_2e * *(longlong *)(param_1 + 0x60) + 0x8000) >> 0x10)
  ;
  param_3[1] = -(int)((ulonglong)((longlong)local_2c * *(longlong *)(param_1 + 0x60) + 0x8000) >>
                     0x10);
  param_3[2] = (int)((ulonglong)((longlong)local_2a * *(longlong *)(param_1 + 0x60) + 0x8000) >>
                    0x10);
  return 1;
}

