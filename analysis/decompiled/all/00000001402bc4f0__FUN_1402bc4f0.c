// Function: FUN_1402bc4f0
// Addr: 1402bc4f0
// Size: 434 bytes


ulonglong FUN_1402bc4f0(longlong param_1,longlong *param_2,uint *param_3,byte *param_4)

{
  uint uVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  ulonglong uVar5;
  
  uVar1 = param_3[1];
  if ((uVar1 != 0) && (lVar3 = func_0x0001402bb620(), lVar3 + (int)uVar1 != 0)) {
    uVar1 = param_3[1];
    if (uVar1 == 0) {
      lVar3 = 0;
    }
    else {
      lVar3 = func_0x0001402bb620();
      lVar3 = lVar3 + (int)uVar1;
    }
    uVar5 = 0;
    if ((*(char *)(lVar3 + 0x10) != '\0') && ((param_3[2] != 0 || ((int)*param_3 < 0)))) {
      uVar1 = *param_3;
      if (-1 < (int)uVar1) {
        param_2 = (longlong *)((longlong)(int)param_3[2] + *param_2);
      }
      if ((((char)uVar1 < '\0') && ((*param_4 & 0x10) != 0)) && (DAT_1404e4428 != 0)) {
        lVar3 = (*(code *)PTR_FUN_140426bb8)();
        if ((lVar3 == 0) || (param_2 == (longlong *)0x0)) {
                    /* WARNING: Subroutine does not return */
          FUN_1402c98b4();
        }
        *param_2 = lVar3;
        lVar3 = FUN_1402ba870(lVar3,param_4 + 8);
        *param_2 = lVar3;
      }
      else if ((uVar1 & 8) == 0) {
        if ((*param_4 & 1) != 0) {
          if ((*(longlong *)(param_1 + 0x28) != 0) && (param_2 != (longlong *)0x0)) {
                    /* WARNING: Subroutine does not return */
            FUN_1404211c0(param_2,*(longlong *)(param_1 + 0x28),(longlong)*(int *)(param_4 + 0x14));
          }
                    /* WARNING: Subroutine does not return */
          FUN_1402c98b4();
        }
        iVar2 = *(int *)(param_4 + 0x18);
        if (iVar2 != 0) {
          lVar3 = func_0x0001402bb640();
          uVar5 = lVar3 + iVar2;
        }
        lVar3 = *(longlong *)(param_1 + 0x28);
        if (uVar5 == 0) {
          if ((lVar3 != 0) && (param_2 != (longlong *)0x0)) {
            iVar2 = *(int *)(param_4 + 0x14);
            uVar4 = FUN_1402ba870(lVar3,param_4 + 8);
                    /* WARNING: Subroutine does not return */
            FUN_1404211c0(param_2,uVar4,(longlong)iVar2);
          }
                    /* WARNING: Subroutine does not return */
          FUN_1402c98b4();
        }
        if ((((lVar3 == 0) || (param_2 == (longlong *)0x0)) ||
            (iVar2 = *(int *)(param_4 + 0x18), iVar2 == 0)) ||
           (lVar3 = func_0x0001402bb640(), lVar3 + iVar2 == 0)) {
                    /* WARNING: Subroutine does not return */
          FUN_1402c98b4();
        }
        uVar5 = (ulonglong)(((*param_4 & 4) != 0) + 1);
      }
      else {
        lVar3 = *(longlong *)(param_1 + 0x28);
        if ((lVar3 == 0) || (param_2 == (longlong *)0x0)) {
                    /* WARNING: Subroutine does not return */
          FUN_1402c98b4();
        }
        *param_2 = lVar3;
        lVar3 = FUN_1402ba870(lVar3,param_4 + 8);
        *param_2 = lVar3;
      }
      return uVar5;
    }
  }
  return 0;
}

