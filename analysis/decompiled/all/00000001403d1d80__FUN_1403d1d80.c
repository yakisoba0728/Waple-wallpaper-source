// Function: FUN_1403d1d80
// Addr: 1403d1d80
// Size: 250 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool FUN_1403d1d80(longlong param_1,undefined8 param_2,undefined2 param_3,undefined4 *param_4,
                  undefined4 *param_5)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined2 local_58 [8];
  undefined1 local_48 [4];
  uint local_44;
  short local_30;
  ulonglong local_28;
  
  local_28 = DAT_1404dc040 ^ (ulonglong)auStack_88;
  plVar2 = *(longlong **)(param_1 + 0xb8);
  while ((plVar2 == (longlong *)0x0 &&
         (plVar2 = (longlong *)0x0, *(longlong *)(param_1 + 0xa8) != 0))) {
    plVar2 = (longlong *)FUN_140413ae0();
    LOCK();
    bVar3 = *(longlong *)(param_1 + 0xb8) == 0;
    if (bVar3) {
      *(longlong *)(param_1 + 0xb8) = (longlong)plVar2;
    }
    UNLOCK();
    if (bVar3) break;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))();
    }
    plVar2 = *(longlong **)(param_1 + 0xb8);
  }
  local_68 = 0;
  local_58[0] = param_3;
  iVar1 = (**(code **)(*plVar2 + 0x50))(plVar2,local_58,1,local_48);
  if (-1 < iVar1) {
    *param_4 = (int)((ulonglong)
                     ((longlong)(short)(local_44 >> 1) * *(longlong *)(param_1 + 0x58) + 0x8000) >>
                    0x10);
    *param_5 = (int)((ulonglong)((longlong)local_30 * *(longlong *)(param_1 + 0x60) + 0x8000) >>
                    0x10);
  }
  return -1 < iVar1;
}

