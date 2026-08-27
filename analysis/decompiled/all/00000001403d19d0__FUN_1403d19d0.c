// Function: FUN_1403d19d0
// Addr: 1403d19d0
// Size: 481 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void FUN_1403d19d0(longlong param_1,undefined8 param_2,uint param_3,ushort *param_4,uint param_5,
                  undefined4 *param_6,uint param_7)

{
  ushort uVar1;
  longlong lVar2;
  uint uVar3;
  short sVar4;
  longlong *plVar5;
  longlong lVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  undefined1 auStack_698 [32];
  undefined4 local_678;
  uint local_668;
  uint local_664;
  longlong *local_660 [3];
  undefined4 local_648 [256];
  ushort local_248 [256];
  ulonglong local_48;
  
  local_48 = DAT_1404dc040 ^ (ulonglong)auStack_698;
  plVar5 = *(longlong **)(param_1 + 0xb8);
  local_668 = param_3;
  local_664 = param_7;
  while ((plVar5 == (longlong *)0x0 &&
         (plVar5 = (longlong *)0x0, *(longlong *)(param_1 + 0xa8) != 0))) {
    plVar5 = (longlong *)FUN_140413ae0();
    LOCK();
    bVar11 = *(longlong *)(param_1 + 0xb8) == 0;
    if (bVar11) {
      *(longlong *)(param_1 + 0xb8) = (longlong)plVar5;
    }
    UNLOCK();
    if (bVar11) break;
    if (plVar5 != (longlong *)0x0) {
      (**(code **)(*plVar5 + 0x10))();
    }
    plVar5 = *(longlong **)(param_1 + 0xb8);
  }
  local_660[0] = (longlong *)0x0;
  (**(code **)*plVar5)(plVar5,&DAT_140470a80,local_660);
  lVar2 = *(longlong *)(param_1 + 0x20);
  uVar9 = *(uint *)(lVar2 + 0x18);
  if (uVar9 == 0xffffffff) {
    lVar6 = FUN_140398a10(lVar2 + 0x80);
    uVar9 = (uint)*(byte *)(lVar6 + 5) + (uint)*(byte *)(lVar6 + 4) * 0x100;
    if (uVar9 == 0) {
      uVar9 = 0;
    }
    *(uint *)(lVar2 + 0x18) = uVar9;
  }
  uVar10 = 0;
  if (param_3 != 0) {
    do {
      uVar3 = param_3 - uVar10;
      if (0xff < param_3 - uVar10) {
        uVar3 = 0x100;
      }
      uVar7 = 0;
      if (uVar3 != 0) {
        FUN_1404217a0(local_648,0,(ulonglong)uVar3 << 2);
        do {
          uVar1 = *param_4;
          param_4 = (ushort *)((longlong)param_4 + (ulonglong)param_5);
          local_248[uVar7] = uVar1;
          uVar8 = (int)uVar7 + 1;
          uVar7 = (ulonglong)uVar8;
          param_3 = local_668;
        } while (uVar8 < uVar3);
      }
      local_678 = 0;
      (**(code **)(*local_660[0] + 0xb8))(local_660[0],(ulonglong)uVar3,local_248,local_648);
      uVar7 = 0;
      if (uVar3 != 0) {
        do {
          if (local_248[uVar7] < uVar9) {
            sVar4 = (short)local_648[uVar7];
          }
          else {
            sVar4 = 0;
          }
          uVar8 = (int)uVar7 + 1;
          uVar7 = (ulonglong)uVar8;
          *param_6 = (int)((ulonglong)((longlong)sVar4 * *(longlong *)(param_1 + 0x58) + 0x8000) >>
                          0x10);
          param_6 = (undefined4 *)((longlong)param_6 + (ulonglong)local_664);
        } while (uVar8 < uVar3);
      }
      uVar10 = uVar10 + uVar3;
    } while (uVar10 < param_3);
  }
  return;
}

