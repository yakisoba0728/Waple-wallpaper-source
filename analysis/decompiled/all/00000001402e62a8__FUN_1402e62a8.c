// Function: FUN_1402e62a8
// Addr: 1402e62a8
// Size: 233 bytes


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

uint FUN_1402e62a8(longlong param_1)

{
  int iVar1;
  uint uVar2;
  longlong lVar3;
  longlong lVar4;
  undefined1 auStackY_138 [32];
  undefined1 local_108 [240];
  ulonglong local_18;
  
  local_18 = DAT_1404dc040 ^ (ulonglong)auStackY_138;
  lVar3 = FUN_1402d9894();
  iVar1 = FUN_1402dc1dc(param_1,(-(uint)(*(int *)(lVar3 + 0xb0) != 0) & 0xfffff002) + 0x1001,
                        local_108);
  if (iVar1 == 0) {
    *(undefined4 *)(lVar3 + 0xa8) = 0;
    uVar2 = 1;
  }
  else {
    iVar1 = FUN_1402c12c0(*(undefined8 *)(lVar3 + 0x98),local_108);
    if (iVar1 == 0) {
      lVar4 = -1;
      do {
        lVar4 = lVar4 + 1;
      } while (*(short *)(param_1 + lVar4 * 2) != 0);
      iVar1 = FUN_1402d9b20();
      if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
        _invoke_watson((wchar_t *)0x0,(wchar_t *)0x0,(wchar_t *)0x0,0,0);
      }
      *(uint *)(lVar3 + 0xa8) = *(uint *)(lVar3 + 0xa8) | 4;
    }
    uVar2 = ~(*(uint *)(lVar3 + 0xa8) >> 2) & 1;
  }
  return uVar2;
}

