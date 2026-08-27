// Function: FUN_1402fb780
// Addr: 1402fb780
// Size: 1645 bytes


ulonglong FUN_1402fb780(uint param_1,longlong param_2,longlong param_3,longlong param_4)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  undefined4 uVar4;
  ulonglong uVar5;
  undefined4 *puVar6;
  ushort *puVar7;
  char *pcVar8;
  longlong lVar9;
  longlong lVar10;
  ulonglong uVar11;
  longlong lVar12;
  uint uVar13;
  ulonglong uVar14;
  longlong lVar15;
  ushort *puVar16;
  ulonglong uVar17;
  byte bVar18;
  byte bVar19;
  longlong lVar20;
  byte local_58;
  byte local_54;
  byte local_50;
  uint local_4c;
  ulonglong local_48;
  
  uVar5 = FUN_1402ffeb0(param_2,param_3);
  uVar11 = uVar5 & 0xffffffff;
  if ((int)uVar5 != 0) {
    return uVar5;
  }
  if ((*(byte *)(param_2 + 0x1178) & 1) == 0) {
    uVar4 = *(undefined4 *)(param_4 + 0x4c);
    uVar2 = FUN_140301ff0(param_2,0);
    if (uVar2 == 0) {
      FUN_140302930(param_2,uVar4,param_4 + 0x50,0);
      uVar2 = FUN_140301b80(param_2,0);
    }
    uVar11 = (ulonglong)uVar2;
    if (uVar2 != 0) {
      return uVar11;
    }
  }
  local_48 = 0;
  uVar5 = 0;
  if ((*(byte *)(param_2 + 0x1178) & 2) != 0) goto LAB_1402fbc44;
  bVar19 = 0;
  bVar1 = false;
  bVar18 = 1;
  local_58 = 0;
  local_54 = 0;
  local_50 = 0;
  puVar6 = (undefined4 *)FUN_1402f7790(param_1,*(undefined8 *)(param_4 + 0x38));
  if ((puVar6 != (undefined4 *)0x0) && (uVar2 = FUN_1402fcae0(*puVar6), uVar2 != 0)) {
    bVar1 = true;
    local_58 = (byte)(uVar2 >> 9) & 1;
    local_54 = (byte)(uVar2 >> 10) & 1;
    local_50 = (byte)(uVar2 >> 0xb) & 1;
    bVar19 = (byte)(uVar2 >> 8) & 1;
    bVar18 = ~(byte)(uVar2 >> 0xc) & 1;
    if (((uVar2 >> 4 & 1) != 0) ||
       ((((uVar2 >> 5 & 1) != 0 || ((uVar2 >> 6 & 1) != 0)) || ((uVar2 >> 7 & 1) != 0)))) {
      FUN_1402feb70(param_2);
      if ((uVar2 >> 6 & 1) != 0) {
        iVar3 = FUN_1402ff2f0(param_2);
        FUN_1403040c0(param_2,iVar3);
        FUN_1403009d0(param_2,iVar3);
        FUN_1403052e0(param_2,*(undefined4 *)(*(longlong *)(param_2 + 0x38) + (longlong)iVar3 * 4));
      }
      if ((uVar2 >> 7 & 1) != 0) {
        iVar3 = FUN_1402ff380(param_2);
        FUN_140303f10(param_2,iVar3);
        FUN_140300940(param_2,iVar3);
        FUN_140305280(param_2,*(undefined4 *)(*(longlong *)(param_2 + 0x40) + (longlong)iVar3 * 4));
      }
      if ((uVar2 >> 4 & 1) != 0) {
        uVar4 = FUN_1402ff210(param_2);
        FUN_1403040c0(param_2,uVar4);
        FUN_1403009d0(param_2,uVar4);
      }
      if ((uVar2 >> 5 & 1) != 0) {
        uVar4 = FUN_1402ff280(param_2);
        FUN_140303f10(param_2,uVar4);
        FUN_140300940(param_2,uVar4);
      }
    }
  }
  uVar4 = *(undefined4 *)(param_4 + 0x250);
  local_4c = FUN_140301ff0(param_2,1);
  if (local_4c == 0) {
    FUN_140302930(param_2,uVar4,param_4 + 0x254,1);
    local_4c = FUN_140301b80(param_2,1);
  }
  if (bVar1) {
    lVar20 = 0;
    lVar15 = *(longlong *)(param_2 + 0x1180) + 0x248;
    uVar11 = 0;
    uVar2 = *(uint *)(*(longlong *)(param_2 + 0x1180) + 800);
    if (uVar2 != 0) {
      do {
        if (((byte)*(undefined4 *)(lVar15 + (uVar11 + 7) * 0x24) & 3) == 3) break;
        uVar13 = (int)uVar11 + 1;
        uVar11 = (ulonglong)uVar13;
      } while (uVar13 < uVar2);
    }
    if ((uint)uVar11 < uVar2) {
      lVar20 = lVar15 + uVar11 * 0x24 + 0xdc;
    }
    uVar11 = 0;
    if (uVar2 != 0) {
      do {
        if (((byte)*(undefined4 *)(lVar15 + (uVar11 + 7) * 0x24) & 0x21) == 0x21)
        goto LAB_1402fba76;
        uVar13 = (int)uVar11 + 1;
        uVar11 = (ulonglong)uVar13;
      } while (uVar13 < uVar2);
    }
    lVar10 = 0;
    if ((uint)uVar11 < uVar2) {
LAB_1402fba76:
      lVar10 = lVar15 + uVar11 * 0x24 + 0xdc;
    }
    uVar11 = 0;
    if (uVar2 != 0) {
      do {
        if (((byte)*(undefined4 *)(lVar15 + (uVar11 + 7) * 0x24) & 0x11) == 0x11)
        goto LAB_1402fbab6;
        uVar13 = (int)uVar11 + 1;
        uVar11 = (ulonglong)uVar13;
      } while (uVar13 < uVar2);
    }
    lVar12 = 0;
    if ((uint)uVar11 < uVar2) {
LAB_1402fbab6:
      lVar12 = lVar15 + uVar11 * 0x24 + 0xdc;
    }
    uVar11 = 0;
    if (uVar2 != 0) {
      do {
        if (((byte)*(undefined4 *)(lVar15 + (uVar11 + 7) * 0x24) & 0x41) == 0x41)
        goto LAB_1402fbaf6;
        uVar13 = (int)uVar11 + 1;
        uVar11 = (ulonglong)uVar13;
      } while (uVar13 < uVar2);
    }
    lVar9 = 0;
    if ((uint)uVar11 < uVar2) {
LAB_1402fbaf6:
      lVar9 = lVar15 + uVar11 * 0x24 + 0xdc;
    }
    if (bVar18 == 0) {
LAB_1402fbb91:
      if ((lVar20 != 0) && (lVar10 != 0)) goto LAB_1402fbb9b;
    }
    else {
      if ((lVar12 != 0) && (lVar9 != 0)) {
        iVar3 = (*(int *)(lVar12 + 0x10) - *(int *)(lVar9 + 0x10)) * 2;
        local_48 = (ulonglong)
                   (uint)((int)(((longlong)iVar3 / 3 + ((longlong)iVar3 >> 0x3f) & 0xffffffffU) >>
                               0x1f) + iVar3 / 3 + (iVar3 >> 0x1f));
        goto LAB_1402fbb91;
      }
      if ((lVar20 == 0) || (lVar10 == 0)) {
        lVar15 = ((ulonglong)(uint)(*(int *)(param_4 + 0x40) << 2) / 10) *
                 (longlong)*(int *)(param_4 + 0x14);
        local_48 = (lVar15 >> 0x3f) + 0x8000 + lVar15 >> 0x10;
        goto LAB_1402fbb91;
      }
      local_48 = (ulonglong)(uint)((*(int *)(lVar20 + 0x10) - *(int *)(lVar10 + 0x10)) / 2);
LAB_1402fbb9b:
      if (bVar19 != 0) {
        FUN_140302b90(param_2,lVar20,lVar10);
      }
      if (local_58 != 0) {
        FUN_140302b30(param_2,lVar20,lVar10);
      }
    }
    if ((lVar12 != 0) && (lVar9 != 0)) {
      if (local_54 != 0) {
        FUN_140302b90(param_2,lVar12,lVar9);
      }
      if (local_50 != 0) {
        FUN_140302b30(param_2,lVar12,lVar9);
      }
    }
  }
  if (local_4c != 0) {
    return (ulonglong)local_4c;
  }
  uVar11 = 0;
  uVar5 = local_48;
  if ((*(ushort *)(*(longlong *)(*(longlong *)(param_4 + 0x30) + 0x10) + (ulonglong)param_1 * 2) &
      0x4000) == 0) {
    FUN_140301930(param_2,param_4);
  }
