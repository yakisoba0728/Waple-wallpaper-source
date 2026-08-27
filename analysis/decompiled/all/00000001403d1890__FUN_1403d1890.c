// Function: FUN_1403d1890
// Addr: 1403d1890
// Size: 313 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

bool FUN_1403d1890(longlong param_1,undefined8 param_2,undefined2 param_3,int *param_4)

{
  int iVar1;
  longlong *plVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  undefined1 auStack_88 [32];
  undefined4 local_68;
  undefined2 local_58 [8];
  short local_48 [2];
  short local_44;
  short local_40;
  short local_3c;
  short local_38;
  short local_34;
  undefined4 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1404dc040 ^ (ulonglong)auStack_88;
  plVar2 = *(longlong **)(param_1 + 0xb8);
  while (plVar2 == (longlong *)0x0) {
    plVar2 = (longlong *)0x0;
    if (*(longlong *)(param_1 + 0xa8) == 0) break;
    plVar2 = (longlong *)FUN_140413ae0();
    LOCK();
    bVar5 = *(longlong *)(param_1 + 0xb8) == 0;
    if (bVar5) {
      *(longlong *)(param_1 + 0xb8) = (longlong)plVar2;
    }
    UNLOCK();
    if (bVar5) break;
    if (plVar2 != (longlong *)0x0) {
      (**(code **)(*plVar2 + 0x10))();
    }
    plVar2 = *(longlong **)(param_1 + 0xb8);
  }
  local_68 = 0;
  local_58[0] = param_3;
  iVar1 = (**(code **)(*plVar2 + 0x50))(plVar2,local_58,1,local_48);
  if (-1 < iVar1) {
    iVar3 = (int)((ulonglong)((longlong)local_48[0] * *(longlong *)(param_1 + 0x58) + 0x8000) >>
                 0x10);
    *param_4 = iVar3;
    iVar4 = (int)((ulonglong)
                  ((longlong)(short)((short)local_30 - local_3c) * *(longlong *)(param_1 + 0x60) +
                  0x8000) >> 0x10);
    param_4[1] = iVar4;
    param_4[2] = (int)((ulonglong)
                       ((longlong)(short)(local_44 - local_40) * *(longlong *)(param_1 + 0x58) +
                       0x8000) >> 0x10) - iVar3;
    param_4[3] = (int)((ulonglong)
                       ((longlong)(short)((local_34 - local_38) + (short)local_30) *
                        *(longlong *)(param_1 + 0x60) + 0x8000) >> 0x10) - iVar4;
  }
  return -1 < iVar1;
}

