// Function: FUN_140210250
// Addr: 140210250
// Size: 432 bytes


void FUN_140210250(longlong param_1,undefined8 param_2,uint *param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  longlong lVar4;
  undefined4 *puVar5;
  char *pcVar6;
  char cVar7;
  longlong lVar8;
  int iVar9;
  uint uVar10;
  ulonglong uVar11;
  
  lVar4 = *(longlong *)(param_1 + 0x4b8);
  if ((lVar4 != 0) && (*(longlong *)(lVar4 + 8) != 0)) {
    puVar5 = (undefined4 *)param_4[1];
    uVar1 = *puVar5;
    uVar2 = puVar5[1];
    uVar3 = puVar5[2];
    if ((*param_3 & 8) == 0) {
      if (((*param_3 >> 9 & 1) != 0) && (pcVar6 = (char *)*param_4, *pcVar6 != '\0')) {
        uVar11 = 0;
        lVar8 = *(longlong *)(lVar4 + 0x38);
        iVar9 = (int)(*(longlong *)(lVar4 + 0x40) - lVar8 >> 4) * -0x11111111;
        if (0 < iVar9) {
          do {
            cVar7 = FUN_14000d010(uVar11 * 0xf0 + lVar8,pcVar6);
            if (((cVar7 != '\0') &&
                (uVar11 < (ulonglong)
                          (*(longlong *)(lVar4 + 0x2d0) - *(longlong *)(lVar4 + 0x2c8) >> 6))) &&
               (*(longlong *)(lVar4 + 0x340) != 0)) {
              lVar4 = *(longlong *)(lVar4 + 0x310);
              lVar8 = uVar11 * 0x40;
              *(undefined4 *)(lVar8 + 0x30 + lVar4) = uVar1;
              *(undefined4 *)(lVar8 + 0x34 + lVar4) = uVar2;
              *(undefined4 *)(lVar8 + 0x38 + lVar4) = uVar3;
              FUN_14020db40(param_1,uVar11);
              return;
            }
            uVar10 = (int)uVar11 + 1;
            uVar11 = (ulonglong)uVar10;
          } while ((int)uVar10 < iVar9);
        }
      }
    }
    else {
      iVar9 = *(int *)*param_4;
      if (((-1 < iVar9) &&
          ((ulonglong)(longlong)iVar9 <
           (ulonglong)(*(longlong *)(lVar4 + 0x2d0) - *(longlong *)(lVar4 + 0x2c8) >> 6))) &&
         (*(longlong *)(lVar4 + 0x340) != 0)) {
        lVar4 = *(longlong *)(lVar4 + 0x310);
        lVar8 = (longlong)iVar9 * 0x40;
        *(undefined4 *)(lVar4 + 0x30 + lVar8) = uVar1;
        *(undefined4 *)(lVar4 + 0x34 + lVar8) = uVar2;
        *(undefined4 *)(lVar4 + 0x38 + lVar8) = uVar3;
        FUN_14020db40(param_1);
      }
    }
  }
  return;
}

