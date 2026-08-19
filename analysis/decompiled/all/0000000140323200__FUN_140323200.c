// Function: FUN_140323200
// Addr: 140323200
// Size: 1050 bytes


void FUN_140323200(longlong param_1,undefined8 param_2)

{
  byte bVar1;
  longlong lVar2;
  longlong *plVar3;
  undefined8 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  ulonglong uVar8;
  byte *pbVar9;
  int iVar10;
  undefined4 *puVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  longlong lVar16;
  ulonglong uVar17;
  longlong lVar18;
  ulonglong uVar19;
  longlong lVar20;
  undefined1 auStack_768 [32];
  int local_748;
  undefined1 local_744;
  ulonglong local_740;
  uint local_738;
  longlong local_730;
  undefined8 local_728;
  byte *local_720;
  uint local_718;
  undefined1 local_708 [808];
  undefined1 *local_3e0;
  ulonglong local_328;
  int iStack_320;
  int iStack_31c;
  undefined1 local_318 [720];
  ulonglong local_48;
  
  local_48 = DAT_1404dc110 ^ (ulonglong)auStack_768;
  lVar2 = *(longlong *)(param_1 + 8);
  uVar8 = 0;
  local_738 = (uint)param_2;
  local_740 = 0;
  local_744 = 0;
  local_328 = *(ulonglong *)(lVar2 + 0x1e8);
  local_748 = 0;
  lVar16 = *(longlong *)(lVar2 + 0xe0);
  local_728 = *(undefined8 *)(lVar2 + 0x98);
  plVar3 = *(longlong **)(*(longlong *)(lVar2 + 0xd0) + 0x50);
  local_730 = lVar16;
  if (plVar3 == (longlong *)0x0) {
    pbVar9 = *(byte **)(lVar2 + 0x1e8);
    iVar13 = *(int *)(lVar2 + 0x1a4) + *(int *)(lVar2 + 0x1a8);
    local_720 = pbVar9;
    iVar14 = func_0x0001402f5d20(pbVar9,local_738 * iVar13 + *(int *)(lVar2 + 0x1a0) +
                                        *(int *)(lVar2 + 0x1c0));
    if ((iVar14 == 0) && (iVar14 = FUN_1402f50b0(pbVar9,iVar13 * 2), iVar14 == 0)) {
      uVar12 = *(uint *)(lVar2 + 0x1a4);
      uVar19 = (ulonglong)uVar12;
      pbVar9 = *(byte **)(pbVar9 + 0x38);
      uVar17 = 0;
      uVar8 = uVar19;
      while (uVar12 != 0) {
        bVar1 = *pbVar9;
        pbVar9 = pbVar9 + 1;
        uVar17 = (ulonglong)((uint)uVar17 << 8 | (uint)bVar1);
        uVar12 = (int)uVar8 - 1;
        uVar8 = (ulonglong)uVar12;
      }
      iVar13 = *(int *)(lVar2 + 0x1a8);
      uVar15 = 0;
      iVar10 = iVar13;
      if (iVar13 == 0) {
        uVar12 = 0;
        uVar15 = 0;
      }
      else {
        do {
          bVar1 = *pbVar9;
          pbVar9 = pbVar9 + 1;
          uVar15 = uVar15 << 8 | (uint)bVar1;
          iVar10 = iVar10 + -1;
        } while (iVar10 != 0);
        pbVar9 = pbVar9 + uVar19;
        uVar12 = 0;
        do {
          bVar1 = *pbVar9;
          pbVar9 = pbVar9 + 1;
          uVar12 = uVar12 << 8 | (uint)bVar1;
          iVar13 = iVar13 + -1;
        } while (iVar13 != 0);
      }
      if ((uint)uVar17 < *(uint *)(lVar2 + 0x1b0)) {
        if (*(uint *)(local_720 + 8) < uVar12) {
          iVar14 = 9;
          func_0x0001402f51d0();
        }
        else {
          if (uVar12 < uVar15) {
            iVar14 = 9;
          }
          func_0x0001402f51d0();
        }
      }
      else {
        iVar14 = 9;
        func_0x0001402f51d0();
      }
    }
    else {
      uVar17 = (ulonglong)local_738;
      uVar15 = local_738;
      uVar12 = local_738;
    }
    uVar8 = local_740;
    local_748 = iVar14;
    if ((((iVar14 != 0) || (uVar12 = uVar12 - uVar15, uVar12 == 0)) ||
        (local_740 = FUN_1402f8070(local_728,uVar12,&local_748), uVar8 = local_740, local_748 != 0))
       || (local_748 = FUN_1402f5600(local_328,*(int *)(lVar2 + 0x1c0) + uVar15,local_740,uVar12),
          uVar8 = local_740, local_748 != 0)) goto LAB_14032368e;
    local_748 = 0;
    lVar16 = local_730;
  }
  else {
    local_748 = (**(code **)*plVar3)(plVar3[1],param_2,&local_720);
    if ((local_748 != 0) ||
       (uVar12 = *(uint *)(lVar2 + 0x1a4), uVar15 = uVar12, uVar17 = uVar8, pbVar9 = local_720,
       local_718 < uVar12)) goto LAB_14032368e;
    for (; uVar15 != 0; uVar15 = uVar15 - 1) {
      uVar17 = (ulonglong)((uint)uVar17 << 8 | (uint)*pbVar9);
      pbVar9 = pbVar9 + 1;
    }
    if (*(uint *)(lVar2 + 0x1b0) <= (uint)uVar17) {
      local_748 = 9;
      goto LAB_14032368e;
    }
    uVar12 = local_718 - uVar12;
    local_740 = FUN_1402f8070(local_728,uVar12,&local_748);
    if (local_748 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_1404211c0(local_740,local_720 + *(uint *)(lVar2 + 0x1a4),uVar12);
    }
    (**(code **)(*plVar3 + 8))(plVar3[1],&local_720);
    uVar8 = local_740;
    if (local_748 != 0) goto LAB_14032368e;
  }
  puVar11 = (undefined4 *)(uVar17 * 0x10 + *(longlong *)(lVar2 + 0x1d0));
  *(undefined4 *)(param_1 + 0x674) = *puVar11;
  uVar4 = *(undefined8 *)(puVar11 + 2);
  *(undefined8 *)(param_1 + 0x680) = 0;
  *(undefined8 *)(param_1 + 0x688) = 0;
  *(undefined8 *)(param_1 + 0x678) = uVar4;
  lVar20 = uVar17 * 0xfc + *(longlong *)(lVar2 + 0x1b8);
  uVar5 = *(undefined4 *)(lVar20 + 0xdc);
  uVar6 = *(undefined4 *)(lVar20 + 0xe0);
  uVar7 = *(undefined4 *)(lVar20 + 0xe4);
  *(undefined4 *)(param_1 + 0x690) = *(undefined4 *)(lVar20 + 0xd8);
  *(undefined4 *)(param_1 + 0x694) = uVar5;
  *(undefined4 *)(param_1 + 0x698) = uVar6;
  *(undefined4 *)(param_1 + 0x69c) = uVar7;
  *(undefined8 *)(param_1 + 0x6a0) = *(undefined8 *)(lVar20 + 0xe8);
  uVar15 = *(uint *)(lVar20 + 4);
  uVar8 = (ulonglong)uVar15;
  *(uint *)(param_1 + 0x670) = uVar15;
  if ((int)uVar15 < 0) {
    uVar8 = 0;
  }
  else {
    if (uVar12 < uVar15) {
      local_748 = 9;
      uVar8 = local_740;
      goto LAB_14032368e;
    }
    (**(code **)(local_730 + 0x20))(local_740,uVar12,0x10ea);
  }
  iVar14 = uVar12 - (int)uVar8;
  lVar18 = uVar8 + local_740;
  if (*(char *)(param_1 + 0x5e) == '\0') {
    (**(code **)(lVar16 + 0x30))(local_708,param_1,1);
    (**(code **)(lVar16 + 0x38))(lVar2,lVar20,local_318);
    lVar2 = local_730;
    local_3e0 = local_318;
    local_748 = (**(code **)(*(longlong *)(local_730 + 0x18) + 0x18))(local_708,lVar18,iVar14);
    if ((char)local_748 == -0x5c) {
      local_744 = 1;
      *(undefined1 *)(*(longlong *)(param_1 + 0x10) + 0xf8) = 0;
      local_748 = (**(code **)(*(longlong *)(lVar2 + 0x18) + 0x18))(local_708,lVar18,iVar14);
    }
  }
  else {
    local_748 = (**(code **)(*(longlong *)(local_730 + 0x18) + 0x10))(param_1,lVar18,iVar14);
  }
  uVar8 = local_740;
  if (((local_748 == 0) && (plVar3 != (longlong *)0x0)) && (*(longlong *)(*plVar3 + 0x10) != 0)) {
    iVar14 = FUN_1402f4c30(*(undefined4 *)(param_1 + 0x38));
    local_328 = (ulonglong)(uint)(iVar14 >> 0x10);
    iStack_320 = FUN_1402f4c30(*(undefined4 *)(param_1 + 0x40));
    iStack_320 = iStack_320 >> 0x10;
    iStack_31c = FUN_1402f4c30(*(undefined4 *)(param_1 + 0x44));
    iStack_31c = iStack_31c >> 0x10;
    local_748 = (**(code **)(*plVar3 + 0x10))(plVar3[1],local_738,0,&local_328);
    *(int *)(param_1 + 0x38) = (int)local_328 << 0x10;
    *(int *)(param_1 + 0x40) = iStack_320 << 0x10;
    *(int *)(param_1 + 0x44) = iStack_31c << 0x10;
    uVar8 = local_740;
  }
LAB_14032368e:
                    /* WARNING: Subroutine does not return */
  FUN_1402f8060(local_728,uVar8);
}

