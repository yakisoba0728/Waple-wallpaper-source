// Function: FUN_1404c492c
// Addr: 1404c492c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c492c(int param_1,int *param_2)

{
  byte bVar1;
  byte bVar2;
  undefined4 uVar3;
  uint uVar4;
  char unaff_BH;
  uint unaff_EBP;
  byte *pbVar5;
  
  uVar3 = in((short)param_2);
  uRam000000016d6f4133 = uRam000000016d6f4133 & unaff_EBP;
  uVar4 = CONCAT22((short)((uint)uVar3 >> 0x10),
                   CONCAT11((char)((uint)uVar3 >> 8) + unaff_BH,(char)uVar3)) ^ 0x42;
  pbVar5 = (byte *)(ulonglong)uVar4;
  bVar1 = *pbVar5;
  bVar2 = (byte)uVar4;
  *pbVar5 = *pbVar5 + bVar2;
  *param_2 = *param_2 + param_1 + (uint)CARRY1(bVar1,bVar2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

