// Function: FUN_1402cd320
// Addr: 1402cd320
// Size: 1220 bytes


ulonglong FUN_1402cd320(longlong *param_1,longlong *param_2,int *param_3)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  undefined4 *puVar7;
  char *pcVar8;
  ulonglong uVar9;
  int iVar10;
  char cVar11;
  int *piVar12;
  char *pcVar13;
  byte bVar14;
  int local_res10 [2];
  int *local_res18;
  
  pcVar13 = (char *)*param_2;
  local_res18 = param_3;
  if (pcVar13 == (char *)0x0) {
    puVar7 = (undefined4 *)FUN_1402caf34();
    *puVar7 = 0x16;
    FUN_1402cad8c();
    return 7;
  }
  cVar11 = *pcVar13;
  *param_2 = (longlong)(pcVar13 + 1);
  local_res10[0] = CONCAT31(local_res10[0]._1_3_,cVar11);
  iVar5 = FUN_1402c0e08();
  iVar10 = local_res10[0];
  while (local_res10[0]._1_3_ = (undefined3)((uint)iVar10 >> 8), iVar5 != 0) {
    cVar11 = *(char *)*param_2;
    *param_2 = (longlong)((char *)*param_2 + 1);
    local_res10[0] = CONCAT31(local_res10[0]._1_3_,cVar11);
    iVar5 = FUN_1402c0e08();
    iVar10 = local_res10[0];
  }
  *(bool *)(param_3 + 0xc2) = cVar11 == '-';
  if ((cVar11 == '-') || (cVar11 == '+')) {
    cVar11 = *(char *)*param_2;
    *param_2 = (longlong)((char *)*param_2 + 1);
    local_res10[0] = CONCAT31(local_res10[0]._1_3_,cVar11);
    iVar10 = local_res10[0];
  }
  local_res10[0] = iVar10;
  if ((cVar11 == 'I') || (cVar11 == 'i')) {
    uVar9 = FUN_1402cd7e4(local_res10,param_2,pcVar13);
    return uVar9;
  }
  if ((cVar11 + 0xb2U & 0xdf) == 0) {
    uVar9 = FUN_1402cd928(local_res10,param_2,pcVar13);
    return uVar9;
  }
  bVar14 = 0;
  if (cVar11 == '0') {
    pcVar8 = (char *)*param_2;
    cVar2 = *pcVar8;
    *param_2 = (longlong)(pcVar8 + 1);
    if ((cVar2 + 0xa8U & 0xdf) == 0) {
      cVar11 = pcVar8[1];
      *param_2 = (longlong)(pcVar8 + 2);
      bVar14 = 1;
      pcVar13 = pcVar8;
    }
    else {
      *param_2 = (longlong)pcVar8;
      if ((cVar2 != '\0') && (*pcVar8 != cVar2)) {
        puVar7 = (undefined4 *)FUN_1402caf34();
        *puVar7 = 0x16;
        FUN_1402cad8c();
      }
    }
  }
  param_3 = param_3 + 2;
  local_res10[0] = 0;
  bVar3 = false;
  if (cVar11 == '0') {
    bVar3 = true;
    do {
      cVar11 = *(char *)*param_2;
      *param_2 = (longlong)((char *)*param_2 + 1);
    } while (cVar11 == '0');
  }
  piVar12 = param_3;
  while( true ) {
    if ((byte)(cVar11 - 0x30U) < 10) {
      uVar6 = (int)cVar11 - 0x30;
    }
    else if ((byte)(cVar11 + 0x9fU) < 0x1a) {
      uVar6 = (int)cVar11 - 0x57;
    }
    else if ((byte)(cVar11 + 0xbfU) < 0x1a) {
      uVar6 = (int)cVar11 - 0x37;
    }
    else {
      uVar6 = 0xffffffff;
    }
    if ((-(uint)(bVar14 != 0) & 6) + 9 < uVar6) break;
    bVar3 = true;
    if (piVar12 != local_res18 + 0xc2) {
      *(char *)piVar12 = (char)uVar6;
      piVar12 = (int *)((longlong)piVar12 + 1);
    }
    local_res10[0] = local_res10[0] + 1;
    cVar11 = *(char *)*param_2;
    *param_2 = (longlong)((char *)*param_2 + 1);
  }
  if (cVar11 == *(char *)**(undefined8 **)(*param_1 + 0xf8)) {
    cVar11 = *(char *)*param_2;
    pcVar8 = (char *)*param_2 + 1;
    *param_2 = (longlong)pcVar8;
    if ((piVar12 == param_3) && (cVar11 == '0')) {
      bVar3 = true;
      do {
        cVar11 = *pcVar8;
        local_res10[0] = local_res10[0] + -1;
        pcVar8 = pcVar8 + 1;
        *param_2 = (longlong)pcVar8;
      } while (cVar11 == '0');
    }
    while( true ) {
      if ((cVar11 < '0') || ('9' < cVar11)) {
        if ((byte)(cVar11 + 0x9fU) < 0x1a) {
          uVar6 = (int)cVar11 - 0x57;
        }
        else if ((byte)(cVar11 + 0xbfU) < 0x1a) {
          uVar6 = (int)cVar11 - 0x37;
        }
        else {
          uVar6 = 0xffffffff;
        }
      }
      else {
        uVar6 = (int)cVar11 - 0x30;
      }
      if ((-(uint)(bVar14 != 0) & 6) + 9 < uVar6) break;
      bVar3 = true;
      if (piVar12 != local_res18 + 0xc2) {
        *(char *)piVar12 = (char)uVar6;
        piVar12 = (int *)((longlong)piVar12 + 1);
      }
      cVar11 = *(char *)*param_2;
      *param_2 = (longlong)((char *)*param_2 + 1);
    }
  }
  pcVar8 = (char *)(*param_2 + -1);
  *param_2 = (longlong)pcVar8;
  if (!bVar3) {
    if ((cVar11 != '\0') && (*pcVar8 != cVar11)) {
      puVar7 = (undefined4 *)FUN_1402caf34();
      *puVar7 = 0x16;
      FUN_1402cad8c();
    }
    *param_2 = (longlong)pcVar13;
    if (bVar14 != 0) {
      return 2;
    }
    return 7;
  }
  if ((cVar11 != '\0') && (*pcVar8 != cVar11)) {
    puVar7 = (undefined4 *)FUN_1402caf34();
    *puVar7 = 0x16;
    FUN_1402cad8c();
  }
  pcVar8 = (char *)*param_2;
  cVar11 = *pcVar8;
  pcVar13 = pcVar8 + 1;
  *param_2 = (longlong)pcVar13;
  if (cVar11 == 'E') {
LAB_1402cd5f9:
    bVar4 = bVar14 ^ 1;
  }
  else if (cVar11 == 'P') {
LAB_1402cd5f4:
    bVar4 = bVar14;
  }
  else {
    if (cVar11 == 'e') goto LAB_1402cd5f9;
    bVar4 = 0;
    if (cVar11 == 'p') goto LAB_1402cd5f4;
  }
  iVar10 = 0;
  if (bVar4 != 0) {
    cVar2 = *pcVar13;
    pcVar13 = pcVar8 + 2;
    *param_2 = (longlong)pcVar13;
    if ((cVar2 == '+') || (cVar11 = cVar2, cVar2 == '-')) {
      cVar11 = *pcVar13;
      pcVar13 = pcVar8 + 3;
      *param_2 = (longlong)pcVar13;
    }
    bVar3 = false;
    if (cVar11 != '0') goto LAB_1402cd65b;
    do {
      cVar11 = *pcVar13;
      pcVar13 = pcVar13 + 1;
      *param_2 = (longlong)pcVar13;
    } while (cVar11 == '0');
    while( true ) {
      bVar3 = true;
LAB_1402cd65b:
      if ((cVar11 < '0') || ('9' < cVar11)) {
        if ((byte)(cVar11 + 0x9fU) < 0x1a) {
          uVar6 = (int)cVar11 - 0x57;
        }
        else {
          if (0x19 < (byte)(cVar11 + 0xbfU)) goto LAB_1402cd6ab;
          uVar6 = (int)cVar11 - 0x37;
        }
      }
      else {
        uVar6 = (int)cVar11 - 0x30;
      }
      if (9 < uVar6) goto LAB_1402cd6ab;
      bVar3 = true;
      iVar10 = uVar6 + iVar10 * 10;
      if (0x1450 < iVar10) break;
      cVar11 = *pcVar13;
      pcVar13 = pcVar13 + 1;
      *param_2 = (longlong)pcVar13;
    }
    iVar10 = 0x1451;
LAB_1402cd6ab:
    do {
      if ((byte)(cVar11 - 0x30U) < 10) {
        uVar6 = (int)cVar11 - 0x30;
      }
      else if ((byte)(cVar11 + 0x9fU) < 0x1a) {
        uVar6 = (int)cVar11 - 0x57;
      }
      else {
        if (0x19 < (byte)(cVar11 + 0xbfU)) goto LAB_1402cd6e8;
        uVar6 = (int)cVar11 - 0x37;
      }
      if (9 < uVar6) goto LAB_1402cd6e8;
      cVar11 = *pcVar13;
      pcVar13 = pcVar13 + 1;
      *param_2 = (longlong)pcVar13;
    } while( true );
  }
