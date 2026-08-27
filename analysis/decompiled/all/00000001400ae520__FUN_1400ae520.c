// Function: FUN_1400ae520
// Addr: 1400ae520
// Size: 798 bytes


char * FUN_1400ae520(int *param_1,longlong param_2,undefined8 *param_3,longlong *param_4)

{
  byte bVar1;
  byte *pbVar2;
  ulonglong uVar3;
  char *pcVar4;
  int iVar5;
  byte *pbVar6;
  byte *pbVar7;
  ulonglong uVar8;
  byte *pbVar9;
  byte *pbVar10;
  int iVar11;
  byte *pbVar12;
  int iVar13;
  byte *pbVar14;
  byte *pbVar15;
  
  if (param_1 == (int *)0x0) {
    return "#base: bad receiver";
  }
  if (*param_1 != 0x3ccb6c71) {
    pcVar4 = "#base: initialize not called";
    if (*param_1 == 0x75ae3d2) {
      pcVar4 = "#base: disabled by previous error";
    }
    return pcVar4;
  }
  if ((param_2 == 0) || (param_4 == (longlong *)0x0)) {
    *param_1 = 0x75ae3d2;
    return "#base: bad argument";
  }
  if ((param_1[1] & 0xfffffffdU) != 0) {
    *param_1 = 0x75ae3d2;
    return "#base: interleaved coroutine calls";
  }
  pbVar15 = (byte *)0x0;
  param_1[1] = 0;
  pcVar4 = (char *)pbVar15;
  if ((param_1[0x34] == 0) || (param_1[0x34] == 1)) {
    pbVar12 = (byte *)*param_4;
    pbVar9 = pbVar15;
    pbVar7 = pbVar15;
    pbVar14 = pbVar15;
    if (pbVar12 != (byte *)0x0) {
      pbVar9 = pbVar12;
      pbVar7 = pbVar12 + param_4[2];
      pbVar14 = pbVar12 + param_4[3];
    }
    iVar11 = param_1[0x35];
    pbVar12 = (byte *)0x2;
    if (iVar11 == 0) {
      if ((*(byte *)(param_1 + 0xc) & 0x10) == 0) {
        pcVar4 = "#base: bad call sequence";
      }
      else {
        if (param_1[0xd] != 0) goto LAB_1400ae657;
        pcVar4 = "#base: no more information";
      }
    }
    else {
      if (((iVar11 == 1) || (iVar11 == 2)) || (iVar13 = 0, iVar11 == 3)) {
LAB_1400ae657:
        pbVar10 = (byte *)param_4[4];
        pbVar2 = *(byte **)(param_1 + 0xe);
        pbVar6 = pbVar14 + ((longlong)pbVar10 - (longlong)pbVar9);
        if (pbVar6 < pbVar10) {
          pbVar6 = (byte *)0xffffffffffffffff;
        }
        if (pbVar6 == pbVar2) {
          if (pbVar7 == pbVar14) {
            if (param_3 != (undefined8 *)0x0) {
              *param_3 = 0;
              param_3[1] = 0;
              param_3[2] = 0;
              param_3[3] = 0;
            }
            pcVar4 = "$base: short read";
            iVar11 = 2;
          }
          else {
            bVar1 = *pbVar14;
            if (bVar1 == 0) {
              if (param_3 != (undefined8 *)0x0) {
                iVar11 = param_1[0xd];
                *(undefined4 *)param_3 = 3;
                *(int *)((longlong)param_3 + 4) = iVar11;
                param_3[1] = 0;
                param_3[2] = pbVar2;
                param_3[3] = pbVar2;
              }
              *(byte *)(param_1 + 0xc) = *(byte *)(param_1 + 0xc) & 0xef;
              param_1[0xd] = 0;
              param_1[0xe] = 0;
              param_1[0xf] = 0;
              param_1[0x35] = 0;
              pbVar14 = pbVar14 + 1;
              goto LAB_1400ae795;
            }
            iVar13 = param_1[0xd];
            if (iVar13 != 0x584d5020) {
              pbVar14 = pbVar14 + 1;
            }
            pbVar7 = pbVar10 + ((longlong)pbVar14 - (longlong)pbVar9);
            if (pbVar7 < pbVar10) {
              pbVar7 = (byte *)0xffffffffffffffff;
            }
            uVar8 = (ulonglong)bVar1 + 1;
            if (iVar13 != 0x584d5020) {
              uVar8 = (ulonglong)bVar1;
            }
            iVar11 = 3;
            pbVar10 = pbVar7 + uVar8;
            if (pbVar10 < pbVar7) {
              pbVar10 = (byte *)0xffffffffffffffff;
            }
            *(byte **)(param_1 + 0xe) = pbVar10;
            if (param_3 != (undefined8 *)0x0) {
              uVar3 = param_4[4];
              *(undefined4 *)param_3 = 3;
              *(int *)((longlong)param_3 + 4) = iVar13;
              param_3[1] = 0;
              uVar8 = ((longlong)pbVar14 - (longlong)pbVar9) + uVar3;
              param_3[3] = pbVar10;
              if (uVar8 < uVar3) {
                uVar8 = 0xffffffffffffffff;
              }
              param_3[2] = uVar8;
            }
            pcVar4 = "$base: even more information";
          }
        }
        else {
          if (param_3 != (undefined8 *)0x0) {
            *param_3 = 2;
            param_3[1] = pbVar2;
            param_3[2] = 0;
            param_3[3] = 0;
          }
          pcVar4 = "$base: mispositioned read";
          iVar11 = 1;
        }
        iVar13 = 1;
      }
      iVar5 = 0;
      if (iVar13 != 0) {
        iVar5 = iVar11;
      }
      param_1[0x35] = iVar5;
    }
LAB_1400ae795:
    if (*param_4 != 0) {
      param_4[3] = (longlong)pbVar14 - *param_4;
    }
    if ((pcVar4 == "$base: short read") && ((char)param_4[5] != '\0')) {
      pcVar4 = "#gif: truncated input";
      goto LAB_1400ae816;
    }
    if ((byte *)pcVar4 == (byte *)0x0) {
      param_1[0x34] = 0;
      return (char *)(byte *)0x0;
    }
    if (*pcVar4 == 0x24) {
      param_1[0x34] = 1;
      if (*pcVar4 != 0x24) goto LAB_1400ae805;
      goto LAB_1400ae808;
    }
  }
  else {
    param_1[0x34] = 0;
LAB_1400ae805:
    pbVar12 = pbVar15;
LAB_1400ae808:
    param_1[1] = (int)pbVar12;
    if ((byte *)pcVar4 == (byte *)0x0) {
      return (char *)(byte *)0x0;
    }
  }
  if (*pcVar4 != 0x23) {
    return (char *)(byte *)pcVar4;
  }
LAB_1400ae816:
  *param_1 = 0x75ae3d2;
  return (char *)(byte *)pcVar4;
}

