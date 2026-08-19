// Function: FUN_1404a4800
// Addr: 1404a4800
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a4800(longlong param_1,longlong param_2)

{
  char *pcVar1;
  byte *pbVar2;
  byte bVar3;
  uint uVar4;
  uint *in_RAX;
  uint *puVar5;
  byte bVar6;
  uint unaff_EBX;
  
  bVar6 = (byte)((ulonglong)param_2 >> 8);
  *in_RAX = *in_RAX & unaff_EBX;
  *(byte *)in_RAX = (byte)*in_RAX | (byte)in_RAX;
  pbVar2 = (byte *)(param_2 + param_1);
  bVar3 = *pbVar2;
  *pbVar2 = *pbVar2 - bVar6;
  puVar5 = (uint *)CONCAT71((int7)((ulonglong)in_RAX >> 8),(byte)in_RAX + 100 + (bVar3 < bVar6));
  uVar4 = (uint)puVar5 | *puVar5;
  pcVar1 = (char *)((ulonglong)(uVar4 | 0x7e40434) - 0x62fff862);
  *pcVar1 = *pcVar1 + ((byte)uVar4 | 0x34);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

