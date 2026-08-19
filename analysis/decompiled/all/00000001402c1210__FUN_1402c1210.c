// Function: FUN_1402c1210
// Addr: 1402c1210
// Size: 50 bytes


void FUN_1402c1210(byte *param_1,byte *param_2,undefined8 *param_3)

{
  byte bVar1;
  char cVar2;
  longlong lStack_28;
  undefined *puStack_20;
  undefined8 uStack_18;
  char local_10;
  
  if ((param_1 == (byte *)0x0) || (param_2 == (byte *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_1402cb004();
  }
  local_10 = '\0';
  if (param_3 == (undefined8 *)0x0) {
    if (DAT_1404e46ac == 0) {
      puStack_20 = PTR_PTR_1404dc7b8;
      local_10 = '\0';
    }
    else {
      lStack_28 = FUN_1402d9964();
      puStack_20 = *(undefined **)(lStack_28 + 0x90);
      uStack_18 = *(undefined8 *)(lStack_28 + 0x88);
      FUN_1402d9b18(lStack_28,&puStack_20);
      FUN_1402d9b84(lStack_28,&uStack_18);
      if ((*(uint *)(lStack_28 + 0x3a8) & 2) == 0) {
        local_10 = '\x01';
        *(uint *)(lStack_28 + 0x3a8) = *(uint *)(lStack_28 + 0x3a8) | 2;
      }
    }
  }
  else {
    puStack_20 = (undefined *)*param_3;
    local_10 = '\0';
  }
  do {
    bVar1 = *param_1;
    param_1 = param_1 + 1;
    cVar2 = *(char *)((ulonglong)bVar1 + *(longlong *)(puStack_20 + 0x110));
    if (cVar2 != *(char *)((ulonglong)*param_2 + *(longlong *)(puStack_20 + 0x110))) break;
    param_2 = param_2 + 1;
  } while (cVar2 != '\0');
  if (local_10 != '\0') {
    *(uint *)(lStack_28 + 0x3a8) = *(uint *)(lStack_28 + 0x3a8) & 0xfffffffd;
  }
  return;
}

