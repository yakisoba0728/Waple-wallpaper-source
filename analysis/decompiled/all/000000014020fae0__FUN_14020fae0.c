// Function: FUN_14020fae0
// Addr: 14020fae0
// Size: 298 bytes


void FUN_14020fae0(longlong param_1,undefined8 param_2,uint *param_3,undefined8 *param_4)

{
  float fVar1;
  longlong lVar2;
  char *pcVar3;
  char cVar4;
  int iVar5;
  uint uVar6;
  longlong lVar7;
  ulonglong uVar8;
  undefined4 uVar9;
  float fVar10;
  
  lVar2 = *(longlong *)(param_1 + 0x4b8);
  if ((lVar2 != 0) && (*(longlong *)(lVar2 + 8) != 0)) {
    if ((*param_3 & 8) == 0) {
      if (((*param_3 >> 9 & 1) != 0) && (pcVar3 = (char *)*param_4, *pcVar3 != '\0')) {
        uVar8 = 0;
        lVar7 = *(longlong *)(lVar2 + 0x38);
        iVar5 = (int)(*(longlong *)(lVar2 + 0x40) - lVar7 >> 4) * -0x11111111;
        if (0 < iVar5) {
          do {
            cVar4 = FUN_14000d0e0(uVar8 * 0xf0 + lVar7,pcVar3);
            if (((cVar4 != '\0') &&
                (uVar8 < (ulonglong)
                         (*(longlong *)(lVar2 + 0x2d0) - *(longlong *)(lVar2 + 0x2c8) >> 6))) &&
               (*(longlong *)(lVar2 + 0x340) != 0)) {
              lVar2 = *(longlong *)(lVar2 + 0x310);
              lVar7 = uVar8 * 0x40;
              uVar9 = FUN_14041c530(*(undefined4 *)(lVar7 + 4 + lVar2),
                                    *(undefined4 *)(lVar7 + lVar2));
              fVar10 = *(float *)(lVar7 + 0x28 + lVar2);
              fVar1 = *(float *)(lVar7 + 0x18 + lVar2);
              fVar10 = fVar1 * fVar1 + fVar10 * fVar10;
              if (fVar10 < 0.0) {
                    /* WARNING: Subroutine does not return */
                FUN_14041ade0();
              }
              FUN_14041c530(*(uint *)(lVar7 + 8 + lVar2) ^ DAT_1404930c0,SQRT(fVar10));
                    /* WARNING: Subroutine does not return */
              FUN_14041aa90(uVar9);
            }
            uVar6 = (int)uVar8 + 1;
            uVar8 = (ulonglong)uVar6;
          } while ((int)uVar6 < iVar5);
        }
      }
    }
    else {
      iVar5 = *(int *)*param_4;
      if (((-1 < iVar5) &&
          ((ulonglong)(longlong)iVar5 <
           (ulonglong)(*(longlong *)(lVar2 + 0x2d0) - *(longlong *)(lVar2 + 0x2c8) >> 6))) &&
         (*(longlong *)(lVar2 + 0x340) != 0)) {
        lVar2 = *(longlong *)(lVar2 + 0x310);
        lVar7 = (longlong)iVar5 * 0x40;
        uVar9 = FUN_14041c530(*(undefined4 *)(lVar7 + 4 + lVar2),*(undefined4 *)(lVar7 + lVar2));
        fVar10 = *(float *)(lVar7 + 0x28 + lVar2);
        fVar1 = *(float *)(lVar7 + 0x18 + lVar2);
        fVar10 = fVar1 * fVar1 + fVar10 * fVar10;
        if (fVar10 < 0.0) {
                    /* WARNING: Subroutine does not return */
          FUN_14041ade0();
        }
        FUN_14041c530(*(uint *)(lVar7 + 8 + lVar2) ^ DAT_1404930c0,SQRT(fVar10));
                    /* WARNING: Subroutine does not return */
        FUN_14041aa90(uVar9);
      }
    }
  }
  return;
}

