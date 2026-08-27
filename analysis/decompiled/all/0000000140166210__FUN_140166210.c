// Function: FUN_140166210
// Addr: 140166210
// Size: 779 bytes


longlong * FUN_140166210(longlong *param_1,char *param_2,longlong param_3,uint param_4,uint param_5)

{
  int iVar1;
  undefined1 auVar2 [16];
  sbyte sVar3;
  int iVar4;
  longlong lVar5;
  uint uVar6;
  ulonglong uVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  uint uVar12;
  uint uVar13;
  longlong lVar14;
  ulonglong local_38;
  undefined8 uStack_30;
  uint auStack_28 [4];
  
  uVar13 = param_5 + 0x37 >> 5;
  sVar3 = (sbyte)(param_5 & 0x1f);
  uVar8 = param_4 << sVar3;
  local_38 = 0;
  uStack_30 = 0;
  uVar6 = uVar13 - 1;
  uVar7 = (ulonglong)uVar6;
  if (8 < (param_5 & 0x1f)) {
    *(uint *)((longlong)&local_38 + (ulonglong)(uVar13 - 2) * 4) = uVar8;
    uVar8 = param_4 >> (0x20U - sVar3 & 0x1f);
  }
  uVar13 = 0;
  *(uint *)((longlong)&local_38 + uVar7 * 4) = uVar8;
  while (uVar6 != 0) {
    do {
      uVar6 = *(uint *)((longlong)&local_38 + uVar7 * 4);
      *(uint *)((longlong)&local_38 + uVar7 * 4) = uVar6 / 1000000000;
      uVar8 = uVar6 % 1000000000;
      uVar11 = uVar7;
      do {
        uVar12 = (int)uVar11 - 1;
        uVar11 = (ulonglong)uVar12;
        iVar1 = *(int *)((longlong)&local_38 + uVar11 * 4);
        uVar9 = CONCAT44(uVar8,iVar1);
        auVar2._8_8_ = 0;
        auVar2._0_8_ = uVar9;
        lVar5 = SUB168(ZEXT816(0x12e0be826d694b2f) * auVar2,8);
        iVar4 = (int)((uVar9 - lVar5 >> 1) + lVar5 >> 0x1d);
        *(int *)((longlong)&local_38 + uVar11 * 4) = iVar4;
        uVar8 = iVar1 + iVar4 * -1000000000;
      } while (uVar12 != 0);
      lVar5 = (longlong)(int)uVar13;
      uVar13 = uVar13 + 1;
      auStack_28[lVar5] = uVar8;
    } while (uVar6 / 1000000000 != 0);
    uVar6 = (int)uVar7 - 1;
    uVar7 = (ulonglong)uVar6;
  }
  uVar7 = local_38 & 0xffffffff;
  if ((uint)local_38 < 1000000000) {
    uVar6 = FUN_1401661a0(local_38 & 0xffffffff);
  }
  else {
    uVar6 = 10;
  }
  if (param_3 - (longlong)param_2 < (longlong)(ulonglong)(uVar6 + uVar13 * 9)) {
    *param_1 = param_3;
    *(undefined4 *)(param_1 + 1) = 0x84;
  }
  else {
    uVar8 = 0;
    uVar9 = (ulonglong)uVar6;
    uVar11 = uVar7;
    uVar6 = 0;
    if ((uint)uVar7 < 10000) {
      uVar12 = 2;
    }
    else {
      do {
        uVar12 = uVar6;
        uVar7 = (uVar11 & 0xffffffff) / 10000;
        uVar6 = (int)uVar11 + (uint)uVar7 * -10000;
        uVar8 = uVar12 + 4;
        *(undefined2 *)(param_2 + (uVar9 - uVar12) + -2) =
             *(undefined2 *)(&DAT_14048bd30 + (uVar6 % 100) * 2);
        *(undefined2 *)(param_2 + (uVar9 - uVar12) + -4) =
             *(undefined2 *)(&DAT_14048bd30 + (uVar6 / 100) * 2);
        uVar11 = uVar7;
        uVar6 = uVar8;
      } while (9999 < (uint)uVar7);
      uVar12 = uVar12 + 6;
    }
    uVar10 = (uint)uVar7;
    uVar6 = uVar10;
    if (99 < uVar10) {
      uVar6 = (uint)((uVar7 & 0xffffffff) / 100);
      *(undefined2 *)(param_2 + (uVar9 - uVar8) + -2) =
           *(undefined2 *)(&DAT_14048bd30 + (uVar10 + uVar6 * -100) * 2);
      uVar8 = uVar12;
    }
    if (uVar6 < 10) {
      *param_2 = (char)uVar6 + '0';
    }
    else {
      *(undefined2 *)(param_2 + (uVar9 - uVar8) + -2) = *(undefined2 *)(&DAT_14048bd30 + uVar6 * 2);
    }
    param_2 = param_2 + uVar9;
    while (uVar13 = uVar13 - 1, -1 < (int)uVar13) {
      if (auStack_28[uVar13] == 0) {
        builtin_strncpy(param_2,"000000000",9);
      }
      else {
        lVar5 = 0;
        uVar6 = auStack_28[uVar13];
        do {
          lVar14 = lVar5 + 4;
          uVar8 = uVar6 / 10000;
          *(undefined2 *)(param_2 + (7 - lVar5)) =
               *(undefined2 *)(&DAT_14048bd30 + ((uVar6 % 10000) % 100) * 2);
          *(undefined2 *)(param_2 + (5 - lVar5)) =
               *(undefined2 *)(&DAT_14048bd30 + ((uVar6 % 10000) / 100) * 2);
          lVar5 = lVar14;
          uVar6 = uVar8;
        } while (lVar14 != 8);
        *param_2 = (char)uVar8 + '0';
      }
      param_2 = param_2 + 9;
    }
    *param_1 = (longlong)param_2;
    *(undefined4 *)(param_1 + 1) = 0;
  }
  return param_1;
}

