// Function: FUN_140321f10
// Addr: 140321f10
// Size: 661 bytes


ulonglong FUN_140321f10(undefined8 param_1,undefined4 *param_2,int param_3)

{
  char cVar1;
  char cVar2;
  short sVar3;
  longlong lVar4;
  uint uVar5;
  short sVar6;
  ushort uVar7;
  longlong lVar8;
  undefined8 uVar9;
  ulonglong uVar10;
  char *pcVar11;
  longlong lVar12;
  longlong lVar13;
  char *pcVar14;
  short sVar15;
  
  *param_2 = 1;
  if (*(longlong *)(param_2 + 0x38) == 0) {
    lVar8 = FUN_1402f04b0(*(undefined8 *)(*(longlong *)(param_2 + 0x24) + 8),"psaux");
    if (lVar8 == 0) {
      return 0xb;
    }
    *(longlong *)(param_2 + 0x38) = lVar8;
  }
  if (*(longlong *)(param_2 + 0x76) == 0) {
    uVar9 = FUN_1402f04b0(*(undefined8 *)(*(longlong *)(param_2 + 0x24) + 8),"pshinter");
    *(undefined8 *)(param_2 + 0x76) = uVar9;
  }
  uVar10 = FUN_1402f5c50(param_1,0);
  if ((int)uVar10 != 0) {
    return uVar10;
  }
  uVar10 = FUN_140322cc0(param_2,param_3);
  if ((int)uVar10 != 0) {
    return uVar10;
  }
  if (param_3 < 0) {
    return uVar10;
  }
  if ((short)param_3 != 0) {
    return 6;
  }
  lVar8 = 0;
  param_2[2] = param_2[2] | 0x811;
  param_2[4] = param_2[0x6b];
  param_2[0xe] = 0;
  param_2[1] = 0;
  uVar5 = param_2[2];
  if (*(char *)(param_2 + 0x4f) != '\0') {
    uVar5 = param_2[2] | 4;
  }
  param_2[2] = uVar5 | 0x1000;
  pcVar14 = *(char **)(param_2 + 0x4a);
  *(char **)(param_2 + 6) = pcVar14;
  *(char **)(param_2 + 8) = "Regular";
  if (pcVar14 == (char *)0x0) {
    if (*(longlong *)(param_2 + 0x3a) != 0) {
      *(longlong *)(param_2 + 6) = *(longlong *)(param_2 + 0x3a);
    }
  }
  else {
    pcVar11 = *(char **)(param_2 + 0x48);
    if (pcVar11 != (char *)0x0) {
      cVar1 = *pcVar11;
      while (cVar1 != '\0') {
        cVar2 = *pcVar14;
        if (cVar1 == cVar2) {
          pcVar14 = pcVar14 + 1;
LAB_14032203c:
          pcVar11 = pcVar11 + 1;
        }
        else {
          if ((cVar1 == ' ') || (cVar1 == '-')) goto LAB_14032203c;
          if ((cVar2 != ' ') && (cVar2 != '-')) {
            if (cVar2 == '\0') {
              *(char **)(param_2 + 8) = pcVar11;
            }
            break;
          }
          pcVar14 = pcVar14 + 1;
        }
        cVar1 = *pcVar11;
      }
    }
  }
  param_2[3] = 0;
  if (param_2[0x4e] != 0) {
    param_2[3] = 1;
  }
  lVar4 = *(longlong *)(param_2 + 0x4c);
  lVar13 = lVar8;
  if (lVar4 == 0) goto LAB_1403220ed;
  do {
    lVar12 = lVar13 + 1;
    if (*(char *)(lVar4 + lVar13) != (&DAT_14043cd50)[lVar13]) goto LAB_1403220d1;
    lVar13 = lVar12;
  } while (lVar12 != 5);
  goto LAB_1403220e5;
  while (lVar8 = lVar13, lVar13 != 6) {
LAB_1403220d1:
    lVar13 = lVar8 + 1;
    if (*(char *)(lVar4 + lVar8) != "Black"[lVar8]) goto LAB_1403220ed;
  }
LAB_1403220e5:
  param_2[3] = param_2[0x4e] != 0 | 2;
LAB_1403220ed:
  param_2[10] = 0;
  *(undefined8 *)(param_2 + 0xc) = 0;
  param_2[0x16] = (int)*(short *)((longlong)param_2 + 0x14a);
  sVar3 = *(short *)((longlong)param_2 + 0x14e);
  param_2[0x17] = (int)sVar3;
  param_2[0x18] = param_2[0x54] + 0xffff >> 0x10;
  uVar7 = *(ushort *)(param_2 + 0x1a);
  param_2[0x19] = param_2[0x55] + 0xffff >> 0x10;
  if (uVar7 == 0) {
    uVar7 = 1000;
    *(undefined2 *)(param_2 + 0x1a) = 1000;
  }
  sVar15 = (short)((uint)(param_2[0x55] + 0xffff) >> 0x10);
  *(short *)((longlong)param_2 + 0x6a) = sVar15;
  *(short *)(param_2 + 0x1b) = sVar3;
  sVar6 = (short)((((uint)uVar7 + (uint)uVar7 * 2) * 4) / 10);
  *(short *)((longlong)param_2 + 0x6e) = sVar6;
  if ((int)sVar6 < (int)sVar15 - (int)sVar3) {
    *(short *)((longlong)param_2 + 0x6e) = sVar15 - sVar3;
  }
  *(undefined2 *)(param_2 + 0x1d) = *(undefined2 *)((longlong)param_2 + 0x13e);
  *(undefined2 *)((longlong)param_2 + 0x76) = *(undefined2 *)(param_2 + 0x50);
  return uVar10 & 0xffffffff;
}

