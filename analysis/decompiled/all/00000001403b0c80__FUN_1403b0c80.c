// Function: FUN_1403b0c80
// Addr: 1403b0c80
// Size: 1097 bytes


bool FUN_1403b0c80(byte *param_1,longlong param_2,longlong param_3,byte *param_4,int *param_5)

{
  longlong lVar1;
  longlong lVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  bool bVar5;
  bool bVar6;
  char cVar7;
  short sVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  undefined8 *puVar12;
  byte bVar13;
  uint uVar14;
  undefined8 *puVar15;
  uint uVar16;
  bool bVar17;
  
  uVar14 = (uint)*param_1 * 0x100 + (uint)param_1[1];
  if (uVar14 == 0) {
    return false;
  }
  uVar16 = *(uint *)(param_2 + 0x118) & 0xfffffffe;
  bVar17 = false;
  lVar2 = *(longlong *)(param_2 + 0x90);
  if ((uVar14 & 1) != 0) {
    sVar8 = (ushort)param_4[1] + (ushort)*param_4 * 0x100;
    bVar17 = sVar8 != 0;
    param_4 = param_4 + 2;
    param_5[2] = param_5[2] +
                 (int)((ulonglong)((longlong)sVar8 * *(longlong *)(lVar2 + 0x58) + 0x8000) >> 0x10);
  }
  if ((uVar14 & 2) != 0) {
    sVar8 = (ushort)*param_4 * 0x100 + (ushort)param_4[1];
    if (sVar8 != 0) {
      bVar17 = true;
    }
    param_4 = param_4 + 2;
    param_5[3] = param_5[3] +
                 (int)((ulonglong)((longlong)sVar8 * *(longlong *)(lVar2 + 0x60) + 0x8000) >> 0x10);
  }
  if ((uVar14 & 4) != 0) {
    if (uVar16 == 4) {
      sVar8 = (ushort)*param_4 * 0x100 + (ushort)param_4[1];
      bVar17 = (bool)(bVar17 | sVar8 != 0);
      *param_5 = *param_5 +
                 (int)((ulonglong)((longlong)sVar8 * *(longlong *)(lVar2 + 0x58) + 0x8000) >> 0x10);
    }
    param_4 = param_4 + 2;
  }
  if ((uVar14 & 8) != 0) {
    if (uVar16 != 4) {
      sVar8 = (ushort)*param_4 * 0x100 + (ushort)param_4[1];
      bVar17 = (bool)(bVar17 | sVar8 != 0);
      param_5[1] = param_5[1] -
                   (int)((ulonglong)((longlong)sVar8 * *(longlong *)(lVar2 + 0x60) + 0x8000) >> 0x10
                        );
    }
    param_4 = param_4 + 2;
  }
  if ((param_1[1] & 0xf0) == 0) {
    return bVar17;
  }
  if ((*(int *)(lVar2 + 0x68) == 0) && (*(char *)(lVar2 + 0x78) == '\0')) {
    bVar5 = false;
  }
  else {
    bVar5 = true;
  }
  if ((*(int *)(lVar2 + 0x6c) == 0) && (*(char *)(lVar2 + 0x78) == '\0')) {
    bVar6 = false;
  }
  else {
    bVar6 = true;
  }
  if ((!bVar5) && (!bVar6)) {
    return bVar17;
  }
  uVar3 = *(undefined8 *)(param_2 + 0x108);
  lVar1 = param_2 + 0xa8;
  uVar4 = *(undefined8 *)(param_2 + 0x110);
  puVar15 = &DAT_14045dd10;
  if ((uVar14 & 0x10) != 0) {
    if (bVar5) {
      bVar17 = (bool)(bVar17 | (ushort)((ushort)*param_4 * 0x100 + (ushort)param_4[1]) != 0);
      cVar7 = FUN_1404093d0(param_4,lVar1);
      if (cVar7 == '\0') {
LAB_1403b0ead:
        puVar12 = &DAT_14045dd10;
      }
      else {
        bVar13 = param_4[1];
        uVar11 = (uint)*param_4 * 0x100 + (uint)bVar13;
        if (uVar11 != 0) {
          cVar7 = FUN_140403500((ulonglong)uVar11 + param_3,lVar1);
          if (cVar7 == '\0') goto LAB_1403b0ead;
          bVar13 = param_4[1];
        }
        uVar11 = (uint)bVar13 + (uint)*param_4 * 0x100;
        if (uVar11 == 0) goto LAB_1403b0ead;
        puVar12 = (undefined8 *)((ulonglong)uVar11 + param_3);
      }
      iVar9 = FUN_1403d00b0(puVar12,lVar2,uVar3,uVar4);
      param_5[2] = param_5[2] + iVar9;
    }
    param_4 = param_4 + 2;
  }
  if ((uVar14 & 0x20) == 0) goto LAB_1403b0f5c;
  if (bVar6) {
    bVar17 = (bool)(bVar17 | (ushort)((ushort)*param_4 * 0x100 + (ushort)param_4[1]) != 0);
    cVar7 = FUN_1404093d0(param_4,lVar1,param_3);
    if (cVar7 == '\0') {
LAB_1403b0f3e:
      puVar12 = &DAT_14045dd10;
    }
    else {
      bVar13 = param_4[1];
      uVar11 = (uint)*param_4 * 0x100 + (uint)bVar13;
      if (uVar11 != 0) {
        cVar7 = FUN_140403500((ulonglong)uVar11 + param_3,lVar1);
        if (cVar7 == '\0') goto LAB_1403b0f3e;
        bVar13 = param_4[1];
      }
      uVar11 = (uint)bVar13 + (uint)*param_4 * 0x100;
      if (uVar11 == 0) goto LAB_1403b0f3e;
      puVar12 = (undefined8 *)((ulonglong)uVar11 + param_3);
    }
    iVar9 = FUN_1403d0160(puVar12,lVar2,uVar3,uVar4);
    param_5[3] = param_5[3] + iVar9;
  }
  param_4 = param_4 + 2;
LAB_1403b0f5c:
  if ((uVar14 & 0x40) != 0) {
    if ((uVar16 == 4) && (bVar5)) {
      bVar17 = (bool)(bVar17 | (ushort)((ushort)*param_4 * 0x100 + (ushort)param_4[1]) != 0);
      cVar7 = FUN_1404093d0(param_4,lVar1,param_3);
      if ((cVar7 == '\0') ||
         (((uVar11 = (uint)*param_4 * 0x100 + (uint)param_4[1], uVar11 != 0 &&
           (cVar7 = FUN_140403500((ulonglong)uVar11 + param_3,lVar1), cVar7 == '\0')) ||
          (uVar11 = (uint)*param_4 * 0x100 + (uint)param_4[1], uVar11 == 0)))) {
        puVar12 = &DAT_14045dd10;
      }
      else {
        puVar12 = (undefined8 *)((ulonglong)uVar11 + param_3);
      }
      iVar9 = *param_5;
      iVar10 = FUN_1403d00b0(puVar12,lVar2,uVar3,uVar4);
      *param_5 = iVar10 + iVar9;
    }
    param_4 = param_4 + 2;
  }
  if ((((char)uVar14 < '\0') && (uVar16 != 4)) && (bVar6)) {
    bVar17 = (bool)(bVar17 | (ushort)((ushort)*param_4 * 0x100 + (ushort)param_4[1]) != 0);
    cVar7 = FUN_1404093d0(param_4,param_2 + 0xa8,param_3);
    if (((cVar7 != '\0') &&
        ((uVar14 = (uint)*param_4 * 0x100 + (uint)param_4[1], uVar14 == 0 ||
         (cVar7 = FUN_140403500((ulonglong)uVar14 + param_3,param_2 + 0xa8), cVar7 != '\0')))) &&
       (uVar14 = (uint)*param_4 * 0x100 + (uint)param_4[1], uVar14 != 0)) {
      puVar15 = (undefined8 *)((ulonglong)uVar14 + param_3);
    }
    iVar9 = FUN_1403d0160(puVar15,lVar2,uVar3,uVar4);
    param_5[1] = param_5[1] - iVar9;
  }
  return bVar17;
}

