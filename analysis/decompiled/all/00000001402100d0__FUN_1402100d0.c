// Function: FUN_1402100d0
// Addr: 1402100d0
// Size: 380 bytes


void FUN_1402100d0(longlong param_1,undefined8 param_2,uint *param_3,undefined8 *param_4,
                  undefined4 *param_5)

{
  undefined4 uVar1;
  undefined4 uVar2;
  longlong lVar3;
  char *pcVar4;
  char cVar5;
  longlong lVar6;
  int iVar7;
  uint uVar8;
  ulonglong uVar9;
  
  lVar3 = *(longlong *)(param_1 + 0x4b8);
  if ((lVar3 != 0) && (*(longlong *)(lVar3 + 8) != 0)) {
    if ((*param_3 & 8) == 0) {
      if (((*param_3 >> 9 & 1) != 0) && (pcVar4 = (char *)*param_4, *pcVar4 != '\0')) {
        uVar9 = 0;
        lVar6 = *(longlong *)(lVar3 + 0x38);
        iVar7 = (int)(*(longlong *)(lVar3 + 0x40) - lVar6 >> 4) * -0x11111111;
        if (0 < iVar7) {
          do {
            cVar5 = FUN_14000d010(uVar9 * 0xf0 + lVar6,pcVar4);
            if (((cVar5 != '\0') &&
                (uVar9 < (ulonglong)
                         (*(longlong *)(lVar3 + 0x2d0) - *(longlong *)(lVar3 + 0x2c8) >> 6))) &&
               (*(longlong *)(lVar3 + 0x340) != 0)) {
              lVar3 = *(longlong *)(lVar3 + 0x310);
              lVar6 = uVar9 * 0x40;
              uVar1 = *(undefined4 *)(lVar6 + 0x38 + lVar3);
              uVar2 = *(undefined4 *)(lVar6 + 0x30 + lVar3);
              param_5[1] = *(undefined4 *)(lVar6 + 0x34 + lVar3);
              param_5[2] = uVar1;
              *param_5 = uVar2;
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
           (ulonglong)(*(longlong *)(lVar3 + 0x2d0) - *(longlong *)(lVar3 + 0x2c8) >> 6))) &&
         (*(longlong *)(lVar3 + 0x340) != 0)) {
        lVar3 = *(longlong *)(lVar3 + 0x310);
        lVar6 = (longlong)iVar7 * 0x40;
        uVar1 = *(undefined4 *)(lVar6 + 0x38 + lVar3);
        uVar2 = *(undefined4 *)(lVar6 + 0x30 + lVar3);
        param_5[1] = *(undefined4 *)(lVar6 + 0x34 + lVar3);
        param_5[2] = uVar1;
        *param_5 = uVar2;
        return;
      }
    }
  }
  return;
}

