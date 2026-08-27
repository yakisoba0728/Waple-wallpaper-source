// Function: FUN_14019e830
// Addr: 14019e830
// Size: 45 bytes


void FUN_14019e830(longlong param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = *(undefined4 **)(param_1 + 8);
  if (puVar1 != *(undefined4 **)(param_1 + 0x10)) {
    *puVar1 = *param_2;
    *(undefined2 *)(puVar1 + 1) = *(undefined2 *)(param_2 + 1);
    *(longlong *)(param_1 + 8) = *(longlong *)(param_1 + 8) + 6;
    return;
  }
  FUN_1401a1df0();
  return;
}

