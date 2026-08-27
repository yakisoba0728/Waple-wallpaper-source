// Function: FUN_1403dcc70
// Addr: 1403dcc70
// Size: 94 bytes


void FUN_1403dcc70(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  char cVar2;
  
  if (*(int *)(param_2 + 0x10) <= *(int *)(param_2 + 0x14)) {
    cVar2 = FUN_1403a4580(param_2 + 0x10,*(int *)(param_2 + 0x14) + 1,0);
    if (cVar2 == '\0') {
      DAT_1404e4f20._0_4_ = (undefined4)DAT_14045dd10;
      return;
    }
  }
  uVar1 = *(uint *)(param_2 + 0x14);
  *(uint *)(param_2 + 0x14) = uVar1 + 1;
  *(undefined4 *)(*(longlong *)(param_2 + 0x18) + (ulonglong)uVar1 * 4) =
       *(undefined4 *)(param_2 + 4);
  return;
}

