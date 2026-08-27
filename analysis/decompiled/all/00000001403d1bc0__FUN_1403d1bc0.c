// Function: FUN_1403d1bc0
// Addr: 1403d1bc0
// Size: 439 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1403d1bc0(longlong param_1,undefined8 param_2,uint param_3,undefined2 *param_4,uint param_5
                  ,int *param_6,uint param_7)

{
  undefined2 uVar1;
  uint uVar2;
  longlong lVar3;
  longlong *plVar4;
  ulonglong uVar5;
  uint uVar6;
  uint uVar7;
  bool bVar8;
  undefined1 auStack_698 [32];
  undefined4 local_678;
  uint local_668;
  longlong *local_660 [3];
  short local_648 [512];
  undefined2 local_248 [256];
  ulonglong local_48;
  
  local_48 = DAT_1404dc040 ^ (ulonglong)auStack_698;
  plVar4 = *(longlong **)(param_1 + 0xb8);
  local_668 = param_7;
  while ((plVar4 == (longlong *)0x0 &&
         (plVar4 = (longlong *)0x0, *(longlong *)(param_1 + 0xa8) != 0))) {
    plVar4 = (longlong *)FUN_140413ae0();
    LOCK();
    bVar8 = *(longlong *)(param_1 + 0xb8) == 0;
    if (bVar8) {
      *(longlong *)(param_1 + 0xb8) = (longlong)plVar4;
    }
    UNLOCK();
    if (bVar8) break;
    if (plVar4 != (longlong *)0x0) {
      (**(code **)(*plVar4 + 0x10))();
    }
    plVar4 = *(longlong **)(param_1 + 0xb8);
  }
  local_660[0] = (longlong *)0x0;
  (**(code **)*plVar4)(plVar4,&DAT_140470a80,local_660);
  uVar7 = 0;
  if (param_3 != 0) {
    do {
      uVar2 = param_3 - uVar7;
      if (0xff < param_3 - uVar7) {
        uVar2 = 0x100;
      }
      uVar5 = 0;
      if (uVar2 != 0) {
        FUN_1404217a0(local_648,0,(ulonglong)uVar2 << 2);
        do {
          uVar1 = *param_4;
          param_4 = (undefined2 *)((longlong)param_4 + (ulonglong)param_5);
          local_248[uVar5] = uVar1;
          uVar6 = (int)uVar5 + 1;
          uVar5 = (ulonglong)uVar6;
          param_7 = local_668;
        } while (uVar6 < uVar2);
      }
      local_678 = 1;
      (**(code **)(*local_660[0] + 0xb8))(local_660[0],(ulonglong)uVar2,local_248,local_648);
      uVar5 = 0;
      if (uVar2 != 0) {
        do {
          lVar3 = uVar5 * 2;
          uVar6 = (int)uVar5 + 1;
          uVar5 = (ulonglong)uVar6;
          *param_6 = -(int)((ulonglong)
                            ((longlong)local_648[lVar3] * *(longlong *)(param_1 + 0x60) + 0x8000) >>
                           0x10);
          param_6 = (int *)((longlong)param_6 + (ulonglong)param_7);
        } while (uVar6 < uVar2);
      }
      uVar7 = uVar7 + uVar2;
    } while (uVar7 < param_3);
  }
  return;
}

