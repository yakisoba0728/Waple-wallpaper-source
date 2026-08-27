// Function: FUN_1403bd8a0
// Addr: 1403bd8a0
// Size: 92 bytes


void FUN_1403bd8a0(char *param_1,uint param_2)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  
  if (*param_1 != '\0') {
    puVar1 = (undefined4 *)FUN_1403ed560(param_1,param_2,0);
    if (puVar1 != (undefined4 *)0x0) {
      param_1[4] = -1;
      param_1[5] = -1;
      param_1[6] = -1;
      param_1[7] = -1;
      uVar2 = (ulonglong)(param_2 >> 6 & 7);
      *(ulonglong *)(puVar1 + uVar2 * 2 + 2) =
           *(ulonglong *)(puVar1 + uVar2 * 2 + 2) & ~(1L << (param_2 & 0x3f));
      *puVar1 = 0xffffffff;
    }
  }
  return;
}

