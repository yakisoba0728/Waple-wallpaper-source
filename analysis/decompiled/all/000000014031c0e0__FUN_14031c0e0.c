// Function: FUN_14031c0e0
// Addr: 14031c0e0
// Size: 2544 bytes


uint FUN_14031c0e0(undefined8 param_1,undefined4 *param_2,uint param_3,undefined4 param_4,
                  undefined8 param_5)

{
  char cVar1;
  short sVar2;
  ushort uVar3;
  uint uVar4;
  short sVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined4 uVar9;
  int iVar10;
  longlong lVar11;
  longlong lVar12;
  longlong lVar13;
  undefined8 uVar14;
  char *pcVar15;
  size_t sVar16;
  char cVar17;
  ulonglong uVar18;
  char *pcVar19;
  short sVar20;
  undefined4 *puVar21;
  undefined8 uVar22;
  uint uVar23;
  int iVar24;
  longlong lVar25;
  bool bVar26;
  undefined4 *local_res10 [3];
  char local_88;
  char local_87;
  uint local_84;
  undefined4 *local_80;
  undefined4 local_78;
  undefined4 local_74;
  uint local_70;
  undefined8 local_68;
  undefined8 local_60;
  longlong local_58;
  
  uVar22 = *(undefined8 *)(*(longlong *)(param_2 + 0x24) + 8);
  local_res10[0] = param_2;
  lVar11 = FUN_1402f04b0(uVar22,&DAT_14043bd54);
  if (lVar11 == 0) {
    return 0xb;
  }
  local_58 = FUN_1402f81e0(*(undefined8 *)(param_2 + 0x24),"postscript-cmaps",1);
  local_68 = FUN_1402f04b0(uVar22,"pshinter");
  lVar12 = FUN_1402f04b0(uVar22,"psaux");
  if (lVar12 == 0) {
    return 0xb;
  }
  *(longlong *)(param_2 + 0xbe) = lVar12;
  local_80 = (undefined4 *)FUN_1402f81e0(*(undefined8 *)(param_2 + 0x24),"cff-load",1);
  local_84 = FUN_1402f5c50(param_1,0);
  if (local_84 != 0) {
    return local_84;
  }
  local_88 = '\x01';
  local_84 = (**(code **)(lVar11 + 8))(param_1,param_2,param_3,param_4,param_5);
  if (local_84 == 0) {
    if (param_2[0x3c] != 0x4f54544f) {
      return 2;
    }
    if ((int)param_3 < 0) {
      return 0;
    }
    local_84 = (**(code **)(param_2 + 0xa8))(param_2,0x68656164,param_1,0);
    if (local_84 == 0) {
      uVar8 = (**(code **)(lVar11 + 0x10))(param_1,param_2,param_3,param_4,param_5);
      if (uVar8 != 0) {
        return uVar8;
      }
      local_88 = '\0';
      local_84 = 0;
    }
    else {
      local_84 = (**(code **)(lVar11 + 0x40))(param_2,param_1);
      if (((char)local_84 != -0x72) && ((char)local_84 != '\0')) {
        return local_84;
      }
    }
    local_84 = (**(code **)(param_2 + 0xa8))(param_2,0x43464632,param_1,0);
    if (local_84 == 0) {
      *(undefined1 *)(param_2 + 0x100) = 1;
      local_87 = '\x01';
    }
    else {
      local_87 = '\0';
      if ((char)local_84 == -0x72) {
        local_84 = (**(code **)(param_2 + 0xa8))(param_2,0x43464620,param_1,0);
        local_87 = '\0';
      }
    }
    if (local_84 != 0) {
      return local_84;
    }
    local_70 = 0x819;
  }
  else {
    uVar8 = FUN_1402f5c50(param_1,0);
    if (uVar8 != 0) {
      return uVar8;
    }
    local_87 = '\0';
    local_70 = 0x811;
    local_84 = 0;
  }
  local_60 = *(undefined8 *)(param_2 + 0x26);
  lVar11 = FUN_1402f7e90(local_60,0x1138,&local_84);
  if (local_84 != 0) {
    return local_84;
  }
  *(longlong *)(param_2 + 0xf8) = lVar11;
  local_84 = FUN_14031eb50(uVar22,param_1,param_3,lVar11,param_2,local_88,local_87);
  if (local_84 != 0) {
    return local_84;
  }
  if ((int)param_3 < 0) {
    *param_2 = *(undefined4 *)(lVar11 + 0x1c);
    return 0;
  }
  *(ulonglong *)(lVar11 + 0x10d0) = local_68;
  *(undefined4 **)(lVar11 + 0x10e0) = local_80;
  *(longlong *)(lVar11 + 0x10d8) = local_58;
  param_2[1] = param_3 & 0xffff;
  local_68 = CONCAT44(local_68._4_4_,param_3) & 0xffffffff0000ffff;
  param_2[4] = *(undefined4 *)(lVar11 + 0x20);
  if ((*(int *)(lVar11 + 0x660) == 0xffff) && (local_58 == 0)) {
    return 0xb;
  }
  uVar8 = 0;
  if (((param_2[2] & 0x100) != 0) && (uVar8 = FUN_1402fa830(param_2,param_3 >> 0x10), uVar8 != 0)) {
    return uVar8;
  }
  local_84 = uVar8;
  if (*(char *)(lVar11 + 0x61c) == '\0') {
    uVar8 = 1000;
    if (local_88 == '\0') {
      uVar8 = (uint)*(ushort *)(param_2 + 0x1a);
    }
    *(uint *)(lVar11 + 0x620) = uVar8;
  }
  iVar10 = *(int *)(lVar11 + 0x618);
  if (iVar10 == 0) {
    iVar24 = *(int *)(lVar11 + 0x614);
    if (iVar24 < 0) {
      iVar24 = -iVar24;
    }
  }
  else {
    iVar24 = -iVar10;
    if (-iVar10 < 0) {
      iVar24 = iVar10;
    }
  }
  if (iVar24 != 0x10000) {
    uVar9 = FUN_1402efa10(*(undefined4 *)(lVar11 + 0x620),iVar24);
    *(undefined4 *)(lVar11 + 0x620) = uVar9;
    uVar9 = FUN_1402efa10(*(undefined4 *)(lVar11 + 0x60c),iVar24);
    *(undefined4 *)(lVar11 + 0x60c) = uVar9;
    uVar9 = FUN_1402efa10(*(undefined4 *)(lVar11 + 0x614),iVar24);
    *(undefined4 *)(lVar11 + 0x614) = uVar9;
    uVar9 = FUN_1402efa10(*(undefined4 *)(lVar11 + 0x610),iVar24);
    *(undefined4 *)(lVar11 + 0x610) = uVar9;
    uVar9 = FUN_1402efa10(*(undefined4 *)(lVar11 + 0x618),iVar24);
    *(undefined4 *)(lVar11 + 0x618) = uVar9;
    uVar9 = FUN_1402efa10(*(undefined4 *)(lVar11 + 0x624),iVar24);
    *(undefined4 *)(lVar11 + 0x624) = uVar9;
    uVar9 = FUN_1402efa10(*(undefined4 *)(lVar11 + 0x628),iVar24);
    *(undefined4 *)(lVar11 + 0x628) = uVar9;
  }
  *(int *)(lVar11 + 0x624) = (int)*(short *)(lVar11 + 0x626);
  *(int *)(lVar11 + 0x628) = (int)*(short *)(lVar11 + 0x62a);
  uVar8 = *(uint *)(lVar11 + 0x8a8);
  uVar18 = (ulonglong)uVar8;
  uVar22 = local_60;
  while (local_60 = uVar22, uVar8 != 0) {
    puVar21 = (undefined4 *)(lVar11 + 0x60c);
    uVar8 = (int)uVar18 - 1;
    uVar18 = (ulonglong)uVar8;
    lVar12 = *(longlong *)(lVar11 + 0x8b0 + uVar18 * 8);
    if (*(char *)(lVar12 + 0x3c) == '\0') {
      uVar9 = *(undefined4 *)(lVar11 + 0x610);
      uVar6 = *(undefined4 *)(lVar11 + 0x614);
      uVar7 = *(undefined4 *)(lVar11 + 0x618);
      *(undefined4 *)(lVar12 + 0x2c) = *puVar21;
      *(undefined4 *)(lVar12 + 0x30) = uVar9;
      *(undefined4 *)(lVar12 + 0x34) = uVar6;
      *(undefined4 *)(lVar12 + 0x38) = uVar7;
      *(undefined8 *)(lVar12 + 0x44) = *(undefined8 *)(lVar11 + 0x624);
      uVar9 = *(undefined4 *)(lVar11 + 0x620);
LAB_14031c543:
      *(undefined4 *)(lVar12 + 0x40) = uVar9;
    }
    else if (*(char *)(lVar11 + 0x61c) != '\0') {
      uVar4 = *(uint *)(lVar11 + 0x620);
      if ((uVar4 < 2) || (uVar23 = *(uint *)(lVar12 + 0x40), uVar23 < 2)) {
        uVar23 = 1;
      }
      else if (uVar4 < uVar23) {
        uVar23 = uVar4;
      }
      FUN_1402f1f90(puVar21,lVar12 + 0x2c,uVar23);
      FUN_1402f60e0(lVar12 + 0x44,puVar21,uVar23);
      uVar9 = FUN_1402f20b0(*(undefined4 *)(lVar12 + 0x40),*(undefined4 *)(lVar11 + 0x620),uVar23);
      goto LAB_14031c543;
    }
    iVar10 = *(int *)(lVar12 + 0x38);
    if (iVar10 == 0) {
      iVar24 = *(int *)(lVar12 + 0x34);
      if (iVar24 < 0) {
        iVar24 = -iVar24;
      }
    }
    else {
      iVar24 = -iVar10;
      if (-iVar10 < 0) {
        iVar24 = iVar10;
      }
    }
    if (iVar24 != 0x10000) {
      uVar9 = FUN_1402efa10(*(undefined4 *)(lVar12 + 0x40),iVar24);
      *(undefined4 *)(lVar12 + 0x40) = uVar9;
      uVar9 = FUN_1402efa10(*(undefined4 *)(lVar12 + 0x2c),iVar24);
      *(undefined4 *)(lVar12 + 0x2c) = uVar9;
      uVar9 = FUN_1402efa10(*(undefined4 *)(lVar12 + 0x34),iVar24);
      *(undefined4 *)(lVar12 + 0x34) = uVar9;
      uVar9 = FUN_1402efa10(*(undefined4 *)(lVar12 + 0x30),iVar24);
      *(undefined4 *)(lVar12 + 0x30) = uVar9;
      uVar9 = FUN_1402efa10(*(undefined4 *)(lVar12 + 0x38),iVar24);
      *(undefined4 *)(lVar12 + 0x38) = uVar9;
      uVar9 = FUN_1402efa10(*(undefined4 *)(lVar12 + 0x44),iVar24);
      *(undefined4 *)(lVar12 + 0x44) = uVar9;
      uVar9 = FUN_1402efa10(*(undefined4 *)(lVar12 + 0x48),iVar24);
      *(undefined4 *)(lVar12 + 0x48) = uVar9;
    }
    *(int *)(lVar12 + 0x44) = (int)*(short *)(lVar12 + 0x46);
    *(int *)(lVar12 + 0x48) = (int)*(short *)(lVar12 + 0x4a);
    param_2 = local_res10[0];
    uVar22 = local_60;
  }
  if (local_88 != '\0') {
    lVar12 = 0;
    lVar25 = 0;
    *param_2 = *(undefined4 *)(lVar11 + 0x1c);
    if (*(int *)(lVar11 + 0x660) == 0xffff) {
      iVar10 = *(int *)(lVar11 + 0x500);
    }
    else {
      iVar10 = *(int *)(lVar11 + 0x4e8) + 1;
    }
    param_2[4] = iVar10;
    param_2[0x16] = (int)*(short *)(lVar11 + 0x632);
    sVar2 = *(short *)(lVar11 + 0x636);
    param_2[0x17] = (int)sVar2;
    param_2[0x18] = *(int *)(lVar11 + 0x638) + 0xffff >> 0x10;
    iVar10 = *(int *)(lVar11 + 0x63c) + 0xffff;
    param_2[0x19] = iVar10 >> 0x10;
    uVar3 = *(ushort *)(lVar11 + 0x620);
    *(ushort *)(param_2 + 0x1a) = uVar3;
    sVar20 = (short)((uint)iVar10 >> 0x10);
    *(short *)((longlong)param_2 + 0x6a) = sVar20;
    *(short *)(param_2 + 0x1b) = sVar2;
    sVar5 = (short)((((uint)uVar3 + (uint)uVar3 * 2) * 4) / 10);
    *(short *)((longlong)param_2 + 0x6e) = sVar5;
    if ((int)sVar5 < (int)sVar20 - (int)sVar2) {
      *(short *)((longlong)param_2 + 0x6e) = sVar20 - sVar2;
    }
    *(undefined2 *)(param_2 + 0x1d) = *(undefined2 *)(lVar11 + 0x600);
    *(undefined2 *)((longlong)param_2 + 0x76) = *(undefined2 *)(lVar11 + 0x602);
    if ((*(int *)(lVar11 + 0x5f0) != 0) &&
       (lVar13 = FUN_14031f780(lVar11), uVar22 = local_60, lVar13 != 0)) {
      uVar14 = FUN_1402f8160(local_60,lVar13);
      *(undefined8 *)(param_2 + 6) = uVar14;
    }
    if (*(longlong *)(param_2 + 6) == 0) {
      pcVar15 = (char *)FUN_14031f4c0(lVar11,local_68 & 0xffffffff);
      *(char **)(param_2 + 6) = pcVar15;
      if (pcVar15 != (char *)0x0) {
        uVar18 = 0;
        uVar8 = 0;
        if ('@' < *pcVar15) {
          do {
            if ((((('Z' < pcVar15[uVar18]) ||
                  (iVar10 = (int)uVar18, 0x19 < (byte)(pcVar15[iVar10 + 1] + 0xbfU))) ||
                 (0x19 < (byte)(pcVar15[iVar10 + 2] + 0xbfU))) ||
                ((0x19 < (byte)(pcVar15[iVar10 + 3] + 0xbfU) ||
                 (0x19 < (byte)(pcVar15[iVar10 + 4] + 0xbfU))))) ||
               ((0x19 < (byte)(pcVar15[iVar10 + 5] + 0xbfU) || (pcVar15[iVar10 + 6] != '+'))))
            break;
            uVar8 = iVar10 + 7;
            uVar18 = (ulonglong)uVar8;
          } while ('@' < pcVar15[uVar18]);
          if (uVar8 != 0) {
            sVar16 = strlen(pcVar15 + uVar8);
            FUN_1404210f0(pcVar15,pcVar15 + uVar8,sVar16 + 1);
          }
        }
      }
      if (*(longlong *)(param_2 + 6) != 0) goto LAB_14031c7c5;
      lVar13 = FUN_14031f780(lVar11,*(undefined4 *)(lVar11 + 0x688));
      lVar12 = lVar25;
      if (lVar13 == 0) goto LAB_14031c87e;
      uVar14 = FUN_1402f8160(uVar22,lVar13,local_res10);
      *(undefined8 *)(param_2 + 6) = uVar14;
LAB_14031c883:
      lVar12 = FUN_1402f8160(uVar22,"Regular",local_res10);
    }
    else {
LAB_14031c7c5:
      pcVar15 = (char *)FUN_14031f780(lVar11,*(undefined4 *)(lVar11 + 0x5ec));
      if (((pcVar15 != (char *)0x0) && (pcVar19 = *(char **)(param_2 + 6), pcVar19 != (char *)0x0))
         && (cVar17 = *pcVar15, cVar17 != '\0')) {
        do {
          cVar1 = *pcVar19;
          if (cVar17 == cVar1) {
            pcVar19 = pcVar19 + 1;
LAB_14031c800:
            pcVar15 = pcVar15 + 1;
          }
          else {
            if ((cVar17 == ' ') || (cVar17 == '-')) goto LAB_14031c800;
            if ((cVar1 != ' ') && (cVar1 != '-')) {
              lVar12 = lVar25;
              if (((cVar1 != '\0') || (*pcVar15 == '\0')) ||
                 (lVar12 = FUN_1402f8160(uVar22,pcVar15,local_res10), lVar12 == 0))
              goto LAB_14031c87e;
              FUN_140321c90(*(undefined8 *)(param_2 + 6),lVar12);
              goto LAB_14031c899;
            }
            pcVar19 = pcVar19 + 1;
          }
          cVar17 = *pcVar15;
        } while (cVar17 != '\0');
        goto LAB_14031c883;
      }
LAB_14031c87e:
      if (lVar12 == 0) goto LAB_14031c883;
    }
LAB_14031c899:
    *(longlong *)(param_2 + 8) = lVar12;
    uVar8 = local_70 | 4;
    if (*(char *)(lVar11 + 0x5f8) == '\0') {
      uVar8 = local_70;
    }
    param_2[2] = param_2[2] | uVar8;
    bVar26 = *(int *)(lVar11 + 0x5fc) != 0;
    uVar8 = (uint)bVar26;
    lVar12 = FUN_14031f780();
    if (lVar12 != 0) {
      lVar25 = 0;
      do {
        lVar13 = lVar25 + 1;
        if (*(char *)(lVar12 + lVar25) != (&DAT_14043cd50)[lVar25]) {
          lVar25 = 0;
          goto LAB_14031c900;
        }
        lVar25 = lVar13;
      } while (lVar13 != 5);
      goto LAB_14031c915;
    }
    goto LAB_14031c918;
  }
  goto LAB_14031c95b;
  while (lVar25 = lVar13, lVar13 != 6) {
LAB_14031c900:
    lVar13 = lVar25 + 1;
    if (*(char *)(lVar12 + lVar25) != "Black"[lVar25]) goto LAB_14031c918;
  }
LAB_14031c915:
  uVar8 = bVar26 | 2;
LAB_14031c918:
  if ((((uVar8 & 2) == 0) && (pcVar15 = *(char **)(param_2 + 8), pcVar15 != (char *)0x0)) &&
     ((iVar10 = strncmp(pcVar15,"Bold",4), iVar10 == 0 ||
      (iVar10 = strncmp(pcVar15,"Black",5), iVar10 == 0)))) {
    uVar8 = uVar8 | 2;
  }
  param_2[3] = uVar8;
LAB_14031c95b:
  if (*(int *)(lVar11 + 0x660) == 0xffff) {
    if (local_87 == '\0') {
      param_2[2] = param_2[2] | 0x200;
    }
    if (*(int *)(lVar11 + 0x660) == 0xffff) goto LAB_14031c98c;
  }
  if (local_88 != '\0') {
    param_2[2] = param_2[2] | 0x1000;
  }
LAB_14031c98c:
  iVar10 = param_2[0xe];
  if (0 < iVar10) {
    uVar18 = 0;
    do {
      lVar12 = *(longlong *)(*(longlong *)(param_2 + 0x10) + uVar18 * 8);
      sVar2 = *(short *)(lVar12 + 0xc);
      if (sVar2 == 3) {
        bVar26 = *(short *)(lVar12 + 0xe) == 1;
      }
      else {
        bVar26 = sVar2 == 0;
      }
      if (bVar26) goto LAB_14031ca4c;
      uVar8 = (int)uVar18 + 1;
      uVar18 = (ulonglong)uVar8;
    } while ((int)uVar8 < iVar10);
  }
  if ((local_88 == '\0') || (*(int *)(lVar11 + 0x660) == 0xffff)) {
    local_74 = 0x10003;
    local_78 = 0x756e6963;
    local_80 = param_2;
    local_84 = FUN_1402ef870(&DAT_14043d5c0,0,&local_80,0);
    if ((local_84 == 0) || (((local_84 & 0xff) == 0xa3 || ((local_84 & 0xff) == 7)))) {
      local_84 = 0;
      if ((*(longlong *)(param_2 + 0x22) == 0) && (iVar10 != param_2[0xe])) {
        *(undefined8 *)(param_2 + 0x22) =
             *(undefined8 *)(*(longlong *)(param_2 + 0x10) + (longlong)iVar10 * 8);
      }
LAB_14031ca4c:
      if (*(int *)(lVar11 + 200) != 0) {
        if (*(int *)(lVar11 + 0xc4) == 0) {
          local_74 = 7;
          local_78 = 0x41444f42;
        }
        else if (*(int *)(lVar11 + 0xc4) == 1) {
          local_74 = 0x10007;
          local_78 = 0x41444245;
        }
        else {
          local_78 = 0x41444243;
          local_74 = 0x20007;
        }
        local_80 = param_2;
        local_84 = FUN_1402ef870(&DAT_14043d570,0,&local_80,0);
      }
    }
  }
  return local_84;
}

