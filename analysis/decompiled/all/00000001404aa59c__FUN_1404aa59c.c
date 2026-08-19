// Function: FUN_1404aa59c
// Addr: 1404aa59c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404aa59c(undefined4 param_1,char *param_2)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  byte bVar5;
  char *pcVar6;
  char *unaff_RSI;
  
  uVar4 = uRam21004a0220000e12;
  pcVar6 = (char *)(ulonglong)uRam21004a0220000e12;
  bVar5 = (byte)uRam21004a0220000e12;
  *pcVar6 = *pcVar6 + bVar5;
  pbVar1 = (byte *)(pcVar6 + -0x5efff1ee);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar5;
  cVar3 = *unaff_RSI;
  *pcVar6 = *pcVar6 + (char)(uVar4 >> 8);
  *(int *)(pcVar6 + 0x8420c00) =
       *(int *)(pcVar6 + 0x8420c00) +
       CONCAT31((int3)((uint)param_1 >> 8),(char)param_1 + cVar3 + CARRY1(bVar2,bVar5) + *param_2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

