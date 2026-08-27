// Function: FUN_1401e3e30
// Addr: 1401e3e30
// Size: 452 bytes


void FUN_1401e3e30(undefined8 param_1,ulonglong param_2)

{
  int *piVar1;
  longlong lVar2;
  ulonglong uVar3;
  longlong lVar4;
  int iVar5;
  longlong lVar6;
  ulonglong uVar7;
  longlong lVar8;
  
  lVar4 = DAT_1404e8ee8;
  iVar5 = FUN_140290d80(&DAT_1404dfb40);
  if (iVar5 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(5);
  }
  if (DAT_1404dfb8c == 0x7fffffff) {
    DAT_1404dfb8c = 0x7ffffffe;
                    /* WARNING: Subroutine does not return */
    FUN_140290d30(6);
  }
  piVar1 = (int *)(param_2 + 0x80);
  *piVar1 = *piVar1 + -1;
  if (*piVar1 == 0) {
    lVar2 = *(longlong *)(lVar4 + 0x30);
    uVar7 = *(ulonglong *)(lVar4 + 0x58) &
            ((((((((param_2 & 0xff ^ 0xcbf29ce484222325) * 0x100000001b3 ^ param_2 >> 8 & 0xff) *
                  0x100000001b3 ^ param_2 >> 0x10 & 0xff) * 0x100000001b3 ^ param_2 >> 0x18 & 0xff)
                * 0x100000001b3 ^ param_2 >> 0x20 & 0xff) * 0x100000001b3 ^ param_2 >> 0x28 & 0xff)
              * 0x100000001b3 ^ param_2 >> 0x30 & 0xff) * 0x100000001b3 ^ param_2 >> 0x38) *
            0x100000001b3;
    lVar6 = *(longlong *)(*(longlong *)(lVar4 + 0x40) + 8 + uVar7 * 0x10);
    if (lVar6 != lVar2) {
      uVar3 = *(ulonglong *)(lVar6 + 0x10);
      while (param_2 != uVar3) {
        if (lVar6 == *(longlong *)(*(longlong *)(lVar4 + 0x40) + uVar7 * 0x10)) goto LAB_1401e3f5d;
        lVar6 = *(longlong *)(lVar6 + 8);
        uVar3 = *(ulonglong *)(lVar6 + 0x10);
      }
      if (lVar6 == 0) {
        lVar6 = lVar2;
      }
      if (lVar6 != lVar2) {
        FUN_1401e4000(lVar4);
        goto LAB_1401e3fc4;
      }
    }
LAB_1401e3f5d:
    lVar2 = *(longlong *)(lVar4 + 0x18);
    lVar6 = thunk_FUN_14028d250(*(undefined8 *)(lVar4 + 0x10),lVar2,param_2);
    if ((lVar6 != lVar2) && (lVar6 = FUN_14028f140(lVar6,lVar2,param_2), lVar6 != lVar2)) {
      lVar8 = *(longlong *)(lVar4 + 0x18) - lVar2;
      FUN_1404210f0(lVar6,lVar2,lVar8);
      *(longlong *)(lVar4 + 0x18) = lVar6 + lVar8;
    }
    FUN_1401e28f0(param_2);
  }
LAB_1401e3fc4:
  FUN_140290ea0(&DAT_1404dfb40);
  return;
}

