// Function: FUN_1404aa4c0
// Addr: 1404aa4c0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404aa4c0(char *param_1,undefined8 param_2)

{
  char *pcVar1;
  byte bVar2;
  uint in_EAX;
  uint uVar3;
  char unaff_BH;
  char unaff_SPL;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  
  *param_1 = *param_1 + (char)((in_EAX | 0x49eab000) >> 8);
  uVar3 = (in_EAX | 0x49eab000) + 0x64050002;
  *(uint *)(ulonglong)uVar3 = *(uint *)(ulonglong)uVar3 | uVar3;
  uRamf40500020521004a =
       CONCAT22((short)((uVar3 | 0xdfa0400) >> 0x10),
                CONCAT11((char)((uVar3 | 0xdfa0400) >> 8) * '\x02',(byte)uVar3));
  bVar2 = (((byte)uVar3 | *(byte *)(ulonglong)uRamf40500020521004a) - 6) + unaff_BH;
  uVar3 = CONCAT31((int3)(uRamf40500020521004a >> 8),bVar2);
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

