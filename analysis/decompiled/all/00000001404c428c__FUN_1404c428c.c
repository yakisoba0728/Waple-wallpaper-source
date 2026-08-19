// Function: FUN_1404c428c
// Addr: 1404c428c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404c42be) overlaps instruction at (ram,0x0001404c42bd)
    */

void FUN_1404c428c(char param_1,char *param_2)

{
  char *pcVar1;
  byte bVar2;
  undefined3 uVar3;
  byte bVar4;
  uint uVar5;
  undefined8 in_RAX;
  char *unaff_RDI;
  
  uVar5 = (int)CONCAT71((int7)((ulonglong)in_RAX >> 8),
                        ((byte)in_RAX & (byte)param_2) + (char)((ulonglong)in_RAX >> 8)) +
          0x14010000;
  *(byte *)(ulonglong)uVar5 = *(byte *)(ulonglong)uVar5 | (byte)uVar5;
  bVar4 = (byte)uVar5 + 100;
  uVar3 = (undefined3)(uVar5 >> 8);
  bVar4 = bVar4 | *(byte *)(ulonglong)CONCAT31(uVar3,bVar4);
  uVar5 = CONCAT31(uVar3,bVar4 + 0x54);
  *(uint *)(ulonglong)uVar5 = *(uint *)(ulonglong)uVar5 | uVar5;
  bVar2 = bVar4 + 0x88;
  *(byte *)(ulonglong)CONCAT31(uVar3,bVar2) = *(byte *)(ulonglong)CONCAT31(uVar3,bVar2) | bVar2;
  uVar5 = CONCAT31(uVar3,bVar4 - 0x26);
  pcVar1 = (char *)((ulonglong)uVar5 + 1);
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_2 >> 8) + (0xad < bVar2);
  uVar5 = uVar5 | 0x340d0004;
  *(char *)(ulonglong)uVar5 = *(char *)(ulonglong)uVar5 + (char)uVar5;
  *unaff_RDI = *unaff_RDI + param_1;
  *param_2 = *param_2 + param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

