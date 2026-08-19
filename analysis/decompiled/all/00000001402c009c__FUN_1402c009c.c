// Function: FUN_1402c009c
// Addr: 1402c009c
// Size: 494 bytes


uint FUN_1402c009c(longlong param_1,longlong *param_2,uint param_3,uint param_4)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  longlong *plVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  ulonglong uVar9;
  uint uVar10;
  ulonglong uVar11;
  char cVar12;
  
  pcVar2 = (char *)*param_2;
  uVar11 = (ulonglong)param_3;
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
  *param_2 = (longlong)(pcVar2 + 1);
  if (*(char *)(param_1 + 0x28) == '\0') {
    FUN_1402c0e60();
  }
  while (iVar5 = FUN_1402c0ed8(cVar12,8,param_1 + 0x18), iVar5 != 0) {
    cVar12 = *(char *)*param_2;
    *param_2 = (longlong)((char *)*param_2 + 1);
  }
  uVar10 = param_4 & 0xff | 2;
  if (cVar12 != '-') {
    uVar10 = param_4 & 0xff;
  }
  if ((cVar12 - 0x2bU & 0xfd) == 0) {
    cVar12 = *(char *)*param_2;
    *param_2 = (longlong)((char *)*param_2 + 1);
  }
  if ((param_3 & 0xffffffef) == 0) {
    if ((byte)(cVar12 - 0x30U) < 10) {
      iVar5 = cVar12 + -0x30;
LAB_1402c01c1:
      if (iVar5 != 0) goto LAB_1402c0212;
      pcVar3 = (char *)*param_2;
      cVar1 = *pcVar3;
      *param_2 = (longlong)(pcVar3 + 1);
      if ((cVar1 + 0xa8U & 0xdf) != 0) {
        *param_2 = (longlong)pcVar3;
        uVar6 = 8;
        if (param_3 != 0) {
          uVar6 = param_3;
        }
        uVar11 = (ulonglong)uVar6;
        if ((cVar1 != '\0') && (*pcVar3 != cVar1)) {
                    /* WARNING: Subroutine does not return */
          FUN_1402cb004();
        }
        goto LAB_1402c021e;
      }
      cVar12 = pcVar3[1];
      *param_2 = (longlong)(pcVar3 + 2);
      uVar6 = 0x10;
    }
    else {
      if ((byte)(cVar12 + 0x9fU) < 0x1a) {
        iVar5 = cVar12 + -0x57;
        goto LAB_1402c01c1;
      }
      if ((byte)(cVar12 + 0xbfU) < 0x1a) {
        iVar5 = cVar12 + -0x37;
        goto LAB_1402c01c1;
      }
LAB_1402c0212:
      uVar6 = 10;
    }
    if (param_3 != 0) {
      uVar6 = param_3;
    }
    uVar11 = (ulonglong)uVar6;
  }
LAB_1402c021e:
  uVar9 = 0xffffffff % uVar11;
  uVar6 = 0;
  while( true ) {
    if ((byte)(cVar12 - 0x30U) < 10) {
      uVar8 = (int)cVar12 - 0x30;
    }
    else if ((byte)(cVar12 + 0x9fU) < 0x1a) {
      uVar8 = (int)cVar12 - 0x57;
    }
    else if ((byte)(cVar12 + 0xbfU) < 0x1a) {
      uVar8 = (int)cVar12 - 0x37;
    }
    else {
      uVar8 = 0xffffffff;
    }
    pcVar3 = (char *)*param_2;
    if ((uint)uVar11 <= uVar8) break;
    cVar12 = *pcVar3;
    uVar7 = uVar6 * (uint)uVar11;
    uVar8 = uVar7 + uVar8;
    uVar9 = (ulonglong)uVar8;
    *param_2 = (longlong)(pcVar3 + 1);
    uVar10 = uVar10 | (uint)(uVar8 < uVar7 || (uint)(0xffffffff / uVar11) < uVar6) << 2 | 8;
    uVar6 = uVar8;
  }
  *param_2 = (longlong)(pcVar3 + -1);
  if ((cVar12 != '\0') && (pcVar3[-1] != cVar12)) {
                    /* WARNING: Subroutine does not return */
    FUN_1402cb004(uVar8,uVar9);
  }
  if ((uVar10 & 8) == 0) {
    *param_2 = (longlong)pcVar2;
    if ((undefined8 *)param_2[1] != (undefined8 *)0x0) {
      *(undefined8 *)param_2[1] = pcVar2;
    }
    return 0;
  }
  if ((uVar10 & 4) == 0) {
    if ((uVar10 & 1) == 0) {
      if ((uVar10 & 2) == 0) goto code_r0x0001402c030d;
code_r0x0001402c032e:
      uVar6 = -uVar6;
      goto code_r0x0001402c030d;
    }
    if ((uVar10 & 2) == 0) {
      if (uVar6 < 0x80000000) goto code_r0x0001402c030d;
    }
    else if (uVar6 < 0x80000001) goto code_r0x0001402c032e;
  }
  *(undefined1 *)(param_1 + 0x30) = 1;
  *(undefined4 *)(param_1 + 0x2c) = 0x22;
  uVar6 = 0xffffffff;
  if ((uVar10 & 1) != 0) {
    plVar4 = (longlong *)param_2[1];
    if ((uVar10 & 2) != 0) {
      if (plVar4 != (longlong *)0x0) {
        *plVar4 = *param_2;
      }
      return 0x80000000;
    }
    if (plVar4 != (longlong *)0x0) {
      *plVar4 = *param_2;
      return 0x7fffffff;
    }
    return 0x7fffffff;
  }
code_r0x0001402c030d:
  if ((longlong *)param_2[1] != (longlong *)0x0) {
    *(longlong *)param_2[1] = *param_2;
    return uVar6;
  }
  return uVar6;
}

