// Function: FUN_1400bf890
// Addr: 1400bf890
// Size: 666 bytes


char * FUN_1400bf890(int *param_1,undefined4 *param_2,longlong *param_3)

{
  byte bVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  byte *pbVar12;
  
  if (param_1 == (int *)0x0) {
    return "#base: bad receiver";
  }
  if (*param_1 != 0x3ccb6c71) {
    pcVar2 = "#base: initialize not called";
    if (*param_1 == 0x75ae3d2) {
      pcVar2 = "#base: disabled by previous error";
    }
    return pcVar2;
  }
  if (param_3 == (longlong *)0x0) {
    *param_1 = 0x75ae3d2;
    return "#base: bad argument";
  }
  if (1 < (uint)param_1[1]) {
    *param_1 = 0x75ae3d2;
    return "#base: interleaved coroutine calls";
  }
  pcVar2 = (char *)0x0;
  uVar6 = 0;
  param_1[1] = 0;
  if ((param_1[0x16] == 0) || (param_1[0x16] == 1)) {
    pbVar9 = (byte *)*param_3;
    pbVar10 = (byte *)pcVar2;
    pbVar11 = (byte *)pcVar2;
    pbVar12 = (byte *)pcVar2;
    if (pbVar9 != (byte *)0x0) {
      pbVar10 = pbVar9 + param_3[3];
      pbVar11 = pbVar9 + param_3[2];
      pbVar12 = pbVar9;
    }
    iVar4 = param_1[0x17];
    iVar7 = 1;
    if (iVar4 == 0) {
      pbVar9 = (byte *)pcVar2;
      uVar5 = uVar6;
      if ((char)param_1[0xc] == '\0') goto LAB_1400bf9c1;
      pcVar2 = "#base: bad call sequence";
      goto LAB_1400bfaa2;
    }
    uVar5 = param_1[0x1c];
    uVar8 = param_1[0x1d];
    pbVar9 = (byte *)(ulonglong)uVar8;
    if (iVar4 == 1) {
      while (uVar8 = (uint)pbVar9, pbVar10 != pbVar11) {
        bVar1 = *pbVar10;
        pbVar10 = pbVar10 + 1;
        if (bVar1 != 0) goto LAB_1400bfa16;
        uVar5 = uVar5 + 1;
LAB_1400bf9c1:
        iVar4 = iVar7;
        if (1 < uVar5) {
          uVar5 = 0;
          goto LAB_1400bf9e0;
        }
      }
LAB_1400bfa36:
      uVar6 = 1;
      pcVar2 = "$base: short read";
    }
    else if (iVar4 == 2) {
      while (uVar8 = (uint)pbVar9, pbVar10 != pbVar11) {
        bVar1 = *pbVar10;
        pbVar10 = pbVar10 + 1;
        uVar8 = uVar8 | bVar1 & 0x7f;
        if ((char)bVar1 < '\0') {
          pbVar9 = (byte *)((ulonglong)uVar8 << 7);
          if ((byte *)0xffffffff < (byte *)((ulonglong)uVar8 << 7)) goto LAB_1400bfa16;
        }
        else {
          if (uVar5 == 0) {
            param_1[10] = uVar8;
            uVar5 = 1;
          }
          else {
            param_1[0xb] = uVar8;
            uVar5 = uVar5 + 1;
          }
LAB_1400bf9e0:
          pbVar9 = (byte *)pcVar2;
          if (1 < uVar5) {
            pbVar9 = pbVar10 + (param_3[4] - (longlong)pbVar12);
            if (pbVar9 < (byte *)param_3[4]) {
              pbVar9 = (byte *)0xffffffffffffffff;
            }
            *(byte **)(param_1 + 0xe) = pbVar9;
            if (param_2 != (undefined4 *)0x0) {
              iVar4 = param_1[0xb];
              iVar3 = param_1[10];
              *param_2 = 0x83040008;
              param_2[1] = 0;
              param_2[2] = iVar3;
              param_2[3] = iVar4;
              *(byte **)(param_2 + 4) = pbVar9;
              *(undefined1 *)(param_2 + 6) = 1;
            }
            *(undefined1 *)(param_1 + 0xc) = 0x20;
            param_1[0x17] = 0;
            goto LAB_1400bfaa2;
          }
        }
        iVar4 = 2;
      }
      goto LAB_1400bfa36;
    }
    param_1[0x1c] = uVar5;
    param_1[0x1d] = uVar8;
    iVar3 = 0;
    if (uVar6 != 0) {
      iVar3 = iVar4;
    }
    param_1[0x17] = iVar3;
    goto LAB_1400bfaa2;
  }
  param_1[0x16] = 0;
LAB_1400bfb01:
  iVar7 = 0;
LAB_1400bfb03:
  param_1[1] = iVar7;
  if ((byte *)pcVar2 == (byte *)0x0) {
    return (char *)(byte *)0x0;
  }
LAB_1400bfb0c:
  if (*pcVar2 != 0x23) {
    return (char *)(byte *)pcVar2;
  }
LAB_1400bfb11:
  *param_1 = 0x75ae3d2;
  return (char *)(byte *)pcVar2;
LAB_1400bfa16:
  pcVar2 = "#wbmp: bad header";
LAB_1400bfaa2:
  if (*param_3 != 0) {
    param_3[3] = (longlong)pbVar10 - *param_3;
  }
  if ((pcVar2 == "$base: short read") && ((char)param_3[5] != '\0')) {
    pcVar2 = "#wbmp: truncated input";
    goto LAB_1400bfb11;
  }
  if ((byte *)pcVar2 == (byte *)0x0) {
    param_1[0x16] = 0;
    return (char *)(byte *)0x0;
  }
  if (*pcVar2 == 0x24) {
    param_1[0x16] = 1;
    if (*pcVar2 != 0x24) goto LAB_1400bfb01;
    goto LAB_1400bfb03;
  }
  goto LAB_1400bfb0c;
}

