// Function: FUN_1404bcfbc
// Addr: 1404bcfbc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bcfbc(undefined8 param_1,longlong param_2)

{
  byte *pbVar1;
  char *pcVar2;
  byte bVar3;
  uint in_EAX;
  byte bVar4;
  char unaff_BL;
  
  bVar4 = (byte)((ulonglong)param_2 >> 8);
  pbVar1 = (byte *)(param_2 + -0x58);
  bVar3 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar4;
  pcVar2 = (char *)((ulonglong)((in_EAX | 0x13) + 0x16986700 + (uint)CARRY1(bVar3,bVar4)) - 0x78);
  *pcVar2 = *pcVar2 + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

