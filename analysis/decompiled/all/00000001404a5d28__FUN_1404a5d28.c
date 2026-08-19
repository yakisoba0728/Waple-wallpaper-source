// Function: FUN_1404a5d28
// Addr: 1404a5d28
// Size: 1 bytes


void FUN_1404a5d28(char *param_1,undefined2 param_2)

{
  byte bVar1;
  uint uVar2;
  undefined8 in_RAX;
  undefined8 unaff_retaddr;
  byte *pbVar3;
  
  bVar1 = in(param_2);
  pbVar3 = (byte *)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar1);
  *pbVar3 = *pbVar3 | bVar1;
  *param_1 = *param_1 + '\b';
  uVar2 = (int)pbVar3 + 0x34050002;
  bVar1 = (byte)uVar2 | *(byte *)(ulonglong)uVar2;
  pbVar3 = (byte *)(ulonglong)CONCAT31((int3)(uVar2 >> 8),bVar1);
  param_1[-0x46c5fff8] = param_1[-0x46c5fff8] & (byte)((ulonglong)unaff_retaddr >> 8);
  *pbVar3 = *pbVar3 | bVar1;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

