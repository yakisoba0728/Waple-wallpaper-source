// Function: FUN_1400bfb30
// Addr: 1400bfb30
// Size: 951 bytes


char * FUN_1400bfb30(int *param_1,undefined8 *param_2,longlong *param_3)

{
  byte bVar1;
  longlong lVar2;
  undefined8 uVar3;
  int iVar4;
  char *pcVar5;
  int iVar6;
  int iVar7;
  byte *pbVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  byte *pbVar12;
  byte *pbVar13;
  byte *pbVar14;
  uint uVar15;
  int iVar16;
  
  if (param_1 == (int *)0x0) {
    return "#base: bad receiver";
  }
  if (*param_1 != 0x3ccb6c71) {
    pcVar5 = "#base: initialize not called";
    if (*param_1 == 0x75ae3d2) {
      pcVar5 = "#base: disabled by previous error";
    }
    return pcVar5;
  }
  if (param_3 == (longlong *)0x0) {
    *param_1 = 0x75ae3d2;
    return "#base: bad argument";
  }
  if ((param_1[1] & 0xfffffffdU) != 0) {
    *param_1 = 0x75ae3d2;
    return "#base: interleaved coroutine calls";
  }
  pcVar5 = (char *)0x0;
  uVar15 = 0;
  param_1[1] = 0;
  iVar6 = 0;
  if ((param_1[0x18] == 0) || (param_1[0x18] == 1)) {
    pbVar8 = (byte *)*param_3;
    pbVar12 = (byte *)pcVar5;
    pbVar13 = (byte *)pcVar5;
    if (pbVar8 != (byte *)0x0) {
      pbVar12 = pbVar8 + param_3[3];
      pbVar13 = pbVar8;
    }
    iVar16 = param_1[0x19];
    iVar10 = 2;
    if (iVar16 == 0) {
      bVar1 = *(byte *)(param_1 + 0xc);
      if (bVar1 == 0x20) {
LAB_1400bfe20:
        if (param_2 != (undefined8 *)0x0) {
          uVar3 = *(undefined8 *)(param_1 + 0xe);
          iVar16 = param_1[10];
          iVar7 = param_1[0xb];
          *param_2 = 0;
          *(int *)(param_2 + 1) = iVar16;
          *(int *)((longlong)param_2 + 0xc) = iVar7;
          param_2[2] = 0;
          param_2[3] = 0;
          param_2[4] = uVar3;
          *(undefined2 *)(param_2 + 5) = 0x100;
          *(undefined1 *)((longlong)param_2 + 0x2a) = 0;
          *(undefined4 *)((longlong)param_2 + 0x2c) = 0xff000000;
        }
        *(undefined1 *)(param_1 + 0xc) = 0x40;
      }
      else {
        if (bVar1 < 0x20) {
          iVar16 = 1;
          param_3[3] = (longlong)pbVar12 - (longlong)pbVar8;
          goto LAB_1400bfc49;
        }
        if (bVar1 == 0x28) {
          pbVar8 = pbVar12 + (param_3[4] - (longlong)pbVar13);
          if (pbVar8 < (byte *)param_3[4]) {
            pbVar8 = (byte *)0xffffffffffffffff;
          }
          if (*(byte **)(param_1 + 0xe) == pbVar8) goto LAB_1400bfe20;
          pcVar5 = "#base: bad restart";
          goto LAB_1400bfe64;
        }
        pcVar5 = "@base: end of data";
        if (bVar1 == 0x40) {
          *(undefined1 *)(param_1 + 0xc) = 0x60;
        }
      }
      param_1[0x19] = 0;
    }
    else {
      if (iVar16 == 1) {
LAB_1400bfc49:
        pbVar12 = (byte *)pcVar5;
        pbVar13 = (byte *)pcVar5;
        pbVar14 = (byte *)pcVar5;
        if (pbVar8 != (byte *)0x0) {
          pbVar13 = pbVar8 + param_3[3];
          pbVar14 = pbVar8 + param_3[2];
          pbVar12 = pbVar8;
        }
        iVar7 = param_1[0x17];
        if (iVar7 == 0) {
          pbVar8 = (byte *)pcVar5;
          uVar9 = uVar15;
          if ((char)param_1[0xc] == '\0') goto LAB_1400bfcc1;
          pcVar5 = "#base: bad call sequence";
        }
        else {
          uVar9 = param_1[0x1c];
          uVar11 = param_1[0x1d];
          pbVar8 = (byte *)(ulonglong)uVar11;
          if (iVar7 == 1) {
            while (uVar11 = (uint)pbVar8, pbVar13 != pbVar14) {
              bVar1 = *pbVar13;
              pbVar13 = pbVar13 + 1;
              if (bVar1 != 0) goto LAB_1400bfd0b;
              uVar9 = uVar9 + 1;
LAB_1400bfcc1:
              if (1 < uVar9) {
                uVar9 = 0;
                goto LAB_1400bfce1;
              }
              iVar7 = 1;
            }
LAB_1400bfd2b:
            uVar15 = 1;
            pcVar5 = "$base: short read";
          }
          else if (iVar7 == 2) {
            do {
              while( true ) {
                uVar11 = (uint)pbVar8;
                if (pbVar13 == pbVar14) goto LAB_1400bfd2b;
                bVar1 = *pbVar13;
                pbVar13 = pbVar13 + 1;
                uVar11 = uVar11 | bVar1 & 0x7f;
                if (-1 < (char)bVar1) break;
                pbVar8 = (byte *)((ulonglong)uVar11 << 7);
                iVar7 = iVar10;
                if ((byte *)0xffffffff < (byte *)((ulonglong)uVar11 << 7)) goto LAB_1400bfd0b;
              }
              if (uVar9 == 0) {
                param_1[10] = uVar11;
                uVar9 = 1;
              }
              else {
                param_1[0xb] = uVar11;
                uVar9 = uVar9 + 1;
              }
LAB_1400bfce1:
              pbVar8 = (byte *)pcVar5;
              iVar7 = iVar10;
            } while (uVar9 < 2);
            pbVar8 = (byte *)param_3[4];
            *(undefined1 *)(param_1 + 0xc) = 0x20;
            pbVar12 = pbVar13 + ((longlong)pbVar8 - (longlong)pbVar12);
            if (pbVar12 < pbVar8) {
              pbVar12 = (byte *)0xffffffffffffffff;
            }
            *(byte **)(param_1 + 0xe) = pbVar12;
            param_1[0x17] = 0;
            goto LAB_1400bfd87;
          }
          param_1[0x1c] = uVar9;
          param_1[0x1d] = uVar11;
          iVar4 = iVar6;
          if (uVar15 != 0) {
            iVar4 = iVar7;
          }
          param_1[0x17] = iVar4;
        }
LAB_1400bfd87:
        lVar2 = *param_3;
        if (lVar2 != 0) {
          param_3[3] = (longlong)pbVar13 - lVar2;
        }
        pbVar12 = (byte *)(param_3[3] + lVar2);
        if ((byte *)pcVar5 == (byte *)0x0) goto LAB_1400bfe20;
        iVar7 = 1;
        if (*pcVar5 != 0x24) goto LAB_1400bfdbb;
      }
      else {
LAB_1400bfdbb:
        iVar7 = iVar6;
      }
      iVar4 = iVar6;
      if (iVar7 != 0) {
        iVar4 = iVar16;
      }
      param_1[0x19] = iVar4;
    }
LAB_1400bfe64:
    if (*param_3 != 0) {
      param_3[3] = (longlong)pbVar12 - *param_3;
    }
    if ((pcVar5 == "$base: short read") && ((char)param_3[5] != '\0')) {
      pcVar5 = "#wbmp: truncated input";
      goto LAB_1400bfece;
    }
    if ((byte *)pcVar5 == (byte *)0x0) {
      param_1[0x18] = 0;
      return (char *)(byte *)0x0;
    }
    if (*pcVar5 == 0x24) {
      param_1[0x18] = 1;
      if (*pcVar5 != 0x24) goto LAB_1400bfebd;
      goto LAB_1400bfec0;
    }
  }
  else {
    param_1[0x18] = 0;
LAB_1400bfebd:
    iVar10 = iVar6;
LAB_1400bfec0:
    param_1[1] = iVar10;
    if ((byte *)pcVar5 == (byte *)0x0) {
      return (char *)(byte *)0x0;
    }
  }
  if (*pcVar5 != 0x23) {
    return (char *)(byte *)pcVar5;
  }
LAB_1400bfece:
  *param_1 = 0x75ae3d2;
  return (char *)(byte *)pcVar5;
LAB_1400bfd0b:
  pcVar5 = "#wbmp: bad header";
  goto LAB_1400bfd87;
}

