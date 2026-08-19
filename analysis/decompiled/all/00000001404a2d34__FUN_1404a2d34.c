// Function: FUN_1404a2d34
// Addr: 1404a2d34
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404a2d50) overlaps instruction at (ram,0x0001404a2d4e)
    */

void FUN_1404a2d34(char *param_1,longlong param_2)

{
  uint in_EAX;
  uint uVar1;
  uint uVar2;
  byte bVar4;
  int *unaff_RSI;
  uint *puVar3;
  
  bVar4 = (byte)((ulonglong)param_2 >> 8);
  uVar1 = in_EAX + 0x30000674;
  puVar3 = (uint *)(ulonglong)uVar1;
  if (in_EAX < 0xcffff98c) {
    *(byte *)((longlong)puVar3 + 0x72) = *(byte *)((longlong)puVar3 + 0x72) + (char)param_1;
    uVar2 = in_EAX + 0x79e0ce74;
    puVar3 = (uint *)(ulonglong)uVar2;
    *param_1 = *param_1 + (char)(uVar2 >> 8);
    *(byte *)puVar3 = (byte)*puVar3 + (char)uVar2;
    uVar1 = *puVar3;
    *(byte *)puVar3 = (byte)*puVar3 + bVar4;
    if (CARRY1((byte)uVar1,bVar4)) {
      *unaff_RSI = *unaff_RSI + (int)param_2;
      *puVar3 = *puVar3 | uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  else {
    *puVar3 = *puVar3 & uVar1;
    *(byte *)puVar3 = (byte)*puVar3 + (char)uVar1;
    *(byte *)(param_2 + 5) = *(byte *)(param_2 + 5) ^ bVar4;
  }
  *(byte *)((longlong)puVar3 + 0x72) = *(byte *)((longlong)puVar3 + 0x72) + (char)param_1;
  *param_1 = *param_1 + (char)puVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

