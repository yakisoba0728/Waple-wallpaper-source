// Function: FUN_14020f6b0
// Addr: 14020f6b0
// Size: 387 bytes


void FUN_14020f6b0(longlong param_1,undefined8 param_2,uint *param_3,undefined8 *param_4,
                  undefined8 *param_5)

{
  undefined8 *puVar1;
  longlong lVar2;
  char *pcVar3;
  undefined8 uVar4;
  char cVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  
  lVar2 = *(longlong *)(param_1 + 0x4b8);
  if ((lVar2 != 0) && (*(longlong *)(lVar2 + 8) != 0)) {
    if ((*param_3 & 8) == 0) {
      if (((*param_3 >> 9 & 1) != 0) && (pcVar3 = (char *)*param_4, *pcVar3 != '\0')) {
        uVar9 = 0;
        lVar6 = *(longlong *)(lVar2 + 0x38);
        iVar7 = (int)(*(longlong *)(lVar2 + 0x40) - lVar6 >> 4) * -0x11111111;
        if (0 < iVar7) {
          do {
            cVar5 = FUN_14000d010(uVar9 * 0xf0 + lVar6,pcVar3);
            if (((cVar5 != '\0') &&
                (uVar9 < (ulonglong)
                         (*(longlong *)(lVar2 + 0x2d0) - *(longlong *)(lVar2 + 0x2c8) >> 6))) &&
               (*(longlong *)(lVar2 + 0x340) != 0)) {
              lVar2 = *(longlong *)(lVar2 + 0x310);
              lVar6 = uVar9 * 0x40;
              uVar4 = ((undefined8 *)(lVar6 + lVar2))[1];
              *param_5 = *(undefined8 *)(lVar6 + lVar2);
              param_5[1] = uVar4;
              puVar1 = (undefined8 *)(lVar6 + 0x10 + lVar2);
              uVar4 = puVar1[1];
              param_5[2] = *puVar1;
              param_5[3] = uVar4;
              puVar1 = (undefined8 *)(lVar6 + 0x20 + lVar2);
              uVar4 = puVar1[1];
              param_5[4] = *puVar1;
              param_5[5] = uVar4;
              puVar1 = (undefined8 *)(lVar6 + 0x30 + lVar2);
              uVar4 = puVar1[1];
              param_5[6] = *puVar1;
              param_5[7] = uVar4;
              return;
            }
            uVar8 = (int)uVar9 + 1;
            uVar9 = (ulonglong)uVar8;
          } while ((int)uVar8 < iVar7);
        }
      }
    }
    else {
      iVar7 = *(int *)*param_4;
      if (((-1 < iVar7) &&
          ((ulonglong)(longlong)iVar7 <
           (ulonglong)(*(longlong *)(lVar2 + 0x2d0) - *(longlong *)(lVar2 + 0x2c8) >> 6))) &&
         (*(longlong *)(lVar2 + 0x340) != 0)) {
        lVar2 = *(longlong *)(lVar2 + 0x310);
        lVar6 = (longlong)iVar7 * 0x40;
        uVar4 = ((undefined8 *)(lVar6 + lVar2))[1];
        *param_5 = *(undefined8 *)(lVar6 + lVar2);
        param_5[1] = uVar4;
        puVar1 = (undefined8 *)(lVar6 + 0x10 + lVar2);
        uVar4 = puVar1[1];
        param_5[2] = *puVar1;
        param_5[3] = uVar4;
        puVar1 = (undefined8 *)(lVar6 + 0x20 + lVar2);
        uVar4 = puVar1[1];
        param_5[4] = *puVar1;
        param_5[5] = uVar4;
        puVar1 = (undefined8 *)(lVar6 + 0x30 + lVar2);
        uVar4 = puVar1[1];
        param_5[6] = *puVar1;
        param_5[7] = uVar4;
        return;
      }
    }
  }
  return;
}

