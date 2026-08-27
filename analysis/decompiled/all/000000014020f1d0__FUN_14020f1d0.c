// Function: FUN_14020f1d0
// Addr: 14020f1d0
// Size: 381 bytes


void FUN_14020f1d0(longlong param_1,undefined8 param_2,uint *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined8 *puVar1;
  char *pcVar2;
  longlong lVar3;
  undefined8 uVar4;
  char cVar5;
  longlong lVar6;
  int iVar7;
  longlong lVar8;
  uint uVar9;
  ulonglong uVar10;
  
  lVar8 = *(longlong *)(param_1 + 0x4b8);
  if ((lVar8 != 0) && (*(longlong *)(lVar8 + 8) != 0)) {
    if ((*param_3 & 8) == 0) {
      if (((*param_3 >> 9 & 1) != 0) && (pcVar2 = (char *)*param_4, *pcVar2 != '\0')) {
        uVar10 = 0;
        lVar6 = *(longlong *)(lVar8 + 0x38);
        iVar7 = (int)(*(longlong *)(lVar8 + 0x40) - lVar6 >> 4) * -0x11111111;
        if (0 < iVar7) {
          do {
            cVar5 = FUN_14000d010(uVar10 * 0xf0 + lVar6,pcVar2);
            if (((cVar5 != '\0') &&
                (uVar10 < (ulonglong)
                          (*(longlong *)(lVar8 + 0x2d0) - *(longlong *)(lVar8 + 0x2c8) >> 6))) &&
               (lVar3 = *(longlong *)(lVar8 + 0x340), lVar3 != 0)) {
              lVar8 = uVar10 * 0x40;
              uVar4 = ((undefined8 *)(lVar3 + lVar8))[1];
              *param_5 = *(undefined8 *)(lVar3 + lVar8);
              param_5[1] = uVar4;
              puVar1 = (undefined8 *)(lVar3 + 0x10 + lVar8);
              uVar4 = puVar1[1];
              param_5[2] = *puVar1;
              param_5[3] = uVar4;
              puVar1 = (undefined8 *)(lVar3 + 0x20 + lVar8);
              uVar4 = puVar1[1];
              param_5[4] = *puVar1;
              param_5[5] = uVar4;
              puVar1 = (undefined8 *)(lVar3 + 0x30 + lVar8);
              uVar4 = puVar1[1];
              param_5[6] = *puVar1;
              param_5[7] = uVar4;
              return;
            }
            uVar9 = (int)uVar10 + 1;
            uVar10 = (ulonglong)uVar9;
          } while ((int)uVar9 < iVar7);
        }
      }
    }
    else {
      iVar7 = *(int *)*param_4;
      if (((-1 < iVar7) &&
          ((ulonglong)(longlong)iVar7 <
           (ulonglong)(*(longlong *)(lVar8 + 0x2d0) - *(longlong *)(lVar8 + 0x2c8) >> 6))) &&
         (lVar8 = *(longlong *)(lVar8 + 0x340), lVar8 != 0)) {
        lVar6 = (longlong)iVar7 * 0x40;
        uVar4 = ((undefined8 *)(lVar8 + lVar6))[1];
        *param_5 = *(undefined8 *)(lVar8 + lVar6);
        param_5[1] = uVar4;
        puVar1 = (undefined8 *)(lVar8 + 0x10 + lVar6);
        uVar4 = puVar1[1];
        param_5[2] = *puVar1;
        param_5[3] = uVar4;
        puVar1 = (undefined8 *)(lVar8 + 0x20 + lVar6);
        uVar4 = puVar1[1];
        param_5[4] = *puVar1;
        param_5[5] = uVar4;
        puVar1 = (undefined8 *)(lVar8 + 0x30 + lVar6);
        uVar4 = puVar1[1];
        param_5[6] = *puVar1;
        param_5[7] = uVar4;
        return;
      }
    }
  }
  return;
}

