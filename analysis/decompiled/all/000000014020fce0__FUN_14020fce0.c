// Function: FUN_14020fce0
// Addr: 14020fce0
// Size: 997 bytes


void FUN_14020fce0(longlong param_1,undefined8 param_2,uint *param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined4 *puVar5;
  char *pcVar6;
  char cVar7;
  int iVar8;
  longlong lVar9;
  ulonglong uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  uint uVar17;
  
  lVar4 = *(longlong *)(param_1 + 0x4b8);
  if ((lVar4 != 0) && (*(longlong *)(lVar4 + 8) != 0)) {
    puVar5 = (undefined4 *)param_4[1];
    uVar1 = *puVar5;
    uVar2 = puVar5[1];
    uVar3 = puVar5[2];
    if ((*param_3 & 8) == 0) {
      if (((*param_3 >> 9 & 1) != 0) && (pcVar6 = (char *)*param_4, *pcVar6 != '\0')) {
        uVar10 = 0;
        lVar9 = *(longlong *)(lVar4 + 0x38);
        iVar8 = (int)(*(longlong *)(lVar4 + 0x40) - lVar9 >> 4) * -0x11111111;
        if (0 < iVar8) {
          do {
            cVar7 = FUN_14000d010(uVar10 * 0xf0 + lVar9,pcVar6);
            if (((cVar7 != '\0') &&
                (uVar10 < (ulonglong)
                          (*(longlong *)(lVar4 + 0x2d0) - *(longlong *)(lVar4 + 0x2c8) >> 6))) &&
               (*(longlong *)(lVar4 + 0x340) != 0)) {
              fVar11 = (float)FUN_14041a2e0(uVar3);
              fVar12 = (float)FUN_14041a9c0(uVar3);
              fVar13 = (float)FUN_14041a2e0(uVar2);
              fVar14 = (float)FUN_14041a9c0(uVar2);
              fVar15 = (float)FUN_14041a2e0(uVar1);
              fVar16 = (float)FUN_14041a9c0(uVar1);
              lVar4 = *(longlong *)(lVar4 + 0x310);
              lVar9 = uVar10 * 0x40;
              uVar17 = (uint)fVar14 ^ DAT_140492ff0;
              *(float *)(lVar9 + lVar4) = fVar13 * fVar11;
              *(float *)(lVar9 + 4 + lVar4) = fVar13 * fVar12;
              *(uint *)(lVar9 + 8 + lVar4) = uVar17;
              *(undefined4 *)(lVar9 + 0xc + lVar4) = 0;
              *(float *)(lVar9 + 0x10 + lVar4) = fVar14 * fVar11 * fVar16 - fVar15 * fVar12;
              *(float *)(lVar9 + 0x14 + lVar4) = fVar14 * fVar12 * fVar16 + fVar15 * fVar11;
              *(float *)(lVar9 + 0x18 + lVar4) = fVar16 * fVar13;
              *(undefined4 *)(lVar9 + 0x1c + lVar4) = 0;
              *(float *)(lVar9 + 0x20 + lVar4) = fVar15 * fVar11 * fVar14 + fVar16 * fVar12;
              *(float *)(lVar9 + 0x24 + lVar4) = fVar15 * fVar12 * fVar14 - fVar16 * fVar11;
              *(float *)(lVar9 + 0x28 + lVar4) = fVar15 * fVar13;
              *(undefined4 *)(lVar9 + 0x2c + lVar4) = 0;
              FUN_14020db40(param_1,uVar10);
              return;
            }
            uVar17 = (int)uVar10 + 1;
            uVar10 = (ulonglong)uVar17;
          } while ((int)uVar17 < iVar8);
        }
      }
    }
    else {
      iVar8 = *(int *)*param_4;
      if (((-1 < iVar8) &&
          ((ulonglong)(longlong)iVar8 <
           (ulonglong)(*(longlong *)(lVar4 + 0x2d0) - *(longlong *)(lVar4 + 0x2c8) >> 6))) &&
         (*(longlong *)(lVar4 + 0x340) != 0)) {
        fVar11 = (float)FUN_14041a2e0(uVar3);
        fVar12 = (float)FUN_14041a9c0(uVar3);
        fVar13 = (float)FUN_14041a2e0(uVar2);
        fVar14 = (float)FUN_14041a9c0(uVar2);
        fVar15 = (float)FUN_14041a2e0(uVar1);
        fVar16 = (float)FUN_14041a9c0(uVar1);
        lVar4 = *(longlong *)(lVar4 + 0x310);
        lVar9 = (longlong)iVar8 * 0x40;
        uVar17 = (uint)fVar14 ^ DAT_140492ff0;
        *(float *)(lVar4 + lVar9) = fVar13 * fVar11;
        *(float *)(lVar4 + 4 + lVar9) = fVar13 * fVar12;
        *(uint *)(lVar4 + 8 + lVar9) = uVar17;
        *(undefined4 *)(lVar4 + 0xc + lVar9) = 0;
        *(float *)(lVar4 + 0x10 + lVar9) = fVar14 * fVar11 * fVar16 - fVar15 * fVar12;
        *(float *)(lVar4 + 0x14 + lVar9) = fVar14 * fVar12 * fVar16 + fVar15 * fVar11;
        *(float *)(lVar4 + 0x18 + lVar9) = fVar16 * fVar13;
        *(undefined4 *)(lVar4 + 0x1c + lVar9) = 0;
        *(float *)(lVar4 + 0x20 + lVar9) = fVar15 * fVar11 * fVar14 + fVar16 * fVar12;
        *(float *)(lVar4 + 0x24 + lVar9) = fVar15 * fVar12 * fVar14 - fVar16 * fVar11;
        *(float *)(lVar4 + 0x28 + lVar9) = fVar15 * fVar13;
        *(undefined4 *)(lVar4 + 0x2c + lVar9) = 0;
        FUN_14020db40(param_1,iVar8);
      }
    }
  }
  return;
}

