// Function: FUN_14031f2f0
// Addr: 14031f2f0
// Size: 461 bytes


ulonglong FUN_14031f2f0(longlong *param_1,uint param_2,longlong *param_3,int *param_4)

{
  uint *puVar1;
  byte *pbVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  ulonglong uVar6;
  ulonglong uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  ulonglong uVar12;
  byte local_res8 [8];
  
  uVar12 = (ulonglong)param_2;
  if ((param_1 == (longlong *)0x0) || (*(uint *)(param_1 + 2) <= param_2)) {
    return 6;
  }
  lVar4 = param_1[4];
  uVar10 = 0;
  lVar5 = *param_1;
  if (lVar4 == 0) {
    uVar6 = FUN_1402f5c50(lVar5,*(byte *)((longlong)param_1 + 0x14) * param_2 +
                                *(int *)((longlong)param_1 + 0xc) + (int)param_1[1]);
    if ((int)uVar6 != 0) {
      return uVar6;
    }
    uVar10 = 0;
    uVar7 = FUN_1402f54b0(*param_1,local_res8,*(undefined1 *)((longlong)param_1 + 0x14));
    uVar6 = uVar7 & 0xffffffff;
    if ((int)uVar7 != 0) {
      return uVar7;
    }
    uVar7 = 0;
    uVar11 = 0;
    if (*(byte *)((longlong)param_1 + 0x14) != 0) {
      do {
        pbVar2 = local_res8 + uVar7;
        uVar8 = (int)uVar7 + 1;
        uVar7 = (ulonglong)uVar8;
        uVar10 = uVar10 << 8 | (uint)*pbVar2;
        uVar11 = uVar10;
      } while ((int)uVar8 < (int)(uint)*(byte *)((longlong)param_1 + 0x14));
    }
    uVar10 = 0;
    if (uVar11 != 0) {
      do {
        uVar9 = 0;
        uVar8 = FUN_1402f54b0(*param_1,local_res8,*(undefined1 *)((longlong)param_1 + 0x14));
        uVar6 = (ulonglong)uVar8;
        uVar10 = uVar9;
        if (uVar8 == 0) {
          uVar7 = 0;
          uVar10 = 0;
          if (*(byte *)((longlong)param_1 + 0x14) != 0) {
            do {
              pbVar2 = local_res8 + uVar7;
              uVar8 = (int)uVar7 + 1;
              uVar7 = (ulonglong)uVar8;
              uVar9 = uVar9 << 8 | (uint)*pbVar2;
              uVar10 = uVar9;
            } while ((int)uVar8 < (int)(uint)*(byte *)((longlong)param_1 + 0x14));
          }
        }
      } while ((uVar10 == 0) &&
              (uVar8 = (int)uVar12 + 1, uVar12 = (ulonglong)uVar8, uVar8 < *(uint *)(param_1 + 2)));
    }
  }
  else {
    uVar11 = *(uint *)(lVar4 + uVar12 * 4);
    uVar6 = 0;
    if (uVar11 != 0) {
      do {
        uVar8 = (int)uVar12 + 1;
        uVar12 = (ulonglong)uVar8;
        uVar10 = *(uint *)(lVar4 + uVar12 * 4);
        if (uVar10 != 0) break;
      } while (uVar8 < *(uint *)(param_1 + 2));
    }
  }
  iVar3 = *(int *)(lVar5 + 8);
  puVar1 = (uint *)(param_1 + 3);
  if ((iVar3 + 1U < uVar10) || ((iVar3 - uVar10) + 1 < *puVar1)) {
    uVar10 = (iVar3 - *puVar1) + 1;
  }
  if ((uVar11 == 0) || (uVar10 <= uVar11)) {
    *param_3 = 0;
    *param_4 = 0;
  }
  else {
    *param_4 = uVar10 - uVar11;
    if (param_1[5] == 0) {
      uVar6 = FUN_1402f5c50(lVar5,(*puVar1 - 1) + uVar11);
      if ((int)uVar6 == 0) {
        uVar6 = FUN_1402f5150(lVar5,uVar10 - uVar11,param_3);
      }
    }
    else {
      *param_3 = ((ulonglong)uVar11 - 1) + param_1[5];
    }
  }
  return uVar6;
}

