// Function: FUN_140414d20
// Addr: 140414d20
// Size: 194 bytes


bool FUN_140414d20(longlong param_1,uint param_2)

{
  uint uVar1;
  char cVar2;
  int iVar3;
  
  if (*(char *)(param_1 + 4) == '\0') {
    return param_2 == 0;
  }
  cVar2 = FUN_1403bf1a0();
  if (cVar2 == '\0') {
    return false;
  }
  uVar1 = *(uint *)(param_1 + 0x60);
  if (uVar1 < param_2) {
    if (((param_2 - uVar1) * 5 & 0x3fffffff) != 0) {
      FUN_1404217a0(*(longlong *)(param_1 + 0x70) + (ulonglong)uVar1 * 0x14,0,
                    (param_2 - uVar1) * 0x14);
    }
    if (*(char *)(param_1 + 0x5a) != '\0') {
      iVar3 = param_2 - *(uint *)(param_1 + 0x60);
      if ((iVar3 * 5 & 0x3fffffffU) != 0) {
        FUN_1404217a0(*(longlong *)(param_1 + 0x80) + (ulonglong)*(uint *)(param_1 + 0x60) * 0x14,0,
                      iVar3 * 0x14);
      }
    }
  }
  *(uint *)(param_1 + 0x60) = param_2;
  if (param_2 == 0) {
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(undefined4 *)(param_1 + 0xb0) = 0;
  }
  *(undefined4 *)(param_1 + 0xb4) = 0;
  return true;
}

