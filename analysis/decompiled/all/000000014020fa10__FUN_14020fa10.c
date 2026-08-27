// Function: FUN_14020fa10
// Addr: 14020fa10
// Size: 709 bytes


void FUN_14020fa10(longlong param_1,undefined8 param_2,uint *param_3,undefined8 *param_4,
                  undefined4 *param_5)

{
  longlong lVar1;
  char *pcVar2;
  char cVar3;
  int iVar4;
  longlong lVar5;
  ulonglong uVar6;
  undefined4 uVar7;
  float fVar8;
  undefined4 uVar9;
  float fVar10;
  undefined4 uVar11;
  uint uVar12;
  
  lVar1 = *(longlong *)(param_1 + 0x4b8);
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 8) != 0)) {
    if ((*param_3 & 8) == 0) {
      if (((*param_3 >> 9 & 1) != 0) && (pcVar2 = (char *)*param_4, *pcVar2 != '\0')) {
        uVar6 = 0;
        lVar5 = *(longlong *)(lVar1 + 0x38);
        iVar4 = (int)(*(longlong *)(lVar1 + 0x40) - lVar5 >> 4) * -0x11111111;
        if (0 < iVar4) {
          do {
            cVar3 = FUN_14000d010(uVar6 * 0xf0 + lVar5,pcVar2);
            if (((cVar3 != '\0') &&
                (uVar6 < (ulonglong)
                         (*(longlong *)(lVar1 + 0x2d0) - *(longlong *)(lVar1 + 0x2c8) >> 6))) &&
               (*(longlong *)(lVar1 + 0x340) != 0)) {
              lVar1 = *(longlong *)(lVar1 + 0x310);
              lVar5 = uVar6 * 0x40;
              uVar7 = FUN_14041c460(*(undefined4 *)(lVar5 + 4 + lVar1),
                                    *(undefined4 *)(lVar5 + lVar1));
              fVar8 = *(float *)(lVar5 + 0x28 + lVar1);
              fVar10 = *(float *)(lVar5 + 0x18 + lVar1);
              uVar12 = *(uint *)(lVar5 + 8 + lVar1) ^ DAT_140492ff0;
              fVar8 = fVar10 * fVar10 + fVar8 * fVar8;
              if (fVar8 < 0.0) {
                fVar8 = (float)FUN_14041ad10();
              }
              else {
                fVar8 = SQRT(fVar8);
              }
              uVar9 = FUN_14041c460(uVar12,fVar8);
              fVar8 = (float)FUN_14041a9c0(uVar7);
              fVar10 = (float)FUN_14041a2e0(uVar7);
              uVar11 = FUN_14041c460(fVar8 * *(float *)(lVar5 + 0x20 + lVar1) -
                                     fVar10 * *(float *)(lVar5 + 0x24 + lVar1),
                                     fVar10 * *(float *)(lVar5 + 0x14 + lVar1) -
                                     fVar8 * *(float *)(lVar5 + 0x10 + lVar1));
              *param_5 = uVar11;
              param_5[1] = uVar9;
              param_5[2] = uVar7;
              return;
            }
            uVar12 = (int)uVar6 + 1;
            uVar6 = (ulonglong)uVar12;
          } while ((int)uVar12 < iVar4);
        }
      }
    }
    else {
      iVar4 = *(int *)*param_4;
      if (((-1 < iVar4) &&
          ((ulonglong)(longlong)iVar4 <
           (ulonglong)(*(longlong *)(lVar1 + 0x2d0) - *(longlong *)(lVar1 + 0x2c8) >> 6))) &&
         (*(longlong *)(lVar1 + 0x340) != 0)) {
        lVar1 = *(longlong *)(lVar1 + 0x310);
        lVar5 = (longlong)iVar4 * 0x40;
        uVar7 = FUN_14041c460(*(undefined4 *)(lVar5 + 4 + lVar1),*(undefined4 *)(lVar5 + lVar1));
        fVar8 = *(float *)(lVar5 + 0x28 + lVar1);
        fVar10 = *(float *)(lVar5 + 0x18 + lVar1);
        uVar12 = *(uint *)(lVar5 + 8 + lVar1) ^ DAT_140492ff0;
        fVar8 = fVar10 * fVar10 + fVar8 * fVar8;
        if (fVar8 < 0.0) {
          fVar8 = (float)FUN_14041ad10();
        }
        else {
          fVar8 = SQRT(fVar8);
        }
        uVar9 = FUN_14041c460(uVar12,fVar8);
        fVar8 = (float)FUN_14041a9c0(uVar7);
        fVar10 = (float)FUN_14041a2e0(uVar7);
        uVar11 = FUN_14041c460(fVar8 * *(float *)(lVar5 + 0x20 + lVar1) -
                               fVar10 * *(float *)(lVar5 + 0x24 + lVar1),
                               fVar10 * *(float *)(lVar5 + 0x14 + lVar1) -
                               fVar8 * *(float *)(lVar5 + 0x10 + lVar1));
        *param_5 = uVar11;
        param_5[1] = uVar9;
        param_5[2] = uVar7;
      }
    }
  }
  return;
}

