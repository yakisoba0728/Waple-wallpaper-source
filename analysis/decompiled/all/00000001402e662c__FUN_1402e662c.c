// Function: FUN_1402e662c
// Addr: 1402e662c
// Size: 477 bytes


undefined8 FUN_1402e662c(short *param_1,uint *param_2,longlong param_3)

{
  undefined8 *puVar1;
  longlong *plVar2;
  undefined2 *puVar3;
  int iVar4;
  uint uVar5;
  longlong lVar6;
  longlong lVar7;
  
  lVar6 = FUN_1402d9964();
  puVar1 = (undefined8 *)(lVar6 + 0x98);
  *(undefined4 *)(lVar6 + 0xa8) = 0;
  *puVar1 = param_1;
  plVar2 = (longlong *)(lVar6 + 0xa0);
  *(undefined2 *)(lVar6 + 0x2f0) = 0;
  *plVar2 = (longlong)(param_1 + 0x40);
  if (param_1[0x40] != 0) {
    TranslateName(&PTR_u_ish_peru_140431408_8_140430b40,0x16,plVar2);
  }
  if (*(short *)*puVar1 == 0) {
    FUN_1402e5e74(puVar1);
LAB_1402e6704:
    if (*(int *)(lVar6 + 0xa8) == 0) {
      return 0;
    }
  }
  else {
    if (*(short *)*plVar2 == 0) {
      GetLocaleNameFromLanguage();
    }
    else {
      func_0x0001402e5f1c();
    }
    if (*(int *)(lVar6 + 0xa8) == 0) {
      iVar4 = TranslateName(&PTR_DAT_140430720,0x40,puVar1);
      if (iVar4 != 0) {
        if (*(short *)*plVar2 == 0) {
          GetLocaleNameFromLanguage(puVar1);
        }
        else {
          func_0x0001402e5f1c();
        }
      }
      goto LAB_1402e6704;
    }
  }
  if (((param_1 == (short *)0x0) || (*param_1 != 0)) || (param_1[0x80] != 0)) {
    uVar5 = func_0x0001402e6464(-(ulonglong)(param_1 != (short *)0x0) & (ulonglong)(param_1 + 0x80),
                                puVar1);
  }
  else {
    uVar5 = (*DAT_140426410)();
  }
  if (((uVar5 != 0) && (uVar5 != 65000)) && (iVar4 = (*DAT_140426418)(uVar5 & 0xffff), iVar4 != 0))
  {
    if (param_2 != (uint *)0x0) {
      *param_2 = uVar5;
    }
    if (param_3 == 0) {
      return 1;
    }
    puVar3 = (undefined2 *)(param_3 + 0x120);
    lVar7 = -1;
    *puVar3 = 0;
    do {
      lVar7 = lVar7 + 1;
    } while (((undefined2 *)(lVar6 + 0x2f0))[lVar7] != 0);
    iVar4 = FUN_1402d9bf0();
    if (iVar4 != 0) {
LAB_1402e6890:
                    /* WARNING: Subroutine does not return */
      _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
    }
    iVar4 = FUN_1402dc2ac(puVar3,0x1001,param_3,0x40);
    if (iVar4 != 0) {
      lVar6 = param_3 + 0x80;
      iVar4 = FUN_1402dc2ac(puVar3,0x1002,lVar6,0x40);
      if ((iVar4 != 0) &&
         (((lVar7 = FUN_1402edf30(lVar6,0x5f), lVar7 == 0 &&
           (lVar7 = FUN_1402edf30(lVar6,0x2e), lVar7 == 0)) ||
          (iVar4 = FUN_1402dc2ac(puVar3,7,lVar6,0x40), iVar4 != 0)))) {
        if (uVar5 != 0xfde9) {
          FUN_1402debfc(uVar5,param_3 + 0x100,0x10);
          return 1;
        }
        iVar4 = FUN_1402d9bf0();
        if (iVar4 == 0) {
          return 1;
        }
        goto LAB_1402e6890;
      }
    }
  }
  return 0;
}

