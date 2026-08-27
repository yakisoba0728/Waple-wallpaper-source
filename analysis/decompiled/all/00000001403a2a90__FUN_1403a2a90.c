// Function: FUN_1403a2a90
// Addr: 1403a2a90
// Size: 85 bytes


void FUN_1403a2a90(char *param_1,uint param_2)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  
  if ((*param_1 != '\0') && (param_2 != 0xffffffff)) {
    param_1[4] = -1;
    param_1[5] = -1;
    param_1[6] = -1;
    param_1[7] = -1;
    puVar1 = (undefined4 *)FUN_1403ed560(param_1,param_2,1);
    if (puVar1 != (undefined4 *)0x0) {
      uVar2 = (ulonglong)(param_2 >> 6 & 7);
      *(ulonglong *)(puVar1 + uVar2 * 2 + 2) =
           *(ulonglong *)(puVar1 + uVar2 * 2 + 2) | 1L << (param_2 & 0x3f);
      *puVar1 = 0xffffffff;
    }
  }
  return;
}

