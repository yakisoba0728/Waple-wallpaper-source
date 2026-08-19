// Function: FUN_1401e7020
// Addr: 1401e7020
// Size: 192 bytes


void FUN_1401e7020(longlong param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  
  *(undefined1 *)(param_1 + 0x328) = 1;
  FUN_1401de540();
  if ((((*(int *)(param_1 + 0x32c) != 0) && (*(int *)(param_1 + 0x32c) != 0x1f)) ||
      ((*(uint *)(param_1 + 0x304) & 0x100) != 0)) ||
     ((*(uint *)(*(longlong *)(param_1 + 200) + 0x118) & 0x1800000) != 0)) {
    *(uint *)(param_1 + 0x304) = *(uint *)(param_1 + 0x304) | 0x10;
  }
  puVar1 = *(undefined8 **)(param_1 + 0x310);
  puVar2 = *(undefined8 **)(param_1 + 0x308);
  if (puVar2 != puVar1) {
    do {
      FUN_1401e6160(*puVar2,*(undefined8 *)(param_1 + 200));
      puVar2 = puVar2 + 1;
    } while (puVar2 != puVar1);
    if (*(longlong *)(param_1 + 0x308) != *(longlong *)(param_1 + 0x310)) {
      *(longlong *)(param_1 + 0x310) = *(longlong *)(param_1 + 0x308);
    }
    *(undefined8 *)(param_1 + 800) = 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_140086eb0(param_2,"effects","");
}

