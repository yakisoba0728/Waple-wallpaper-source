// Function: FUN_14020fdb0
// Addr: 14020fdb0
// Size: 428 bytes


void FUN_14020fdb0(longlong param_1,undefined8 param_2,uint *param_3,undefined8 *param_4)

{
  undefined4 uVar1;
  longlong lVar2;
  char *pcVar3;
  longlong lVar4;
  char cVar5;
  int iVar6;
  uint uVar7;
  ulonglong uVar8;
  
  lVar2 = *(longlong *)(param_1 + 0x4b8);
  if ((lVar2 != 0) && (*(longlong *)(lVar2 + 8) != 0)) {
    uVar1 = *(undefined4 *)(param_4[1] + 8);
    if ((*param_3 & 8) == 0) {
      if (((*param_3 >> 9 & 1) != 0) && (pcVar3 = (char *)*param_4, *pcVar3 != '\0')) {
        uVar8 = 0;
        lVar4 = *(longlong *)(lVar2 + 0x38);
        iVar6 = (int)(*(longlong *)(lVar2 + 0x40) - lVar4 >> 4) * -0x11111111;
        if (0 < iVar6) {
          do {
            cVar5 = FUN_14000d0e0(uVar8 * 0xf0 + lVar4,pcVar3);
            if (((cVar5 != '\0') &&
                (uVar8 < (ulonglong)
                         (*(longlong *)(lVar2 + 0x2d0) - *(longlong *)(lVar2 + 0x2c8) >> 6))) &&
               (*(longlong *)(lVar2 + 0x340) != 0)) {
              FUN_14041a3b0(uVar1);
                    /* WARNING: Subroutine does not return */
              FUN_14041aa90(uVar1);
            }
            uVar7 = (int)uVar8 + 1;
            uVar8 = (ulonglong)uVar7;
          } while ((int)uVar7 < iVar6);
        }
      }
    }
    else if (((-1 < *(int *)*param_4) &&
             ((ulonglong)(longlong)*(int *)*param_4 <
              (ulonglong)(*(longlong *)(lVar2 + 0x2d0) - *(longlong *)(lVar2 + 0x2c8) >> 6))) &&
            (*(longlong *)(lVar2 + 0x340) != 0)) {
      FUN_14041a3b0(uVar1);
                    /* WARNING: Subroutine does not return */
      FUN_14041aa90(uVar1);
    }
  }
  return;
}

