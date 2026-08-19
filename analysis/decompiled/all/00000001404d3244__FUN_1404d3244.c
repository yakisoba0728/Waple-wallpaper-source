// Function: FUN_1404d3244
// Addr: 1404d3244
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d3244(byte *param_1)

{
  uint *puVar1;
  byte bVar2;
  byte bVar5;
  int in_EAX;
  uint uVar3;
  byte *unaff_RSI;
  int *unaff_RDI;
  char *pcVar4;
  
  *unaff_RDI = *unaff_RDI + (uint)param_1;
  uVar3 = in_EAX + 0x12010f00;
  pcVar4 = (char *)(ulonglong)uVar3;
  *pcVar4 = *pcVar4 + (char)param_1;
  *unaff_RSI = *unaff_RSI << 1 | (char)*unaff_RSI < '\0';
  pcVar4[(longlong)unaff_RSI] = pcVar4[(longlong)unaff_RSI];
  bVar2 = *param_1;
  bVar5 = (byte)(uVar3 >> 8);
  *param_1 = *param_1 + bVar5;
  puVar1 = (uint *)((ulonglong)
                    CONCAT31((int3)(char)bVar5,(char)uVar3 + *pcVar4 + CARRY1(bVar2,bVar5)) +
                   0x781c0005);
  *puVar1 = *puVar1 & (uint)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

