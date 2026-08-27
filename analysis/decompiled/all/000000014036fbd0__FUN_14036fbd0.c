// Function: FUN_14036fbd0
// Addr: 14036fbd0
// Size: 197 bytes


void FUN_14036fbd0(byte *param_1,char *param_2)

{
  undefined4 *puVar1;
  ulonglong uVar2;
  uint uVar3;
  ulonglong uVar4;
  
  uVar4 = 0;
  if ((uint)param_1[2] * 0x100 + (uint)param_1[3] != 0) {
    do {
      if ((((uint)param_1[uVar4 * 2 + 4] * 0x100 + (uint)param_1[uVar4 * 2 + 5] != 1) &&
          (*param_2 != '\0')) &&
         (uVar3 = (uint)param_1[1] + (uint)*param_1 * 0x100 + (int)uVar4, uVar3 != 0xffffffff)) {
        param_2[4] = -1;
        param_2[5] = -1;
        param_2[6] = -1;
        param_2[7] = -1;
        puVar1 = (undefined4 *)FUN_1403ed560(param_2,uVar3,1);
        if (puVar1 != (undefined4 *)0x0) {
          uVar2 = (ulonglong)(uVar3 >> 6 & 7);
          *(ulonglong *)(puVar1 + uVar2 * 2 + 2) =
               *(ulonglong *)(puVar1 + uVar2 * 2 + 2) | 1L << (ulonglong)(uVar3 & 0x3f);
          *puVar1 = 0xffffffff;
        }
      }
      uVar3 = (int)uVar4 + 1;
      uVar4 = (ulonglong)uVar3;
    } while (uVar3 < (uint)param_1[2] * 0x100 + (uint)param_1[3]);
  }
  return;
}

