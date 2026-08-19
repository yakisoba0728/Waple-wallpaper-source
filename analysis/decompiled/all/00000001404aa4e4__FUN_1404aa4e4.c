// Function: FUN_1404aa4e4
// Addr: 1404aa4e4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404aa4e4(char *param_1,undefined8 param_2)

{
  char *pcVar1;
  byte bVar2;
  uint uVar3;
  undefined8 in_RAX;
  char unaff_BH;
  char unaff_SPL;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  
  bVar2 = (char)in_RAX + -6 + unaff_BH;
  uVar3 = CONCAT31((int3)((ulonglong)in_RAX >> 8),bVar2);
  uRam540500020521004a = uVar3 | 0xdfa0d00;
  *(byte *)(ulonglong)uRam540500020521004a = *(byte *)(ulonglong)uRam540500020521004a | bVar2;
  uVar3 = uVar3 | 0xdfadf00;
  pcVar1 = (char *)((ulonglong)uVar3 + 0x210049ea);
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_2 >> 8);
  uVar3 = uVar3 + 0x64050002;
  *(uint *)(ulonglong)uVar3 = *(uint *)(ulonglong)uVar3 | uVar3;
  uVar3 = uVar3 | 0xdfadb00;
  *(char *)(ulonglong)uVar3 = *(char *)(ulonglong)uVar3 + (char)(uVar3 >> 8);
  *unaff_RDI = *unaff_RSI;
  *param_1 = *param_1 + unaff_SPL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

