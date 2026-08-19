// Function: FUN_1403b1a90
// Addr: 1403b1a90
// Size: 1045 bytes


void FUN_1403b1a90(undefined8 param_1,longlong param_2,ulonglong param_3)

{
  uint uVar1;
  short sVar2;
  longlong lVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  longlong *plVar9;
  uint *puVar10;
  uint uVar11;
  ushort uVar12;
  ushort uVar13;
  uint uVar14;
  ulonglong uVar15;
  ulonglong uVar16;
  undefined1 auStack_7a8 [32];
  ulonglong local_788;
  uint local_778 [2];
  ulonglong local_770;
  int local_768;
  undefined4 uStack_764;
  longlong local_760;
  longlong local_758;
  int local_750;
  undefined4 uStack_74c;
  longlong lStack_748;
  uint local_73c;
  longlong *local_738 [3];
  longlong *local_720;
  undefined4 local_6d8;
  undefined4 uStack_6d4;
  undefined1 *puStack_6d0;
  uint local_6c8;
  undefined4 uStack_6c4;
  ulonglong local_6b8;
  undefined2 *puStack_6b0;
  uint local_6a8;
  undefined4 uStack_6a4;
  undefined4 local_698;
  undefined4 uStack_694;
  undefined8 uStack_690;
  ulonglong local_688;
  undefined2 local_678;
  byte local_676 [366];
  undefined1 local_508 [368];
  undefined1 local_398 [848];
  ulonglong local_48;
  
  local_48 = DAT_1404dc110 ^ (ulonglong)auStack_7a8;
  uVar16 = 0;
  uVar11 = 0x621;
  uVar15 = uVar16;
  do {
    sVar2 = *(short *)(&DAT_14046ea90 + (ulonglong)(uVar11 - 0x621) * 8 + (param_3 & 0xffffffff) * 2
                      );
    if (sVar2 != 0) {
      local_778[0] = 0;
      lVar8 = *(longlong *)(*(longlong *)(param_2 + 0x90) + 0x10);
      local_788 = uVar16;
      if (lVar8 != 0) {
        local_788 = *(ulonglong *)(lVar8 + 0x10);
      }
      iVar6 = (**(code **)(*(longlong *)(param_2 + 0x90) + 0x30))
                        (param_2,*(undefined8 *)(param_2 + 0x98),uVar11,local_778);
      if (iVar6 != 0) {
        local_770 = local_770 & 0xffffffff00000000;
        lVar8 = *(longlong *)(*(longlong *)(param_2 + 0x90) + 0x10);
        local_788 = uVar16;
        if (lVar8 != 0) {
          local_788 = *(ulonglong *)(lVar8 + 0x10);
        }
        iVar6 = (**(code **)(*(longlong *)(param_2 + 0x90) + 0x30))
                          (param_2,*(undefined8 *)(param_2 + 0x98),sVar2,&local_770);
        if ((((iVar6 != 0) && (local_778[0] != (uint)local_770)) && (local_778[0] < 0x10000)) &&
           ((uint)local_770 < 0x10000)) {
          lVar8 = uVar15 * 2;
          local_676[lVar8 + -2] = (byte)(local_778[0] >> 8);
          local_676[lVar8 + -1] = (byte)local_778[0];
          local_508[lVar8] = (char)(local_770 >> 8);
          local_508[lVar8 + 1] = (char)local_770;
          uVar15 = (ulonglong)((int)uVar15 + 1);
        }
      }
    }
    uVar11 = uVar11 + 1;
  } while (uVar11 < 0x6d4);
  uVar11 = (uint)uVar15;
  if (uVar11 == 0) goto LAB_1403b1f6b;
  uVar14 = 1;
  if (1 < uVar11) {
    do {
      if (uVar14 != 0) {
        local_770 = (ulonglong)uVar14 * 2;
        uVar13 = (ushort)local_676[local_770 - 1] + (ushort)local_676[local_770 - 2] * 0x100;
        uVar7 = uVar14;
        do {
          uVar1 = uVar7 - 1;
          uVar12 = *(ushort *)(local_676 + (ulonglong)uVar1 * 2 + -2) * 0x100 +
                   (*(ushort *)(local_676 + (ulonglong)uVar1 * 2 + -2) >> 8);
          if ((int)((uint)(uVar12 >= uVar13 && uVar12 != uVar13) - (uint)(uVar12 < uVar13)) < 1)
          break;
          uVar7 = uVar1;
        } while (uVar1 != 0);
        if (uVar14 != uVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_1404211c0(local_676 + (ulonglong)(uVar7 + 1) * 2 + -2,
                        local_676 + (ulonglong)uVar7 * 2 + -2,(ulonglong)(uVar14 - uVar7) * 2);
        }
      }
      uVar14 = uVar14 + 1;
    } while (uVar14 < uVar11);
  }
  FUN_140395b40(&local_768,local_398,0x34c);
  lVar8 = FUN_14038e580(&local_768);
  local_6b8 = local_770;
  puStack_6b0 = &local_678;
  uStack_6a4 = 0;
  local_788 = CONCAT44(local_788._4_4_,1);
  local_6a8 = uVar11;
  cVar5 = FUN_14040b0d0(lVar8,&local_768,1,8);
  if (cVar5 == '\0') {
UNWIND_INFO_1403b1ec5_ExceptionHandler:
    FUN_1403bf190(&local_768);
  }
  else {
    puStack_6d0 = local_508;
    uStack_6c4 = 0;
    local_698 = local_6d8;
    uStack_694 = uStack_6d4;
    local_6c8 = uVar11;
    local_688 = uVar15;
    uStack_690 = puStack_6d0;
    if (local_73c == 0) {
      plVar9 = (longlong *)FUN_1403a3560(local_738);
      if (plVar9 == (longlong *)0x0) {
        if (local_73c == 0) {
          local_73c = 1;
        }
      }
      else {
        *plVar9 = local_760;
        plVar9[1] = local_758;
        plVar9[6] = (longlong)local_720;
        local_720 = plVar9;
      }
    }
    cVar5 = FUN_14038d840(local_760,&local_768,&local_6b8);
    plVar9 = local_720;
    if (cVar5 == '\0') {
      if (((local_720 != (longlong *)0x0) && (local_73c < 0x11)) &&
         ((0x10105U >> (local_73c & 0x1f) & 1) != 0)) {
        if (lStack_748 == 0) {
          lStack_748 = *local_720;
        }
        plVar4 = (longlong *)local_720[6];
        if (local_73c == 0) {
          local_758 = local_720[1];
          local_760 = lStack_748;
          local_720 = (longlong *)local_720[6];
          FUN_1403bdff0(&local_768);
          plVar4 = local_720;
        }
        local_720 = plVar4;
        lStack_748 = 0;
        FUN_1403c2ab0(plVar9);
        *plVar9 = (longlong)local_738[0];
        local_738[0] = plVar9;
      }
      goto UNWIND_INFO_1403b1ec5_ExceptionHandler;
    }
    if ((uint)*(byte *)(lVar8 + 5) + (uint)*(byte *)(lVar8 + 4) * 0x100 == 0) {
      DAT_1404e4ff0._0_2_ = (undefined2)DAT_14045dde0;
      iVar6 = 0x404e4ff0;
    }
    else {
      iVar6 = (int)lVar8 + 6;
    }
    uVar11 = FUN_1403f0e00(&local_768,1);
    if ((local_73c == 0) && (uVar11 != 0)) {
      puVar10 = (uint *)FUN_1403f5650(local_720 + 2);
      if ((int)local_720[2] < 0) {
        local_73c = local_73c | 1;
      }
      puVar10[2] = uVar11;
      *puVar10 = *puVar10 & 0xffffffc2 | 2;
      puVar10[1] = iVar6 - (int)*local_720;
      *puVar10 = 2;
    }
    FUN_1403bf190(&local_768);
    if (local_73c == 0) {
      iVar6 = (((int)local_760 - (int)local_758) - local_768) + local_750;
      if (iVar6 != 0) {
        lVar8 = thunk_FUN_1402da070(iVar6);
        if (lVar8 != 0) {
          lVar3 = CONCAT44(uStack_764,local_768);
          if (local_760 != lVar3) {
                    /* WARNING: Subroutine does not return */
            FUN_1404211c0(lVar8,lVar3);
          }
          if (CONCAT44(uStack_74c,local_750) != local_758) {
                    /* WARNING: Subroutine does not return */
            FUN_1404211c0((local_760 - lVar3) + lVar8);
          }
        }
      }
    }
  }
  func_0x000140397770(&local_768);
LAB_1403b1f6b:
  func_0x0001402ed2f0(local_48 ^ (ulonglong)auStack_7a8);
  return;
}