LAB_1402fbc44:
  iVar3 = 0;
LAB_1402fbc46:
  do {
    if (iVar3 == 0) {
      if ((*(byte *)(param_2 + 0x1178) & 1) != 0) {
        iVar3 = 1;
        goto LAB_1402fbc46;
      }
LAB_1402fbc6d:
      FUN_140300d40(param_2,iVar3);
      uVar14 = *(ulonglong *)((longlong)iVar3 * 0x898 + 0x50 + param_2);
      if (uVar14 == 0) {
        uVar17 = 0;
      }
      else {
        uVar17 = uVar14 + (ulonglong)*(uint *)((longlong)iVar3 * 0x898 + 0x48 + param_2) * 0x48;
      }
      if (iVar3 == 0) {
        for (; uVar14 < uVar17; uVar14 = uVar14 + 0x48) {
          lVar20 = *(longlong *)(uVar14 + 0x10);
          if (lVar20 != 0) {
            puVar7 = *(ushort **)(uVar14 + 0x38);
            puVar16 = *(ushort **)(uVar14 + 0x40);
            uVar4 = *(undefined4 *)(lVar20 + 8);
            *puVar7 = *puVar7 | 4;
            *(undefined4 *)(puVar7 + 8) = uVar4;
            while (puVar7 != puVar16) {
              puVar7 = *(ushort **)(puVar7 + 0x10);
              *(undefined4 *)(puVar7 + 8) = *(undefined4 *)(lVar20 + 8);
              *puVar7 = *puVar7 | 4;
            }
          }
        }
      }
      else {
        for (; uVar14 < uVar17; uVar14 = uVar14 + 0x48) {
          lVar20 = *(longlong *)(uVar14 + 0x10);
          if (lVar20 != 0) {
            puVar7 = *(ushort **)(uVar14 + 0x38);
            puVar16 = *(ushort **)(uVar14 + 0x40);
            uVar4 = *(undefined4 *)(lVar20 + 8);
            *puVar7 = *puVar7 | 8;
            *(undefined4 *)(puVar7 + 10) = uVar4;
            while (puVar7 != puVar16) {
              puVar7 = *(ushort **)(puVar7 + 0x10);
              *(undefined4 *)(puVar7 + 10) = *(undefined4 *)(lVar20 + 8);
              *puVar7 = *puVar7 | 8;
            }
          }
        }
      }
      FUN_1402ff410(param_2,iVar3);
      FUN_1402ff660(param_2,iVar3);
      FUN_1402ff8b0(param_2,iVar3,param_1,uVar5 & 0xffffffff,*(undefined8 *)(param_4 + 0x38));
    }
    else if ((iVar3 == 1) && ((*(byte *)(param_2 + 0x1178) & 2) == 0)) goto LAB_1402fbc6d;
    iVar3 = iVar3 + 1;
    if (1 < iVar3) {
      puVar7 = *(ushort **)(param_2 + 0x20);
      puVar6 = *(undefined4 **)(param_3 + 8);
      pcVar8 = *(char **)(param_3 + 0x10);
      puVar16 = puVar7 + (longlong)*(int *)(param_2 + 0x1c) * 0x18;
      for (; puVar7 < puVar16; puVar7 = puVar7 + 0x18) {
        *puVar6 = *(undefined4 *)(puVar7 + 8);
        puVar6[1] = *(undefined4 *)(puVar7 + 10);
        if ((*puVar7 & 1) == 0) {
          *pcVar8 = ((*puVar7 & 2) != 0) + '\x01';
        }
        else {
          *pcVar8 = '\0';
        }
        puVar6 = puVar6 + 2;
        pcVar8 = pcVar8 + 1;
      }
      return uVar11;
    }
  } while( true );
}

