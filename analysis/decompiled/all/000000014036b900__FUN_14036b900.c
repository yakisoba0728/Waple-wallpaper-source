// Function: FUN_14036b900
// Addr: 14036b900
// Size: 123 bytes


void FUN_14036b900(longlong param_1,int param_2,uint param_3,int param_4,int param_5)

{
  uint *puVar1;
  uint uVar2;
  
  if ((*(int *)(param_1 + 0x2c) == 0) && (param_3 != 0)) {
    puVar1 = (uint *)FUN_1403f5580(*(longlong *)(param_1 + 0x48) + 0x10);
    if (*(int *)(*(longlong *)(param_1 + 0x48) + 0x10) < 0) {
      *(uint *)(param_1 + 0x2c) = *(uint *)(param_1 + 0x2c) | 1;
    }
    puVar1[2] = param_3;
    uVar2 = *puVar1 & 0xfffffff2 | 2;
    uVar2 = (param_4 << 4 ^ uVar2) & 0x30 ^ uVar2;
    *puVar1 = uVar2;
    puVar1[1] = param_2 - **(int **)(param_1 + 0x48);
    *puVar1 = uVar2 & 0x3f | param_5 << 6;
  }
  return;
}

