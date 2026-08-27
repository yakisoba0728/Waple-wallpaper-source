// Function: FUN_1402bc600
// Addr: 1402bc600
// Size: 474 bytes


ulonglong FUN_1402bc600(longlong param_1,longlong *param_2,longlong param_3,byte *param_4)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  
  iVar1 = *(int *)(param_3 + 8);
  if ((iVar1 != 0) && (lVar3 = FUN_1402bb550(), lVar3 + iVar1 != 0)) {
    iVar1 = *(int *)(param_3 + 8);
    if (iVar1 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = FUN_1402bb550();
      lVar3 = lVar3 + iVar1;
    }
    uVar6 = 0;
    if ((*(char *)(lVar3 + 0x10) != '\0') &&
       ((*(uint *)(param_3 + 0xc) != 0 || (*(int *)(param_3 + 4) < 0)))) {
      uVar2 = *(uint *)(param_3 + 4);
      if (-1 < (int)uVar2) {
        param_2 = (longlong *)((ulonglong)*(uint *)(param_3 + 0xc) + *param_2);
      }
      if ((((char)uVar2 < '\0') && ((*param_4 & 0x10) != 0)) && (DAT_1404e4358 != 0)) {
        lVar3 = (*(code *)PTR__guard_dispatch_icall_140426ae8)();
        if ((lVar3 == 0) || (param_2 == (longlong *)0x0)) {
                    /* WARNING: Subroutine does not return */
          FUN_1402c97e4();
        }
        *param_2 = lVar3;
        lVar3 = FUN_1402ba7a0(lVar3,param_4 + 8);
        *param_2 = lVar3;
      }
      else if ((uVar2 & 8) == 0) {
        if ((*param_4 & 1) == 0) {
          iVar1 = *(int *)(param_4 + 0x18);
          uVar5 = uVar6;
          if (iVar1 != 0) {
            lVar3 = FUN_1402bb570();
            uVar5 = lVar3 + iVar1;
          }
          lVar3 = *(longlong *)(param_1 + 0x28);
          if (uVar5 == 0) {
            if ((lVar3 == 0) || (param_2 == (longlong *)0x0)) {
                    /* WARNING: Subroutine does not return */
              FUN_1402c97e4();
            }
            iVar1 = *(int *)(param_4 + 0x14);
            uVar4 = FUN_1402ba7a0(lVar3,param_4 + 8);
            FUN_1404210f0(param_2,uVar4,(longlong)iVar1);
          }
          else {
            if (((lVar3 == 0) || (param_2 == (longlong *)0x0)) ||
               ((iVar1 = *(int *)(param_4 + 0x18), iVar1 == 0 ||
                (lVar3 = FUN_1402bb570(), lVar3 + iVar1 == 0)))) {
                    /* WARNING: Subroutine does not return */
              FUN_1402c97e4();
            }
            uVar6 = (ulonglong)(((*param_4 & 4) != 0) + 1);
          }
        }
        else {
          if ((*(longlong *)(param_1 + 0x28) == 0) || (param_2 == (longlong *)0x0)) {
                    /* WARNING: Subroutine does not return */
            FUN_1402c97e4();
          }
          FUN_1404210f0(param_2,*(longlong *)(param_1 + 0x28),(longlong)*(int *)(param_4 + 0x14));
          if ((*(int *)(param_4 + 0x14) == 8) && (*param_2 != 0)) {
            lVar3 = FUN_1402ba7a0(*param_2,param_4 + 8);
            *param_2 = lVar3;
          }
        }
      }
      else {
        lVar3 = *(longlong *)(param_1 + 0x28);
        if ((lVar3 == 0) || (param_2 == (longlong *)0x0)) {
                    /* WARNING: Subroutine does not return */
          FUN_1402c97e4();
        }
        *param_2 = lVar3;
        lVar3 = FUN_1402ba7a0(lVar3,param_4 + 8);
        *param_2 = lVar3;
      }
      return uVar6;
    }
  }
  return 0;
}

