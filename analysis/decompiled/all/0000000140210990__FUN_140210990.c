// Function: FUN_140210990
// Addr: 140210990
// Size: 1152 bytes


void FUN_140210990(longlong param_1,undefined8 param_2,uint *param_3,undefined8 *param_4)

{
  char cVar1;
  float *pfVar2;
  longlong lVar3;
  char *pcVar4;
  longlong lVar5;
  char cVar6;
  int iVar7;
  longlong lVar8;
  ulonglong uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  undefined8 local_a8;
  float local_a0;
  float local_9c;
  
  lVar8 = *(longlong *)(param_1 + 0x4b8);
  if ((lVar8 != 0) && (*(longlong *)(lVar8 + 8) != 0)) {
    pfVar2 = (float *)param_4[1];
    local_a8 = (float *)param_4[2];
    if ((*param_3 & 8) == 0) {
      if ((*param_3 >> 9 & 1) != 0) {
        lVar3 = *(longlong *)(lVar8 + 0x38);
        uVar9 = (*(longlong *)(lVar8 + 0x40) - lVar3 >> 4) * -0x1111111111111111;
        if (uVar9 != 0) {
          iVar7 = 0;
          pcVar4 = (char *)*param_4;
          cVar1 = *pcVar4;
          do {
            if ((cVar1 == '\0') ||
               (cVar6 = FUN_14000d010((longlong)iVar7 * 0xf0 + lVar3,pcVar4), cVar6 != '\0')) {
              fVar10 = DAT_140492628;
              lVar5 = *(longlong *)(lVar8 + 0x3b8);
              if ((ulonglong)(longlong)iVar7 <
                  (ulonglong)((*(longlong *)(lVar8 + 0x3c0) - lVar5 >> 4) * -0x3333333333333333)) {
                lVar8 = (longlong)iVar7 * 0x50;
                *(float *)(lVar5 + 0x28 + lVar8) = *(float *)(lVar5 + 0x28 + lVar8) + *pfVar2;
                *(float *)(lVar5 + 0x2c + lVar8) = *(float *)(lVar5 + 0x2c + lVar8) + pfVar2[1];
                fVar11 = DAT_1404926c0;
                *(float *)(lVar5 + 0x30 + lVar8) = *(float *)(lVar5 + 0x30 + lVar8) + pfVar2[2];
                fVar14 = local_a8[2] * fVar10 * fVar11;
                fVar15 = *local_a8 * fVar10 * fVar11;
                fVar11 = local_a8[1] * fVar10 * fVar11;
                fVar10 = (float)FUN_14041a2e0(fVar14);
                fVar12 = (float)FUN_14041a2e0(fVar11);
                fVar13 = (float)FUN_14041a2e0(fVar15);
                fVar14 = (float)FUN_14041a9c0(fVar14);
                fVar11 = (float)FUN_14041a9c0(fVar11);
                fVar15 = (float)FUN_14041a9c0(fVar15);
                local_9c = fVar12 * fVar13 * fVar14 - fVar11 * fVar15 * fVar10;
                local_a0 = fVar15 * fVar12 * fVar14 + fVar11 * fVar13 * fVar10;
                local_a8 = (float *)CONCAT44(fVar15 * fVar12 * fVar10 - fVar11 * fVar13 * fVar14,
                                             fVar12 * fVar13 * fVar10 + fVar11 * fVar15 * fVar14);
                FUN_140215380(*(longlong *)(*(longlong *)(param_1 + 0x4b8) + 0x3b8) + lVar8,
                              &local_a8);
                return;
              }
            }
            iVar7 = iVar7 + 1;
          } while ((ulonglong)(longlong)iVar7 < uVar9);
        }
      }
    }
    else {
      iVar7 = *(int *)*param_4;
      if ((-1 < iVar7) &&
         (lVar3 = *(longlong *)(lVar8 + 0x3b8),
         (ulonglong)(longlong)iVar7 <
         (ulonglong)((*(longlong *)(lVar8 + 0x3c0) - lVar3 >> 4) * -0x3333333333333333))) {
        lVar8 = (longlong)iVar7 * 0x50;
        *(float *)(lVar3 + 0x28 + lVar8) = *(float *)(lVar3 + 0x28 + lVar8) + *pfVar2;
        *(float *)(lVar3 + 0x2c + lVar8) = pfVar2[1] + *(float *)(lVar3 + 0x2c + lVar8);
        fVar10 = DAT_140492628;
        *(float *)(lVar3 + 0x30 + lVar8) = pfVar2[2] + *(float *)(lVar3 + 0x30 + lVar8);
        fVar13 = local_a8[2] * fVar10 * DAT_1404926c0;
        fVar15 = *local_a8 * fVar10 * DAT_1404926c0;
        fVar14 = local_a8[1] * fVar10 * DAT_1404926c0;
        fVar10 = (float)FUN_14041a2e0(fVar13);
        fVar11 = (float)FUN_14041a2e0(fVar14);
        fVar12 = (float)FUN_14041a2e0(fVar15);
        fVar13 = (float)FUN_14041a9c0(fVar13);
        fVar14 = (float)FUN_14041a9c0(fVar14);
        fVar15 = (float)FUN_14041a9c0(fVar15);
        local_9c = fVar11 * fVar12 * fVar13 - fVar14 * fVar15 * fVar10;
        local_a0 = fVar15 * fVar11 * fVar13 + fVar14 * fVar12 * fVar10;
        local_a8 = (float *)CONCAT44(fVar15 * fVar11 * fVar10 - fVar14 * fVar12 * fVar13,
                                     fVar14 * fVar15 * fVar13 + fVar11 * fVar12 * fVar10);
        FUN_140215380(*(longlong *)(*(longlong *)(param_1 + 0x4b8) + 0x3b8) + lVar8,&local_a8);
      }
    }
  }
  return;
}

