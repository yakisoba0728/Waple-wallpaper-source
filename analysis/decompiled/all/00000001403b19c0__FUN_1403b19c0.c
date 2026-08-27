// Function: FUN_1403b19c0
// Addr: 1403b19c0
// Size: 1285 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

longlong FUN_1403b19c0(undefined8 param_1,longlong param_2,ulonglong param_3)

{
  uint uVar1;
  short sVar2;
  undefined2 uVar3;
  longlong *plVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  longlong lVar8;
  longlong *plVar9;
  uint *puVar10;
  longlong lVar11;
  ulonglong uVar12;
  uint uVar13;
  ushort uVar14;
  ushort uVar15;
  uint uVar16;
  ulonglong uVar17;
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
  longlong local_748;
  uint local_73c;
  longlong *local_738 [3];
  longlong *local_720;
  undefined4 local_6d8;
  undefined4 uStack_6d4;
  undefined2 *puStack_6d0;
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
  undefined2 local_508;
  undefined1 local_398 [848];
  ulonglong local_48;
  
  local_48 = DAT_1404dc040 ^ (ulonglong)auStack_7a8;
  uVar12 = 0;
  uVar13 = 0x621;
  uVar17 = uVar12;
  do {
    sVar2 = *(short *)(&DAT_14046e9c0 + (ulonglong)(uVar13 - 0x621) * 8 + (param_3 & 0xffffffff) * 2
                      );
    if (sVar2 != 0) {
      local_778[0] = 0;
      lVar8 = *(longlong *)(*(longlong *)(param_2 + 0x90) + 0x10);
      local_788 = uVar12;
      if (lVar8 != 0) {
        local_788 = *(ulonglong *)(lVar8 + 0x10);
      }
      iVar6 = (**(code **)(*(longlong *)(param_2 + 0x90) + 0x30))
                        (param_2,*(undefined8 *)(param_2 + 0x98),uVar13,local_778);
      if (iVar6 != 0) {
        local_770 = local_770 & 0xffffffff00000000;
        lVar8 = *(longlong *)(*(longlong *)(param_2 + 0x90) + 0x10);
        local_788 = uVar12;
        if (lVar8 != 0) {
          local_788 = *(ulonglong *)(lVar8 + 0x10);
        }
        iVar6 = (**(code **)(*(longlong *)(param_2 + 0x90) + 0x30))
                          (param_2,*(undefined8 *)(param_2 + 0x98),sVar2,&local_770);
        if ((((iVar6 != 0) && (local_778[0] != (uint)local_770)) && (local_778[0] < 0x10000)) &&
           ((uint)local_770 < 0x10000)) {
          *(char *)(&local_678 + uVar17) = (char)(local_778[0] >> 8);
          *(char *)((longlong)&local_678 + uVar17 * 2 + 1) = (char)local_778[0];
          *(char *)(&local_508 + uVar17) = (char)(local_770 >> 8);
          *(char *)((longlong)&local_508 + uVar17 * 2 + 1) = (char)local_770;
          uVar17 = (ulonglong)((int)uVar17 + 1);
        }
      }
    }
    uVar13 = uVar13 + 1;
  } while (uVar13 < 0x6d4);
  uVar13 = (uint)uVar17;
  if (uVar13 == 0) {
    return 0;
  }
  uVar16 = 1;
  if (1 < uVar13) {
    do {
      if (uVar16 != 0) {
        uVar12 = (ulonglong)uVar16;
        local_770 = uVar12 * 2;
        uVar15 = (ushort)*(byte *)((longlong)&local_678 + local_770 + 1) +
                 (ushort)*(byte *)(&local_678 + uVar12) * 0x100;
        uVar7 = uVar16;
        do {
          uVar1 = uVar7 - 1;
          uVar14 = (&local_678)[uVar1] * 0x100 + ((ushort)(&local_678)[uVar1] >> 8);
          if ((int)((uint)(uVar14 >= uVar15 && uVar14 != uVar15) - (uint)(uVar14 < uVar15)) < 1)
          break;
          uVar7 = uVar1;
        } while (uVar1 != 0);
        if (uVar16 != uVar7) {
          uVar3 = (&local_678)[uVar12];
          lVar8 = (ulonglong)(uVar16 - uVar7) * 2;
          FUN_1404210f0(&local_678 + (uVar7 + 1),&local_678 + uVar7,lVar8);
          (&local_678)[uVar7] = uVar3;
          uVar3 = *(undefined2 *)((longlong)&local_508 + local_770);
          FUN_1404210f0(&local_508 + (uVar7 + 1),&local_508 + uVar7,lVar8);
          (&local_508)[uVar7] = uVar3;
        }
      }
      uVar16 = uVar16 + 1;
    } while (uVar16 < uVar13);
  }
  FUN_140395a70(&local_768,local_398,0x34c);
  lVar8 = FUN_14038e4b0(&local_768);
  local_6b8 = local_770;
  puStack_6b0 = &local_678;
  uStack_6a4 = 0;
  local_788 = CONCAT44(local_788._4_4_,1);
  local_6a8 = uVar13;
  cVar5 = FUN_14040b000(lVar8,&local_768,1,8);
  if (cVar5 == '\0') {
LAB_1403b1e81:
    FUN_1403bf0c0(&local_768);
  }
  else {
    puStack_6d0 = &local_508;
    uStack_6c4 = 0;
    local_698 = local_6d8;
    uStack_694 = uStack_6d4;
    local_6c8 = uVar13;
    local_688 = uVar17;
    uStack_690 = puStack_6d0;
    if (local_73c == 0) {
      plVar9 = (longlong *)FUN_1403a3490(local_738);
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
    cVar5 = FUN_14038d770(local_760,&local_768,&local_6b8);
    plVar9 = local_720;
    if (cVar5 == '\0') {
      if (((local_720 != (longlong *)0x0) && (local_73c < 0x11)) &&
         ((0x10105U >> (local_73c & 0x1f) & 1) != 0)) {
        if (local_748 == 0) {
          local_748 = *local_720;
        }
        plVar4 = (longlong *)local_720[6];
        if (local_73c == 0) {
          local_758 = local_720[1];
          local_760 = local_748;
          local_720 = (longlong *)local_720[6];
          FUN_1403bdf20(&local_768);
          plVar4 = local_720;
        }
        local_720 = plVar4;
        local_748 = 0;
        FUN_1403c29e0(plVar9);
        *plVar9 = (longlong)local_738[0];
        local_738[0] = plVar9;
      }
      goto LAB_1403b1e81;
    }
    if ((uint)*(byte *)(lVar8 + 5) + (uint)*(byte *)(lVar8 + 4) * 0x100 == 0) {
      DAT_1404e4f20._0_2_ = (undefined2)DAT_14045dd10;
      iVar6 = 0x404e4f20;
    }
    else {
      iVar6 = (int)lVar8 + 6;
    }
    uVar13 = FUN_1403f0d30(&local_768,1);
    if ((local_73c == 0) && (uVar13 != 0)) {
      puVar10 = (uint *)FUN_1403f5580(local_720 + 2);
      if ((int)local_720[2] < 0) {
        local_73c = local_73c | 1;
      }
      puVar10[2] = uVar13;
      *puVar10 = *puVar10 & 0xffffffc2 | 2;
      puVar10[1] = iVar6 - (int)*local_720;
      *puVar10 = 2;
    }
    FUN_1403bf0c0(&local_768);
    if (local_73c == 0) {
      iVar6 = (((int)local_760 - (int)local_758) - local_768) + local_750;
      if (iVar6 != 0) {
        lVar8 = _malloc_base(iVar6);
        if (lVar8 != 0) {
          lVar11 = CONCAT44(uStack_764,local_768);
          if (local_760 != lVar11) {
            FUN_1404210f0(lVar8,lVar11);
            lVar11 = CONCAT44(uStack_764,local_768);
          }
          if (CONCAT44(uStack_74c,local_750) != local_758) {
            FUN_1404210f0((local_760 - lVar11) + lVar8);
          }
          goto LAB_1403b1e8e;
        }
      }
    }
  }
  lVar8 = 0;
LAB_1403b1e8e:
  FUN_1403976a0(&local_768);
  return lVar8;
}

