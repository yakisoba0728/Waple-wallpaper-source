// Function: FUN_14028f620
// Addr: 14028f620
// Size: 1 bytes


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_14028f620(undefined4 param_1,longlong *param_2)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  int iVar4;
  ulonglong uVar5;
  ulonglong uVar6;
  uint auStackX_18 [4];
  
  uVar6 = 0;
  auStackX_18[0] = 0;
  uVar5 = uVar6;
  uVar3 = uVar6;
  do {
    if ((int)uVar3 != 0) break;
    iVar4 = (int)uVar5;
    if (iVar4 == 0) {
      auStackX_18[0] = 0x409;
      uVar5 = 0x409;
code_r0x00014028f68f:
      uVar2 = (*_UNK_1404266e0)(0x1300,0,param_1,uVar5,param_2,0,0);
      uVar3 = (ulonglong)uVar2;
    }
    else {
      if (iVar4 != 1) {
        auStackX_18[0] = 0;
        uVar5 = uVar6;
        goto code_r0x00014028f68f;
      }
      iVar1 = (*DAT_140426278)(L"!x-sys-default-locale",0x20000001,auStackX_18,2);
      if (iVar1 != 0) {
        uVar5 = (ulonglong)auStackX_18[0];
        goto code_r0x00014028f68f;
      }
    }
    uVar5 = (ulonglong)(iVar4 + 1U);
  } while ((int)(iVar4 + 1U) < 3);
  if ((int)uVar3 != 0) {
    do {
      if ((&UNK_14042aa50)[*(byte *)(*param_2 + -1 + uVar3)] == '\0') {
        return;
      }
      uVar3 = uVar3 - 1;
    } while (uVar3 != 0);
  }
  return;
}

