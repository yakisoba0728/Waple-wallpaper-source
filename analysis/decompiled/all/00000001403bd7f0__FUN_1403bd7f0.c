// Function: FUN_1403bd7f0
// Addr: 1403bd7f0
// Size: 169 bytes


void FUN_1403bd7f0(longlong param_1,uint param_2)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  undefined4 *puVar3;
  
  if (*(char *)(param_1 + 0x10) == '\0') {
    return;
  }
  if (*(char *)(param_1 + 0x40) == '\0') {
    puVar1 = (undefined4 *)FUN_1403ed560(param_1 + 0x10,param_2,0);
    if (puVar1 == (undefined4 *)0x0) {
      return;
    }
    *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
    uVar2 = (ulonglong)(param_2 >> 6 & 7);
    puVar3 = puVar1 + uVar2 * 2;
    uVar2 = *(ulonglong *)(puVar1 + uVar2 * 2 + 2) & ~(1L << (param_2 & 0x3f));
  }
  else {
    if (param_2 == 0xffffffff) {
      return;
    }
    *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
    puVar1 = (undefined4 *)FUN_1403ed560(param_1 + 0x10,param_2,1);
    if (puVar1 == (undefined4 *)0x0) {
      return;
    }
    uVar2 = (ulonglong)(param_2 >> 6 & 7);
    puVar3 = puVar1 + uVar2 * 2;
    uVar2 = *(ulonglong *)(puVar1 + uVar2 * 2 + 2) | 1L << (param_2 & 0x3f);
  }
  *(ulonglong *)(puVar3 + 2) = uVar2;
  *puVar1 = 0xffffffff;
  return;
}

