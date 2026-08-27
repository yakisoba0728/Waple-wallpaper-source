// Function: FUN_1403a97a0
// Addr: 1403a97a0
// Size: 430 bytes


undefined8 FUN_1403a97a0(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  uint uVar2;
  char *pcVar3;
  undefined2 uVar4;
  longlong lVar5;
  byte *pbVar6;
  undefined4 *puVar7;
  ulonglong uVar8;
  longlong lVar9;
  uint *puVar10;
  uint uVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  int iVar14;
  
  lVar9 = *(longlong *)(param_2 + 0x18);
  uVar12 = 0;
  iVar14 = *(int *)(lVar9 + 0x18);
  if (iVar14 == -1) {
    lVar5 = FUN_140398a10(lVar9 + 0x80);
    iVar14 = (uint)*(byte *)(lVar5 + 4) * 0x100 + (uint)*(byte *)(lVar5 + 5);
    if (iVar14 == 0) {
      iVar14 = 0;
    }
    *(int *)(lVar9 + 0x18) = iVar14;
  }
  lVar9 = *(longlong *)(param_2 + 0x80);
  lVar5 = *(longlong *)(*(longlong *)(param_2 + 0x20) + 0x70);
  uVar1 = *(uint *)(*(longlong *)(param_2 + 0x20) + 0x60);
  if ((lVar9 == 0) || (*(uint *)(lVar9 + 4) < 2)) {
    puVar10 = (uint *)0x0;
  }
  else {
    puVar10 = *(uint **)(lVar9 + 8);
  }
  uVar13 = 0;
  if (uVar1 != 0) {
    do {
      if (puVar10 == (uint *)0x0) {
LAB_1403a9884:
        lVar9 = uVar13 * 0x14;
        pbVar6 = (byte *)FUN_1403cf3f0(param_1,*(undefined4 *)(lVar9 + lVar5),iVar14);
        if (pbVar6 != (byte *)0x0) {
          uVar11 = (uint)*pbVar6 * 0x100 + (uint)pbVar6[1];
          *(uint *)(lVar9 + *(longlong *)(*(longlong *)(param_2 + 0x20) + 0x70)) = uVar11;
          if ((*(char *)(param_2 + 0x8d) != '\0') &&
             (pcVar3 = *(char **)(param_2 + 0x90), *pcVar3 != '\0')) {
            pcVar3[4] = -1;
            pcVar3[5] = -1;
            pcVar3[6] = -1;
            pcVar3[7] = -1;
            puVar7 = (undefined4 *)FUN_1403ed560(pcVar3,uVar11,1);
            if (puVar7 != (undefined4 *)0x0) {
              uVar8 = (ulonglong)(uVar11 >> 6 & 7);
              *(ulonglong *)(puVar7 + uVar8 * 2 + 2) =
                   *(ulonglong *)(puVar7 + uVar8 * 2 + 2) | 1L << (uVar11 & 0x3f);
              *puVar7 = 0xffffffff;
            }
          }
          if (*(char *)(param_2 + 0x78) != '\0') {
            uVar4 = FUN_1403caa10(*(undefined8 *)(param_2 + 0x70),uVar11);
            *(undefined2 *)(*(longlong *)(*(longlong *)(param_2 + 0x20) + 0x70) + 0xc + lVar9) =
                 uVar4;
          }
          uVar12 = 1;
        }
      }
      else {
        uVar2 = *(uint *)(uVar13 * 0x14 + 8 + lVar5);
        uVar11 = puVar10[1];
        while (uVar2 < uVar11) {
          uVar11 = puVar10[-2];
          puVar10 = puVar10 + -3;
        }
        uVar11 = puVar10[2];
        while (uVar11 < uVar2) {
          uVar11 = puVar10[5];
          puVar10 = puVar10 + 3;
        }
        if ((*puVar10 & *(uint *)(param_2 + 0x88)) != 0) goto LAB_1403a9884;
      }
      uVar11 = (int)uVar13 + 1;
      uVar13 = (ulonglong)uVar11;
    } while (uVar11 < uVar1);
  }
  return uVar12;
}

