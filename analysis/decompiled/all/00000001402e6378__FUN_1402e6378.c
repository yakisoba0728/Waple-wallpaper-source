// Function: FUN_1402e6378
// Addr: 1402e6378
// Size: 25 bytes


void FUN_1402e6378(longlong param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  undefined1 auStackY_138 [32];
  undefined1 auStack_108 [240];
  ulonglong uStack_18;
  
  uStack_18 = DAT_1404dc110 ^ (ulonglong)auStackY_138;
  lVar2 = FUN_1402d9964();
  iVar1 = FUN_1402dc2ac(param_1,(-(uint)(*(int *)(lVar2 + 0xb0) != 0) & 0xfffff002) + 0x1001,
                        auStack_108);
  if (iVar1 == 0) {
    *(undefined4 *)(lVar2 + 0xa8) = 0;
  }
  else {
    iVar1 = FUN_1402c1390(*(undefined8 *)(lVar2 + 0x98),auStack_108);
    if (iVar1 == 0) {
      lVar3 = -1;
      do {
        lVar3 = lVar3 + 1;
      } while (*(short *)(param_1 + lVar3 * 2) != 0);
      iVar1 = FUN_1402d9bf0();
      if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      *(uint *)(lVar2 + 0xa8) = *(uint *)(lVar2 + 0xa8) | 4;
    }
  }
  func_0x0001402ed2f0(uStack_18 ^ (ulonglong)auStackY_138);
  return;
}

