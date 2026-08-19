// Function: FUN_1404cf590
// Addr: 1404cf590
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cf590(int param_1,longlong param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  undefined8 in_RAX;
  int *unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  byte *pbVar4;
  
  bVar2 = (char)in_RAX + *(char *)(unaff_RSI + unaff_RBP);
  pbVar4 = (byte *)(param_2 + 0x2c902);
  bVar1 = *pbVar4;
  *pbVar4 = *pbVar4 + bVar2;
  uVar3 = (int)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar2) + 0x2e0402 + (uint)CARRY1(bVar1,bVar2)
  ;
  pbVar4 = (byte *)(ulonglong)uVar3;
  bVar1 = *pbVar4;
  bVar2 = (byte)uVar3;
  *pbVar4 = *pbVar4 + bVar2;
  *unaff_RBX = (*unaff_RBX - param_1) - (uint)CARRY1(bVar1,bVar2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

