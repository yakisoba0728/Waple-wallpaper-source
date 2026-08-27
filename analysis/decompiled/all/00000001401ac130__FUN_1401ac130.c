// Function: FUN_1401ac130
// Addr: 1401ac130
// Size: 629 bytes


void FUN_1401ac130(undefined8 *param_1,ulonglong param_2,uint param_3)

{
  uint *puVar1;
  longlong lVar2;
  int iVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  uint *puVar7;
  int iVar8;
  int iVar9;
  ulonglong uVar10;
  float fVar11;
  float fVar12;
  
  lVar6 = (longlong)(int)param_3;
  lVar4 = *(longlong *)ThreadLocalStoragePointer;
  **(undefined4 **)(lVar4 + 0x288) = 0;
  puVar1 = (uint *)*param_1;
  puVar7 = *(uint **)(lVar4 + 0x270);
  *puVar7 = *puVar1 ^ DAT_140492ff0;
  puVar7[1] = *puVar1;
  if ((int)param_3 < 2) {
    if ((int)param_3 < 1) {
      return;
    }
  }
  else {
    iVar9 = 0;
    uVar10 = 1;
    do {
      lVar2 = *(longlong *)(lVar4 + 0x288);
      iVar3 = (int)uVar10;
      iVar8 = *(int *)(lVar2 + (longlong)iVar9 * 4);
      fVar12 = (float)iVar3 * (float)iVar3 + *(float *)(param_2 + uVar10 * 4);
      fVar11 = (fVar12 - ((float)iVar8 * (float)iVar8 + *(float *)(param_2 + (longlong)iVar8 * 4)))
               / (float)((iVar3 - iVar8) * 2);
      iVar8 = iVar9;
      if (fVar11 < (float)puVar7[iVar9] || fVar11 == (float)puVar7[iVar9]) {
        do {
          iVar8 = iVar9 + -1;
          iVar9 = *(int *)(lVar2 + (longlong)iVar8 * 4);
          fVar11 = (fVar12 - ((float)iVar9 * (float)iVar9 +
                             *(float *)(param_2 + (longlong)iVar9 * 4))) /
                   (float)((iVar3 - iVar9) * 2);
          iVar9 = iVar8;
        } while (fVar11 < (float)puVar7[iVar8] || fVar11 == (float)puVar7[iVar8]);
      }
      iVar9 = iVar8 + 1;
      *(int *)(lVar2 + (longlong)iVar9 * 4) = iVar3;
      uVar10 = (ulonglong)(iVar3 + 1U);
      puVar7 = *(uint **)(lVar4 + 0x270);
      puVar1 = (uint *)*param_1;
      puVar7[iVar9] = (uint)fVar11;
      puVar7[iVar8 + 2] = *puVar1;
    } while ((int)(iVar3 + 1U) < (int)param_3);
  }
  lVar2 = *(longlong *)(lVar4 + 0x288);
  iVar9 = 0;
  iVar8 = 0;
  uVar10 = *(ulonglong *)(lVar4 + 600);
  do {
    fVar11 = (float)iVar8;
    if ((float)puVar7[(longlong)iVar9 + 1] <= fVar11 && fVar11 != (float)puVar7[(longlong)iVar9 + 1]
       ) {
      do {
        iVar5 = iVar9 + 1;
        iVar3 = iVar9 + 2;
        iVar9 = iVar5;
      } while ((float)puVar7[iVar3] <= fVar11 && fVar11 != (float)puVar7[iVar3]);
    }
    iVar3 = *(int *)(lVar2 + (longlong)iVar9 * 4);
    iVar5 = iVar8 - iVar3;
    lVar4 = (longlong)iVar8;
    iVar8 = iVar8 + 1;
    *(float *)(uVar10 + lVar4 * 4) =
         (float)(iVar5 * iVar5) + *(float *)(param_2 + (longlong)iVar3 * 4);
  } while (iVar8 < (int)param_3);
  if (0 < (int)param_3) {
    iVar9 = 0;
    if ((param_3 < 4) ||
       ((param_2 <= uVar10 + (lVar6 + -1) * 4 && (uVar10 <= (param_2 - 4) + lVar6 * 4)))) {
      if (3 < (int)param_3) {
        do {
          lVar4 = (longlong)iVar9;
          iVar9 = iVar9 + 4;
          *(undefined4 *)(param_2 + lVar4 * 4) = *(undefined4 *)(uVar10 + lVar4 * 4);
          *(undefined4 *)(param_2 + 4 + lVar4 * 4) = *(undefined4 *)(uVar10 + 4 + lVar4 * 4);
          *(undefined4 *)(param_2 + 8 + lVar4 * 4) = *(undefined4 *)(uVar10 + 8 + lVar4 * 4);
          *(undefined4 *)(param_2 + 0xc + lVar4 * 4) = *(undefined4 *)(uVar10 + 0xc + lVar4 * 4);
        } while (iVar9 < (int)(param_3 - 3));
        if ((int)param_3 <= iVar9) {
          return;
        }
      }
      do {
        lVar4 = (longlong)iVar9;
        iVar9 = iVar9 + 1;
        *(undefined4 *)(param_2 + lVar4 * 4) = *(undefined4 *)(uVar10 + lVar4 * 4);
      } while (iVar9 < (int)param_3);
    }
    else {
      FUN_1404210f0(param_2,uVar10,lVar6 << 2);
    }
  }
  return;
}

