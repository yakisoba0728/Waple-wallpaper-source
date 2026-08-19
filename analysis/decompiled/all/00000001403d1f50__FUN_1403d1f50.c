// Function: FUN_1403d1f50
// Addr: 1403d1f50
// Size: 260 bytes


void FUN_1403d1f50(longlong param_1,undefined8 param_2,uint param_3,undefined4 *param_4,uint param_5
                  ,uint *param_6,uint param_7)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  longlong *plVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  undefined1 auStack_678 [48];
  undefined4 local_648 [256];
  ushort local_248 [256];
  ulonglong local_48;
  
  local_48 = DAT_1404dc110 ^ (ulonglong)auStack_678;
  plVar4 = *(longlong **)(param_1 + 0xb8);
  while (plVar4 == (longlong *)0x0) {
    if (*(longlong *)(param_1 + 0xa8) == 0) {
      plVar4 = (longlong *)0x0;
      break;
    }
    plVar4 = (longlong *)func_0x000140413bb0();
    LOCK();
    bVar8 = *(longlong *)(param_1 + 0xb8) == 0;
    if (bVar8) {
      *(longlong *)(param_1 + 0xb8) = (longlong)plVar4;
    }
    UNLOCK();
    if (bVar8) break;
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))(plVar4);
    }
    plVar4 = *(longlong **)(param_1 + 0xb8);
  }
  uVar7 = 0;
  if (param_3 != 0) {
    do {
      uVar2 = param_3 - uVar7;
      if (0xff < param_3 - uVar7) {
        uVar2 = 0x100;
      }
      uVar5 = 0;
      if (uVar2 != 0) {
        do {
          uVar1 = *param_4;
          param_4 = (undefined4 *)((longlong)param_4 + (ulonglong)param_5);
          local_648[uVar5] = uVar1;
          uVar6 = (int)uVar5 + 1;
          uVar5 = (ulonglong)uVar6;
        } while (uVar6 < uVar2);
      }
      iVar3 = (**(code **)(*plVar4 + 0x58))(plVar4,local_648,uVar2,local_248);
      if (iVar3 < 0) break;
      uVar5 = 0;
      if (uVar2 != 0) {
        do {
          if (local_248[uVar5] == 0) goto LAB_1403d2064;
          *param_6 = (uint)local_248[uVar5];
          uVar6 = (int)uVar5 + 1;
          uVar5 = (ulonglong)uVar6;
          param_6 = (uint *)((longlong)param_6 + (ulonglong)param_7);
        } while (uVar6 < uVar2);
      }
      uVar7 = uVar7 + uVar2;
    } while (uVar7 < param_3);
  }
LAB_1403d2064:
  func_0x0001402ed2f0(local_48 ^ (ulonglong)auStack_678);
  return;
}

