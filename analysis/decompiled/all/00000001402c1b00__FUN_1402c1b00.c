// Function: FUN_1402c1b00
// Addr: 1402c1b00
// Size: 486 bytes


uint FUN_1402c1b00(longlong param_1,longlong *param_2,uint param_3,byte param_4)

{
  char cVar1;
  char *pcVar2;
  longlong *plVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  ulonglong uVar7;
  byte bVar8;
  uint uVar9;
  char *pcVar10;
  ulonglong uVar11;
  char cVar12;
  uint uVar13;
  
  pcVar2 = (char *)*param_2;
  uVar7 = (ulonglong)param_3;
  if (pcVar2 == (char *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402cb004();
  }
  if ((param_3 != 0) && (0x22 < param_3 - 2)) {
    *(undefined1 *)(param_1 + 0x30) = 1;
    *(undefined4 *)(param_1 + 0x2c) = 0x16;
    FUN_1402cada4(0,0,0,0,0,param_1);
    if ((longlong *)param_2[1] == (longlong *)0x0) {
      return 0;
    }
    *(longlong *)param_2[1] = *param_2;
    return 0;
  }
  cVar12 = *pcVar2;
  pcVar10 = pcVar2 + 1;
  *param_2 = (longlong)pcVar10;
  bVar8 = param_4 | 2;
  if ((cVar12 == '-') || (bVar8 = param_4, cVar12 == '+')) {
    param_4 = bVar8;
    cVar12 = *pcVar10;
    pcVar10 = pcVar2 + 2;
    *param_2 = (longlong)pcVar10;
  }
  if ((param_3 & 0xffffffef) == 0) {
    if ((byte)(cVar12 - 0x30U) < 10) {
      iVar5 = cVar12 + -0x30;
LAB_1402c1bf7:
      if (iVar5 != 0) goto LAB_1402c1c45;
      cVar1 = *pcVar10;
      *param_2 = (longlong)(pcVar10 + 1);
      if ((cVar1 + 0xa8U & 0xdf) != 0) {
        *param_2 = (longlong)pcVar10;
        uVar7 = 8;
        if (param_3 != 0) {
          uVar7 = (ulonglong)param_3;
        }
        if ((cVar1 != '\0') && (*pcVar10 != cVar1)) {
                    /* WARNING: Subroutine does not return */
          FUN_1402cb004();
        }
        goto LAB_1402c1c51;
      }
      cVar12 = pcVar10[1];
      *param_2 = (longlong)(pcVar10 + 2);
      uVar7 = 0x10;
    }
    else {
      if ((byte)(cVar12 + 0x9fU) < 0x1a) {
        iVar5 = cVar12 + -0x57;
        goto LAB_1402c1bf7;
      }
      if ((byte)(cVar12 + 0xbfU) < 0x1a) {
        iVar5 = cVar12 + -0x37;
        goto LAB_1402c1bf7;
      }
LAB_1402c1c45:
      uVar7 = 10;
    }
    if (param_3 != 0) {
      uVar7 = (ulonglong)param_3;
    }
  }
LAB_1402c1c51:
  pcVar10 = (char *)*param_2;
  uVar11 = 0xffffffff % uVar7;
  uVar13 = 0;
  while( true ) {
    if ((byte)(cVar12 - 0x30U) < 10) {
      uVar9 = (int)cVar12 - 0x30;
    }
    else if ((byte)(cVar12 + 0x9fU) < 0x1a) {
      uVar9 = (int)cVar12 - 0x57;
    }
    else if ((byte)(cVar12 + 0xbfU) < 0x1a) {
      uVar9 = (int)cVar12 - 0x37;
    }
    else {
      uVar9 = 0xffffffff;
    }
    if ((uint)uVar7 <= uVar9) break;
    cVar12 = *pcVar10;
    uVar6 = uVar13 * (uint)uVar7;
    uVar9 = uVar6 + uVar9;
    uVar11 = (ulonglong)uVar9;
    param_4 = param_4 | (uVar9 < uVar6 || (uint)(0xffffffff / uVar7) < uVar13) << 2 | 8U;
    pcVar10 = pcVar10 + 1;
    *param_2 = (longlong)pcVar10;
    uVar13 = uVar9;
  }
  *param_2 = (longlong)(pcVar10 + -1);
  if ((cVar12 != '\0') && (pcVar10[-1] != cVar12)) {
                    /* WARNING: Subroutine does not return */
    FUN_1402cb004(uVar9,uVar11);
  }
  if ((param_4 & 8) == 0) {
    *param_2 = (longlong)pcVar2;
    if ((undefined8 *)param_2[1] != (undefined8 *)0x0) {
      *(undefined8 *)param_2[1] = pcVar2;
    }
    return 0;
  }
  if ((param_4 & 4) == 0) {
    if ((param_4 & 1) == 0) {
      if ((param_4 & 2) == 0) goto code_r0x0001402c1d85;
code_r0x0001402c1d82:
      uVar13 = -uVar13;
      goto code_r0x0001402c1d85;
    }
    if ((param_4 & 2) == 0) {
      if (uVar13 < 0x80000000) goto code_r0x0001402c1d85;
    }
    else if (uVar13 < 0x80000001) goto code_r0x0001402c1d82;
    bVar8 = 1;
    bVar4 = param_4;
  }
  else {
    bVar8 = param_4;
    bVar4 = 1;
  }
  *(undefined1 *)(param_1 + 0x30) = 1;
  *(undefined4 *)(param_1 + 0x2c) = 0x22;
  if ((bVar4 & bVar8) != 0) {
    plVar3 = (longlong *)param_2[1];
    if ((param_4 & 2) == 0) {
      if (plVar3 != (longlong *)0x0) {
        *plVar3 = *param_2;
      }
      return 0x7fffffff;
    }
    if (plVar3 != (longlong *)0x0) {
      *plVar3 = *param_2;
    }
    return 0x80000000;
  }
  uVar13 = 0xffffffff;
code_r0x0001402c1d85:
  if ((longlong *)param_2[1] != (longlong *)0x0) {
    *(longlong *)param_2[1] = *param_2;
    return uVar13;
  }
  return uVar13;
}

