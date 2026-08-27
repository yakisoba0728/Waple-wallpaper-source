// Function: FUN_14030b1e0
// Addr: 14030b1e0
// Size: 177 bytes


void FUN_14030b1e0(longlong param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  
  puVar3 = *(undefined4 **)(param_1 + 0x240);
  if ((puVar3 != (undefined4 *)0x0) &&
     (puVar1 = puVar3 + (ulonglong)*(uint *)(param_1 + 0x238) * 5, puVar3 < puVar1)) {
    do {
      if ((*(char *)(puVar3 + 3) == *(char *)(param_1 + 0x1f0)) && (*(char *)(puVar3 + 4) != '\0'))
      {
        iVar2 = *(int *)(param_1 + 0x250);
        if (*(int *)(param_1 + 0x254) <= iVar2) {
          *(undefined4 *)(param_1 + 0x20) = 0x82;
          return;
        }
        puVar1 = (undefined4 *)(*(longlong *)(param_1 + 600) + (longlong)iVar2 * 0x18);
        *(int *)(param_1 + 0x250) = iVar2 + 1;
        *puVar1 = *(undefined4 *)(param_1 + 0x1dc);
        iVar2 = *(int *)(param_1 + 0x1e8);
        puVar1[2] = 1;
        puVar1[1] = iVar2 + 1;
        *(undefined4 **)(puVar1 + 4) = puVar3;
        FUN_140309910(param_1,*puVar3,puVar3[1]);
        return;
      }
      puVar3 = puVar3 + 5;
    } while (puVar3 < puVar1);
  }
  *(undefined4 *)(param_1 + 0x20) = 0x80;
  return;
}

