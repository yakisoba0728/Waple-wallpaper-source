// Function: FUN_1403171d0
// Addr: 1403171d0
// Size: 142 bytes


undefined8 FUN_1403171d0(longlong param_1,uint *param_2,longlong param_3)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  ulonglong uVar4;
  
  puVar2 = *(uint **)(param_1 + 0x2e0);
  if (puVar2 != (uint *)0x0) {
    uVar1 = *puVar2;
    if (uVar1 <= *param_2) {
      uVar3 = 0;
      if (uVar1 != 0) {
        do {
          uVar4 = (ulonglong)uVar3;
          uVar3 = uVar3 + 1;
          *(undefined4 *)(uVar4 * 4 + param_3) =
               *(undefined4 *)(uVar4 * 4 + *(longlong *)(puVar2 + 0x42));
        } while (uVar3 < *puVar2);
      }
      if (uVar3 < *param_2) {
        do {
          uVar4 = (ulonglong)uVar3;
          uVar3 = uVar3 + 1;
          *(undefined4 *)(param_3 + uVar4 * 4) = 0;
        } while (uVar3 < *param_2);
      }
      *param_2 = *puVar2;
      return 0;
    }
    *param_2 = uVar1;
  }
  return 6;
}

