// Function: FUN_1403d1e50
// Addr: 1403d1e50
// Size: 38 bytes


void FUN_1403d1e50(longlong param_1,undefined8 param_2,undefined2 param_3,undefined4 *param_4,
                  undefined4 *param_5)

{
  int iVar1;
  longlong *plVar2;
  bool bVar3;
  undefined1 auStack_88 [32];
  undefined4 uStack_68;
  undefined2 auStack_58 [8];
  undefined1 auStack_48 [4];
  uint uStack_44;
  short sStack_30;
  ulonglong local_28;
  
  local_28 = DAT_1404dc110 ^ (ulonglong)auStack_88;
  plVar2 = *(longlong **)(param_1 + 0xb8);
  while ((plVar2 == (longlong *)0x0 &&
         (plVar2 = (longlong *)0x0, *(longlong *)(param_1 + 0xa8) != 0))) {
    plVar2 = (longlong *)func_0x000140413bb0();
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
  uStack_68 = 0;
  auStack_58[0] = param_3;
  iVar1 = (**(code **)(*plVar2 + 0x50))(plVar2,auStack_58,1,auStack_48);
  if (-1 < iVar1) {
    *param_4 = (int)((ulonglong)
                     ((longlong)(short)(uStack_44 >> 1) * *(longlong *)(param_1 + 0x58) + 0x8000) >>
                    0x10);
    *param_5 = (int)((ulonglong)((longlong)sStack_30 * *(longlong *)(param_1 + 0x60) + 0x8000) >>
                    0x10);
  }
  func_0x0001402ed2f0(local_28 ^ (ulonglong)auStack_88);
  return;
}

