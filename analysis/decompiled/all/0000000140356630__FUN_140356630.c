// Function: FUN_140356630
// Addr: 140356630
// Size: 610 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

ulonglong FUN_140356630(longlong param_1,undefined1 (*param_2) [16],uint param_3,undefined8 *param_4
                       )

{
  int iVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  ulonglong uVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  undefined1 auStack_88 [32];
  uint local_68 [2];
  undefined1 local_60 [16];
  undefined1 local_50 [16];
  undefined8 local_30;
  ulonglong local_28;
  
  local_28 = DAT_1404dc040 ^ (ulonglong)auStack_88;
  if ((param_1 == 0) || (param_4 == (undefined8 *)0x0)) {
    return 6;
  }
  local_60 = *param_2;
  iVar1 = local_60._4_4_;
  local_50 = param_2[1];
  iVar10 = local_60._0_4_;
  iVar11 = (int)*(undefined8 *)(param_2[1] + 8);
  iVar9 = iVar10 * 2 + *(int *)(*param_2 + 8) * -3 + iVar11;
  if (iVar9 < 0) {
    iVar9 = (*(int *)(*param_2 + 8) * 3 + iVar10 * -2) - iVar11;
  }
  if (iVar9 < 0x10) {
    iVar12 = local_50._12_4_;
    iVar9 = iVar1 * 2 + local_60._12_4_ * -3 + iVar12;
    if (iVar9 < 0) {
      iVar9 = (local_60._12_4_ * 3 + iVar1 * -2) - iVar12;
    }
    if (iVar9 < 0x10) {
      iVar9 = iVar11 * 2 + local_50._0_4_ * -3 + iVar10;
      if (iVar9 < 0) {
        iVar9 = (local_50._0_4_ * 3 + iVar11 * -2) - iVar10;
      }
      if (iVar9 < 0x10) {
        iVar10 = iVar12 * 2 + local_50._4_4_ * -3 + iVar1;
        if (iVar10 < 0) {
          iVar10 = (local_50._4_4_ * 3 + iVar12 * -2) - iVar1;
        }
        if (iVar10 < 0x10) {
          FUN_140356370(local_60);
          goto LAB_14035675d;
        }
      }
    }
  }
  FUN_140356370(local_60);
  if (2 < param_3) {
    uVar8 = FUN_140356630(param_1,local_60,param_3 >> 1,param_4);
    if ((int)uVar8 != 0) {
      return uVar8;
    }
    uVar8 = FUN_140356630(param_1,local_50 + 8,param_3 >> 1,param_4);
    return uVar8;
  }
LAB_14035675d:
  local_68[0] = 0;
  puVar6 = (undefined8 *)FUN_1402f7fa0(param_1,0x30,local_68);
  uVar4 = _UNK_140451af0;
  uVar3 = _DAT_140451ae8;
  uVar2 = _UNK_140451ae0;
  if (local_68[0] == 0) {
    *puVar6 = _DAT_140451ad8;
    puVar6[1] = uVar2;
    uVar5 = _UNK_140451b00;
    uVar2 = _DAT_140451af8;
    puVar6[2] = uVar3;
    puVar6[3] = uVar4;
    puVar6[4] = uVar2;
    puVar6[5] = uVar5;
    local_68[0] = 0;
    puVar7 = (undefined8 *)FUN_1402f7fa0(param_1,0x30,local_68);
    uVar4 = _UNK_140451af0;
    uVar3 = _DAT_140451ae8;
    uVar2 = _UNK_140451ae0;
    if (local_68[0] == 0) {
      *puVar7 = _DAT_140451ad8;
      puVar7[1] = uVar2;
      uVar5 = _UNK_140451b00;
      uVar2 = _DAT_140451af8;
      puVar7[2] = uVar3;
      puVar7[3] = uVar4;
      puVar7[4] = uVar2;
      puVar7[5] = uVar5;
      *puVar6 = local_60._0_8_;
      puVar6[1] = local_50._8_8_;
      *(undefined4 *)(puVar6 + 4) = 1;
      *puVar7 = local_50._8_8_;
      puVar7[1] = local_30;
      *(undefined4 *)(puVar7 + 4) = 1;
      puVar6[5] = puVar7;
      puVar7[5] = *param_4;
      *param_4 = puVar6;
    }
  }
  return (ulonglong)local_68[0];
}

