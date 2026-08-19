// Function: FUN_1402c9fc0
// Addr: 1402c9fc0
// Size: 104 bytes


int FUN_1402c9fc0(byte *param_1,byte *param_2,ulonglong param_3,undefined8 *param_4)

{
  byte bVar1;
  int iVar2;
  longlong lStack_28;
  undefined *local_20;
  undefined8 uStack_18;
  char local_10;
  
  if (((param_1 == (byte *)0x0) || (param_2 == (byte *)0x0)) || (0x7fffffff < param_3)) {
                    /* WARNING: Subroutine does not return */
    FUN_1402cb004();
  }
  if (param_3 == 0) {
    return 0;
  }
  local_10 = '\0';
  if (param_4 == (undefined8 *)0x0) {
    if (DAT_1404e46ac == 0) {
      local_20 = PTR_PTR_1404dc7b8;
      local_10 = '\0';
    }
    else {
      lStack_28 = FUN_1402d9964();
      local_20 = *(undefined **)(lStack_28 + 0x90);
      uStack_18 = *(undefined8 *)(lStack_28 + 0x88);
      FUN_1402d9b18(lStack_28,&local_20);
      FUN_1402d9b84(lStack_28,&uStack_18);
      if ((*(uint *)(lStack_28 + 0x3a8) & 2) == 0) {
        local_10 = '\x01';
        *(uint *)(lStack_28 + 0x3a8) = *(uint *)(lStack_28 + 0x3a8) | 2;
      }
    }
  }
  else {
    local_20 = (undefined *)*param_4;
    local_10 = '\0';
  }
  do {
    bVar1 = *param_1;
    param_1 = param_1 + 1;
    bVar1 = *(byte *)((ulonglong)bVar1 + *(longlong *)(local_20 + 0x110));
    iVar2 = (uint)bVar1 - (uint)*(byte *)((ulonglong)*param_2 + *(longlong *)(local_20 + 0x110));
    if ((iVar2 != 0) || (bVar1 == 0)) break;
    param_3 = param_3 - 1;
    param_2 = param_2 + 1;
  } while (param_3 != 0);
  if (local_10 != '\0') {
    *(uint *)(lStack_28 + 0x3a8) = *(uint *)(lStack_28 + 0x3a8) & 0xfffffffd;
  }
  return iVar2;
}

