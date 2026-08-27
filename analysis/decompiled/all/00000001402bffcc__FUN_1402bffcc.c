// Function: FUN_1402bffcc
// Addr: 1402bffcc
// Size: 729 bytes


uint FUN_1402bffcc(longlong param_1,longlong *param_2,uint param_3,uint param_4)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  longlong *plVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  ulonglong uVar10;
  uint uVar11;
  ulonglong uVar12;
  char cVar13;
  
  pcVar2 = (char *)*param_2;
  uVar12 = (ulonglong)param_3;
  if (pcVar2 == (char *)0x0) {
    puVar8 = (undefined4 *)FUN_1402caf34();
    *puVar8 = 0x16;
    FUN_1402cad8c();
LAB_1402c0041:
    if ((longlong *)param_2[1] != (longlong *)0x0) {
      *(longlong *)param_2[1] = *param_2;
    }
    return 0;
  }
  if ((param_3 != 0) && (0x22 < param_3 - 2)) {
    *(undefined1 *)(param_1 + 0x30) = 1;
    *(undefined4 *)(param_1 + 0x2c) = 0x16;
    FUN_1402cacd4(0,0,0,0,0,param_1);
    goto LAB_1402c0041;
  }
  cVar13 = *pcVar2;
  *param_2 = (longlong)(pcVar2 + 1);
  if (*(char *)(param_1 + 0x28) == '\0') {
    FUN_1402c0d90();
  }
  while (iVar5 = FUN_1402c0e08(cVar13,8,param_1 + 0x18), iVar5 != 0) {
    cVar13 = *(char *)*param_2;
    *param_2 = (longlong)((char *)*param_2 + 1);
  }
  uVar11 = param_4 & 0xff | 2;
  if (cVar13 != '-') {
    uVar11 = param_4 & 0xff;
  }
  if ((cVar13 - 0x2bU & 0xfd) == 0) {
    cVar13 = *(char *)*param_2;
    *param_2 = (longlong)((char *)*param_2 + 1);
  }
  if ((param_3 & 0xffffffef) == 0) {
    if ((byte)(cVar13 - 0x30U) < 10) {
      iVar5 = cVar13 + -0x30;
LAB_1402c00f1:
      if (iVar5 != 0) goto LAB_1402c0142;
      pcVar3 = (char *)*param_2;
      cVar1 = *pcVar3;
      *param_2 = (longlong)(pcVar3 + 1);
      if ((cVar1 + 0xa8U & 0xdf) != 0) {
        *param_2 = (longlong)pcVar3;
        uVar6 = 8;
        if (param_3 != 0) {
          uVar6 = param_3;
        }
        uVar12 = (ulonglong)uVar6;
        if ((cVar1 != '\0') && (*pcVar3 != cVar1)) {
          puVar8 = (undefined4 *)FUN_1402caf34();
          *puVar8 = 0x16;
          FUN_1402cad8c();
        }
        goto LAB_1402c014e;
      }
      cVar13 = pcVar3[1];
      *param_2 = (longlong)(pcVar3 + 2);
      uVar6 = 0x10;
    }
    else {
      if ((byte)(cVar13 + 0x9fU) < 0x1a) {
        iVar5 = cVar13 + -0x57;
        goto LAB_1402c00f1;
      }
      if ((byte)(cVar13 + 0xbfU) < 0x1a) {
        iVar5 = cVar13 + -0x37;
        goto LAB_1402c00f1;
      }
LAB_1402c0142:
      uVar6 = 10;
    }
    if (param_3 != 0) {
      uVar6 = param_3;
    }
    uVar12 = (ulonglong)uVar6;
  }
LAB_1402c014e:
  uVar10 = 0xffffffff % uVar12;
  uVar6 = 0;
  while( true ) {
    if ((byte)(cVar13 - 0x30U) < 10) {
      uVar9 = (int)cVar13 - 0x30;
    }
    else if ((byte)(cVar13 + 0x9fU) < 0x1a) {
      uVar9 = (int)cVar13 - 0x57;
    }
    else if ((byte)(cVar13 + 0xbfU) < 0x1a) {
      uVar9 = (int)cVar13 - 0x37;
    }
    else {
      uVar9 = 0xffffffff;
    }
    pcVar3 = (char *)*param_2;
    if ((uint)uVar12 <= uVar9) break;
    cVar13 = *pcVar3;
    uVar7 = uVar6 * (uint)uVar12;
    uVar9 = uVar7 + uVar9;
    uVar10 = (ulonglong)uVar9;
    *param_2 = (longlong)(pcVar3 + 1);
    uVar11 = uVar11 | (uint)(uVar9 < uVar7 || (uint)(0xffffffff / uVar12) < uVar6) << 2 | 8;
    uVar6 = uVar9;
  }
  *param_2 = (longlong)(pcVar3 + -1);
  if ((cVar13 != '\0') && (pcVar3[-1] != cVar13)) {
    puVar8 = (undefined4 *)FUN_1402caf34(uVar9,uVar10);
    *puVar8 = 0x16;
    FUN_1402cad8c();
  }
  if ((uVar11 & 8) == 0) {
    *param_2 = (longlong)pcVar2;
    if ((undefined8 *)param_2[1] == (undefined8 *)0x0) {
      return 0;
    }
    *(undefined8 *)param_2[1] = pcVar2;
    return 0;
  }
  if ((uVar11 & 4) == 0) {
    if ((uVar11 & 1) == 0) {
      if ((uVar11 & 2) == 0) goto LAB_1402c023d;
LAB_1402c025e:
      uVar6 = -uVar6;
      goto LAB_1402c023d;
    }
    if ((uVar11 & 2) == 0) {
      if (uVar6 < 0x80000000) goto LAB_1402c023d;
    }
    else if (uVar6 < 0x80000001) goto LAB_1402c025e;
  }
  *(undefined1 *)(param_1 + 0x30) = 1;
  *(undefined4 *)(param_1 + 0x2c) = 0x22;
  uVar6 = 0xffffffff;
  if ((uVar11 & 1) != 0) {
    plVar4 = (longlong *)param_2[1];
    if ((uVar11 & 2) != 0) {
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
LAB_1402c023d:
  if ((longlong *)param_2[1] != (longlong *)0x0) {
    *(longlong *)param_2[1] = *param_2;
    return uVar6;
  }
  return uVar6;
}

