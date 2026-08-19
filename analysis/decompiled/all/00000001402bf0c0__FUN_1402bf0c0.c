// Function: FUN_1402bf0c0
// Addr: 1402bf0c0
// Size: 29 bytes


undefined1 FUN_1402bf0c0(longlong param_1,int *param_2)

{
  int iVar1;
  undefined8 uVar2;
  int iVar3;
  longlong lVar4;
  longlong lVar5;
  int iVar6;
  undefined1 uVar7;
  int *piVar8;
  int iVar9;
  undefined1 uStackX_10;
  
  if (param_2 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_1402c98b4();
  }
  uVar7 = 0;
  iVar9 = 0;
  uStackX_10 = 0;
  if (0 < *param_2) {
    do {
      iVar6 = *(int *)(*(longlong *)(param_1 + 0x30) + 0xc);
      lVar4 = func_0x0001402bb640();
      piVar8 = (int *)((longlong)iVar6 + lVar4 + 4);
      iVar6 = *(int *)(*(longlong *)(param_1 + 0x30) + 0xc);
      lVar4 = func_0x0001402bb640();
      iVar6 = *(int *)(lVar4 + iVar6);
      if (0 < iVar6) {
        do {
          iVar3 = *piVar8;
          lVar4 = func_0x0001402bb640();
          uVar2 = *(undefined8 *)(param_1 + 0x30);
          iVar1 = param_2[1];
          lVar5 = func_0x0001402bb620();
          iVar3 = func_0x0001402bdb70(lVar5 + (longlong)iVar9 * 0x14 + (longlong)iVar1,iVar3 + lVar4
                                      ,uVar2);
          if (iVar3 != 0) {
            uStackX_10 = 1;
            uVar7 = 1;
            break;
          }
          iVar6 = iVar6 + -1;
          piVar8 = piVar8 + 1;
          uVar7 = uStackX_10;
        } while (0 < iVar6);
      }
      iVar9 = iVar9 + 1;
    } while (iVar9 < *param_2);
  }
  return uVar7;
}

