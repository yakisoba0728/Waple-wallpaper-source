// Function: FUN_1402e3f70
// Addr: 1402e3f70
// Size: 227 bytes


longlong FUN_1402e3f70(longlong *param_1)

{
  longlong *plVar1;
  int iVar2;
  longlong lVar3;
  undefined8 uVar4;
  longlong lVar5;
  longlong lVar6;
  longlong lVar8;
  longlong lVar7;
  
  if (param_1 == (longlong *)0x0) {
    lVar3 = 0;
  }
  else {
    lVar5 = 0;
    lVar3 = *param_1;
    plVar1 = param_1;
    while (lVar3 != 0) {
      lVar5 = lVar5 + 1;
      plVar1 = plVar1 + 1;
      lVar3 = *plVar1;
    }
    lVar3 = _calloc_base(lVar5 + 1,8);
    if (lVar3 == 0) {
LAB_1402e404f:
                    /* WARNING: Subroutine does not return */
      FUN_1402c97e4();
    }
    lVar5 = *param_1;
    if (lVar5 != 0) {
      lVar8 = lVar3 - (longlong)param_1;
      do {
        lVar6 = -1;
        do {
          lVar7 = lVar6;
          lVar6 = lVar7 + 1;
        } while (*(char *)(lVar5 + lVar6) != '\0');
        uVar4 = _calloc_base(lVar7 + 2,1);
        *(undefined8 *)(lVar8 + (longlong)param_1) = uVar4;
        FUN_1402d9040(0);
        if (*(longlong *)(lVar8 + (longlong)param_1) == 0) goto LAB_1402e404f;
        iVar2 = FUN_1402d8fc0();
        if (iVar2 != 0) {
                    /* WARNING: Subroutine does not return */
          _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
        }
        param_1 = param_1 + 1;
        lVar5 = *param_1;
      } while (lVar5 != 0);
    }
    FUN_1402d9040(0);
  }
  return lVar3;
}

