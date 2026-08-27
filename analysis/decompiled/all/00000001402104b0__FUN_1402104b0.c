// Function: FUN_1402104b0
// Addr: 1402104b0
// Size: 272 bytes


void FUN_1402104b0(longlong param_1,undefined8 param_2,uint *param_3,undefined8 *param_4,
                  undefined4 *param_5)

{
  longlong lVar1;
  char *pcVar2;
  longlong lVar3;
  int iVar4;
  uint uVar5;
  ulonglong uVar6;
  int iVar7;
  
  lVar1 = *(longlong *)(param_1 + 0x4b8);
  if ((lVar1 != 0) && (*(longlong *)(lVar1 + 8) != 0)) {
    if ((*param_3 & 8) == 0) {
      if (((*param_3 >> 9 & 1) != 0) && (pcVar2 = (char *)*param_4, *pcVar2 != '\0')) {
        uVar6 = 0;
        lVar1 = *(longlong *)(lVar1 + 0x18);
        iVar7 = (int)(*(longlong *)(lVar1 + 0x70) - *(longlong *)(lVar1 + 0x68) >> 6);
        if (0 < iVar7) {
          do {
            lVar3 = *(longlong *)(*(longlong *)(lVar1 + 0x68) + 8 + uVar6 * 0x40);
            if ((lVar3 != 0) && (iVar4 = FUN_1402c10d0(lVar3,pcVar2), iVar4 == 0)) {
              *param_5 = *(undefined4 *)
                          (*(longlong *)(*(longlong *)(param_1 + 0x4b8) + 0x3a0) + uVar6 * 4);
              return;
            }
            uVar5 = (int)uVar6 + 1;
            uVar6 = (ulonglong)uVar5;
          } while ((int)uVar5 < iVar7);
        }
      }
    }
    else {
      iVar7 = *(int *)*param_4;
      if ((-1 < iVar7) &&
         ((ulonglong)(longlong)iVar7 <
          (ulonglong)(*(longlong *)(lVar1 + 0x3a8) - *(longlong *)(lVar1 + 0x3a0) >> 2))) {
        *param_5 = *(undefined4 *)(*(longlong *)(lVar1 + 0x3a0) + (longlong)iVar7 * 4);
        return;
      }
    }
  }
  return;
}

