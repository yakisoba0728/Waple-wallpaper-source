// Function: FUN_1402c9024
// Addr: 1402c9024
// Size: 25 bytes


byte FUN_1402c9024(longlong param_1,undefined8 *param_2)

{
  byte bVar1;
  uint uVar2;
  undefined4 uVar3;
  longlong lVar4;
  ulonglong uVar5;
  
  uVar2 = (*DAT_140426620)(*param_2,*(undefined4 *)(param_1 + 0x18),*(undefined8 *)(param_1 + 0x10),
                           0);
  uVar5 = (ulonglong)uVar2;
  if (uVar2 != 0) {
    if (*(ulonglong *)(param_1 + 0x18) < uVar5) {
      if (*(char *)(param_1 + 0x28) != '\0') {
        func_0x0001402bf8e0(*(undefined8 *)(param_1 + 0x10));
        *(undefined1 *)(param_1 + 0x28) = 0;
      }
      lVar4 = thunk_FUN_1402da070(uVar5 * 2 + 2);
      *(longlong *)(param_1 + 0x10) = lVar4;
      bVar1 = ~-(lVar4 != 0) & 0xc;
      if (lVar4 != 0) {
        bVar1 = 0;
      }
      *(bool *)(param_1 + 0x28) = lVar4 != 0;
      uVar5 = -(ulonglong)(lVar4 != 0) & uVar5 + 1;
      *(ulonglong *)(param_1 + 0x18) = uVar5;
      if (bVar1 != 0) {
        return bVar1;
      }
      uVar2 = (*DAT_140426620)(*param_2,uVar5,lVar4,0);
      if ((ulonglong)uVar2 == 0) goto code_r0x0001402c905f;
      *(ulonglong *)(param_1 + 0x20) = (ulonglong)uVar2;
    }
    else {
      *(ulonglong *)(param_1 + 0x20) = uVar5;
    }
    return 0;
  }
code_r0x0001402c905f:
  uVar3 = (*DAT_1404266a8)();
  FUN_1402caf94(uVar3);
                    /* WARNING: Subroutine does not return */
  FUN_1402cb004();
}

