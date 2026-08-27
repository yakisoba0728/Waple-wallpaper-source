// Function: FUN_14034bf60
// Addr: 14034bf60
// Size: 638 bytes


ulonglong FUN_14034bf60(longlong param_1,longlong param_2,undefined8 param_3,ulonglong param_4)

{
  uint uVar1;
  longlong lVar2;
  undefined4 uVar3;
  int iVar4;
  ulonglong uVar5;
  undefined8 uVar6;
  undefined4 *puVar7;
  longlong lVar8;
  int iVar9;
  ulonglong local_res20;
  
  uVar6 = *(undefined8 *)(param_1 + 0x30);
  iVar9 = 0;
  *(undefined8 *)(param_2 + 0xd8) = 0;
  *(undefined4 *)(param_2 + 0xe0) = 0;
  local_res20 = param_4;
  uVar3 = FUN_1402f54a0();
  iVar4 = FUN_1402f58c0(param_1,&local_res20);
  if ((int)local_res20 == 0) {
    while (iVar4 == 0x774f4646) {
      uVar5 = FUN_1402f5c50(param_1,uVar3);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      local_res20._0_4_ = (int)uVar5;
      uVar5 = FUN_14034eb40(param_1,param_2);
      local_res20 = CONCAT44(local_res20._4_4_,(int)uVar5);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      param_1 = *(longlong *)(param_2 + 0xa0);
      uVar3 = FUN_1402f54a0(param_1);
      iVar4 = FUN_1402f58c0(param_1,&local_res20);
      if ((int)local_res20 != 0) {
        return local_res20 & 0xffffffff;
      }
    }
    if (((((iVar4 != 0x10000) && (iVar4 != 0x74746366)) && (iVar4 != 0x4f54544f)) &&
        ((iVar4 != 0x74727565 && (iVar4 != 0x74797031)))) &&
       ((iVar4 != -0x5a949d9c && ((iVar4 != -0x5a938c8c && (iVar4 != 0x20000)))))) {
      return 2;
    }
    *(undefined4 *)(param_2 + 0xd8) = 0x74746366;
    if (iVar4 == 0x74746366) {
      uVar5 = FUN_1402f5610(param_1,&DAT_140451798,param_2 + 0xd8);
      local_res20 = CONCAT44(local_res20._4_4_,(int)uVar5);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      uVar1 = *(uint *)(param_2 + 0xe0);
      if (uVar1 == 0) {
        return 8;
      }
      if (*(uint *)(param_1 + 8) >> 5 < uVar1) {
        return 10;
      }
      uVar6 = FUN_1402f7ff0(uVar6,4,0,uVar1,0,&local_res20);
      *(undefined8 *)(param_2 + 0xe8) = uVar6;
      if ((int)local_res20 == 0) {
        uVar5 = FUN_1402f4fe0(param_1,*(int *)(param_2 + 0xe0) << 2);
        local_res20 = CONCAT44(local_res20._4_4_,(int)uVar5);
        if ((int)uVar5 != 0) {
          return uVar5;
        }
        if (0 < *(int *)(param_2 + 0xe0)) {
          do {
            lVar2 = *(longlong *)(param_2 + 0xe8);
            lVar8 = (longlong)iVar9;
            uVar3 = FUN_1402f5200(param_1);
            iVar9 = iVar9 + 1;
            *(undefined4 *)(lVar2 + lVar8 * 4) = uVar3;
          } while (iVar9 < *(int *)(param_2 + 0xe0));
        }
        FUN_1402f5100(param_1);
        return local_res20 & 0xffffffff;
      }
    }
    else {
      *(undefined4 *)(param_2 + 0xdc) = 0x10000;
      *(undefined4 *)(param_2 + 0xe0) = 1;
      puVar7 = (undefined4 *)FUN_1402f7fa0(uVar6,4,&local_res20);
      *(undefined4 **)(param_2 + 0xe8) = puVar7;
      if ((int)local_res20 == 0) {
        *puVar7 = uVar3;
      }
    }
  }
  return local_res20 & 0xffffffff;
}

