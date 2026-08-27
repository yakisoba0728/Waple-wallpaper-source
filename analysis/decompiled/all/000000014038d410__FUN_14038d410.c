// Function: FUN_14038d410
// Addr: 14038d410
// Size: 363 bytes


undefined8 FUN_14038d410(longlong param_1,undefined8 param_2,longlong param_3)

{
  ushort *puVar1;
  ushort uVar2;
  int iVar3;
  bool bVar4;
  char cVar5;
  int iVar6;
  longlong lVar7;
  int iVar8;
  int iVar9;
  ushort *puVar10;
  ulonglong uVar11;
  ushort *puVar12;
  uint uVar13;
  uint uVar14;
  short sVar15;
  
  lVar7 = FUN_140386cc0(param_2,param_1);
  if (lVar7 != 0) {
    puVar10 = *(ushort **)(param_3 + 8);
    iVar8 = -2;
    puVar1 = puVar10 + *(uint *)(param_3 + 0x10);
    iVar9 = 0;
    for (puVar12 = puVar10; puVar12 != puVar1; puVar12 = puVar12 + 1) {
      iVar6 = iVar8 + 1;
      iVar8 = (uint)(byte)*puVar12 * 0x100 + (uint)(*puVar12 >> 8);
      iVar3 = iVar9 + 1;
      if (iVar6 == iVar8) {
        iVar3 = iVar9;
      }
      iVar9 = iVar3;
    }
    cVar5 = FUN_14040aeb0(param_1 + 2,param_2);
    if (cVar5 != '\0') {
      if (iVar9 != 0) {
        sVar15 = 0;
        bVar4 = false;
        uVar11 = 0xffffffff;
        uVar13 = 0xfffffffe;
        if (puVar10 != puVar1) {
          do {
            uVar2 = *puVar10;
            uVar14 = (uint)(byte)uVar2 * 0x100 + (uint)(uVar2 >> 8);
            if (uVar13 + 1 != uVar14) {
              if ((uVar13 != 0xfffffffe) && (uVar14 < uVar13 + 1)) {
                bVar4 = true;
              }
              uVar11 = (ulonglong)((int)uVar11 + 1);
              lVar7 = param_1 + uVar11 * 6;
              *(ushort *)(lVar7 + 4) = uVar2;
              *(char *)(lVar7 + 8) = (char)((ushort)sVar15 >> 8);
              *(char *)(lVar7 + 9) = (char)sVar15;
            }
            sVar15 = sVar15 + 1;
            puVar10 = puVar10 + 1;
            *(ushort *)(param_1 + 6 + uVar11 * 6) = uVar2;
            uVar13 = uVar14;
          } while (puVar10 != puVar1);
          if ((bVar4) &&
             (iVar9 = (uint)*(byte *)(param_1 + 3) + (uint)*(byte *)(param_1 + 2) * 0x100,
             iVar9 != 0)) {
            FUN_1402ea670(param_1 + 4,iVar9,6,&LAB_1403b3890);
          }
        }
      }
      return 1;
    }
  }
  return 0;
}

