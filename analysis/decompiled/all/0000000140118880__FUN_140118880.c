// Function: FUN_140118880
// Addr: 140118880
// Size: 458 bytes


bool FUN_140118880(undefined8 *param_1,undefined8 *param_2)

{
  ushort *puVar1;
  ushort *puVar2;
  ushort uVar3;
  ushort uVar4;
  longlong lVar5;
  bool bVar6;
  int iVar7;
  ushort *puVar8;
  ushort *puVar9;
  ushort *puVar10;
  ushort *puVar11;
  undefined8 *puVar12;
  int iVar13;
  undefined8 *puVar14;
  
  puVar14 = param_2;
  if (7 < (ulonglong)param_2[3]) {
    puVar14 = (undefined8 *)*param_2;
  }
  lVar5 = param_2[2];
  puVar12 = param_1;
  if (7 < (ulonglong)param_1[3]) {
    puVar12 = (undefined8 *)*param_1;
  }
  puVar1 = (ushort *)((longlong)puVar12 + param_1[2] * 2);
  puVar8 = (ushort *)FUN_140015e90(puVar12,puVar1);
  puVar2 = (ushort *)((longlong)puVar14 + lVar5 * 2);
  puVar9 = (ushort *)FUN_140015e90(puVar14,puVar2);
  iVar7 = FUN_1400153a0(puVar12,(longlong)puVar8 - (longlong)puVar12 >> 1,puVar14,
                        (longlong)puVar9 - (longlong)puVar14 >> 1);
  puVar10 = puVar8;
  if (iVar7 == 0) {
    for (; (puVar11 = puVar9, puVar10 != puVar1 && ((*puVar10 == 0x5c || (*puVar10 == 0x2f))));
        puVar10 = puVar10 + 1) {
    }
    for (; (puVar11 != puVar2 && ((*puVar11 == 0x5c || (*puVar11 == 0x2f)))); puVar11 = puVar11 + 1)
    {
    }
    iVar7 = (uint)(puVar8 != puVar10) - (uint)(puVar9 != puVar11);
    if (iVar7 == 0) {
      iVar7 = (uint)(puVar11 == puVar2) - (uint)(puVar10 == puVar1);
      while (puVar10 != puVar1) {
        if (iVar7 != 0) {
          return iVar7 == 0;
        }
        uVar3 = *puVar10;
        if ((uVar3 == 0x5c) || (uVar3 == 0x2f)) {
          bVar6 = true;
          iVar13 = 1;
        }
        else {
          bVar6 = false;
          iVar13 = 0;
        }
        uVar4 = *puVar11;
        if ((uVar4 == 0x5c) || (uVar4 == 0x2f)) {
          iVar7 = 1;
        }
        else {
          iVar7 = 0;
        }
        iVar7 = iVar7 - iVar13;
        if (iVar7 != 0) break;
        if (bVar6) {
          do {
            puVar10 = puVar10 + 1;
            if (puVar10 == puVar1) break;
          } while ((*puVar10 == 0x5c) || (*puVar10 == 0x2f));
          do {
            puVar11 = puVar11 + 1;
            if (puVar11 == puVar2) break;
          } while ((*puVar11 == 0x5c) || (*puVar11 == 0x2f));
        }
        else {
          iVar7 = (uint)uVar3 - (uint)uVar4;
          if (iVar7 != 0) break;
          puVar10 = puVar10 + 1;
          puVar11 = puVar11 + 1;
        }
        iVar7 = (uint)(puVar11 == puVar2) - (uint)(puVar10 == puVar1);
      }
    }
  }
  return iVar7 == 0;
}

