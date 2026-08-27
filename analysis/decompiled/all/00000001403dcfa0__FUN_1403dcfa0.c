// Function: FUN_1403dcfa0
// Addr: 1403dcfa0
// Size: 101 bytes


void FUN_1403dcfa0(undefined8 param_1,undefined1 *param_2)

{
  uint uVar1;
  char cVar2;
  
  if (*(int *)(param_2 + 8) <= *(int *)(param_2 + 0xc)) {
    cVar2 = FUN_1403a5250(param_2 + 8,*(int *)(param_2 + 0xc) + 1,0);
    if (cVar2 == '\0') {
      DAT_1404e4f20._0_1_ = (undefined1)DAT_14045dd10;
      *param_2 = 1;
      return;
    }
  }
  uVar1 = *(uint *)(param_2 + 0xc);
  *(uint *)(param_2 + 0xc) = uVar1 + 1;
  *(undefined1 *)((ulonglong)uVar1 + *(longlong *)(param_2 + 0x10)) = *param_2;
  *param_2 = 1;
  return;
}

