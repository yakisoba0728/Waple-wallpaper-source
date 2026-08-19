// Function: FUN_1404ca418
// Addr: 1404ca418
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ca418(char *param_1,char param_2)

{
  undefined3 uVar1;
  byte bVar2;
  byte *in_RAX;
  byte *pbVar3;
  char *pcVar4;
  longlong unaff_RDI;
  char unaff_R12B;
  
  pbVar3 = (byte *)(CONCAT71((int7)((ulonglong)in_RAX >> 8),(byte)in_RAX ^ *in_RAX) &
                   0xffffffffffffffdb);
  bVar2 = *pbVar3;
  *param_1 = *param_1 + unaff_R12B;
  uRamdb2400000021004c =
       (int)CONCAT71((int7)((ulonglong)pbVar3 >> 8),((byte)pbVar3 ^ bVar2) + 0x5d) + 0x16e02402;
  *(char *)(unaff_RDI + 0x340032db) = *(char *)(unaff_RDI + 0x340032db) + (byte)uRamdb2400000021004c
  ;
  uVar1 = (undefined3)(uRamdb2400000021004c >> 8);
  bVar2 = (byte)uRamdb2400000021004c ^ *(byte *)(ulonglong)uRamdb2400000021004c;
  pcVar4 = (char *)((ulonglong)CONCAT31(uVar1,bVar2 ^ *(byte *)(ulonglong)CONCAT31(uVar1,bVar2)) ^
                   0xa3);
  *param_1 = *param_1 + unaff_R12B;
  *pcVar4 = *pcVar4 + (char)pcVar4;
  *pcVar4 = *pcVar4 + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