LAB_1402cd71e:
  *param_2 = (longlong)(pcVar13 + -1);
  if ((cVar11 != '\0') && (pcVar13[-1] != cVar11)) {
    puVar7 = (undefined4 *)FUN_1402caf34();
    *puVar7 = 0x16;
    FUN_1402cad8c();
  }
  if (piVar12 != param_3) {
    do {
      piVar1 = (int *)((longlong)piVar12 + -1);
      if (*(char *)piVar1 != '\0') break;
      piVar12 = piVar1;
    } while (piVar1 != param_3);
    if (piVar12 != param_3) {
      if (0x1450 < iVar10) {
        return 9;
      }
      if (-0x1451 < iVar10) {
        iVar10 = iVar10 + ((-(uint)(bVar14 != 0) & 3) + 1) * local_res10[0];
        if (0x1450 < iVar10) {
          return 9;
        }
        if (-0x1451 < iVar10) {
          *local_res18 = iVar10;
          local_res18[1] = (int)piVar12 - (int)param_3;
          return (ulonglong)bVar14;
        }
      }
      return 8;
    }
  }
  return 2;
LAB_1402cd6e8:
  if (cVar2 == '-') {
    iVar10 = -iVar10;
  }
  if (!bVar3) {
    *param_2 = (longlong)(pcVar13 + -1);
    if ((cVar11 != '\0') && (pcVar13[-1] != cVar11)) {
      puVar7 = (undefined4 *)FUN_1402caf34();
      *puVar7 = 0x16;
      FUN_1402cad8c();
    }
    *param_2 = (longlong)pcVar8;
    pcVar13 = pcVar8 + 1;
    cVar11 = *pcVar8;
  }
  goto LAB_1402cd71e;
}

