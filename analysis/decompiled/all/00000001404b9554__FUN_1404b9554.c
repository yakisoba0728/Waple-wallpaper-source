// Function: FUN_1404b9554
// Addr: 1404b9554
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b9554(char param_1,char param_2)

{
  byte bVar1;
  int in_EAX;
  longlong unaff_RBP;
  byte *pbVar2;
  
  bVar1 = (char)(in_EAX + -0x3ffff58c) + param_1;
  pbVar2 = (byte *)(ulonglong)CONCAT31((int3)((uint)(in_EAX + -0x3ffff58c) >> 8),bVar1);
  pbVar2[unaff_RBP + 0x2221004b] = pbVar2[unaff_RBP + 0x2221004b] + param_2;
  *pbVar2 = *pbVar2 | bVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

