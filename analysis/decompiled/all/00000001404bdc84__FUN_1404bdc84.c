// Function: FUN_1404bdc84
// Addr: 1404bdc84
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bdc84(char *param_1)

{
  char *pcVar1;
  uint uVar2;
  undefined8 in_RAX;
  char unaff_BL;
  longlong unaff_RDI;
  char in_CF;
  bool in_OF;
  undefined1 *puVar3;
  
  if (!in_OF) {
    pcVar1 = (char *)(CONCAT71((int7)((ulonglong)in_RAX >> 8),((char)in_RAX + -0xc) - in_CF) +
                     unaff_RDI * 4);
    *pcVar1 = *pcVar1 + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar2 = (uint)in_RAX & 0x4bdbac00;
  puVar3 = (undefined1 *)(ulonglong)uVar2;
  *param_1 = *param_1 + (char)(uVar2 >> 8);
  *puVar3 = *puVar3;
  puVar3[-0x52ffda99] = puVar3[-0x52ffda99];
  *param_1 = *param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

