// Function: FUN_1404a9f18
// Addr: 1404a9f18
// Size: 1 bytes


/* WARNING: Instruction at (ram,0x0001404a9f28) overlaps instruction at (ram,0x0001404a9f27)
    */
/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a9f18(char *param_1,undefined8 param_2)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  char *in_RAX;
  longlong unaff_RBX;
  char unaff_SPL;
  longlong unaff_RBP;
  longlong unaff_RSI;
  longlong unaff_RDI;
  char in_SF;
  char in_OF;
  char *pcVar4;
  
  cVar2 = (char)in_RAX;
  if (in_OF != in_SF) {
    if (in_OF != in_SF) {
      uVar3 = (int)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                            CONCAT11(((char)((ulonglong)in_RAX >> 8) +
                                     (char)((ulonglong)param_2 >> 8)) * '\x02',cVar2)) + 0xd12c0000;
      *(char *)(ulonglong)uVar3 = *(char *)(ulonglong)uVar3 + (char)uVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(char *)(unaff_RDI + 0x24000d7c) = *(char *)(unaff_RDI + 0x24000d7c) + cVar2;
  }
  *(char *)(unaff_RDI + 0x24000d7c) = *(char *)(unaff_RDI + 0x24000d7c) + cVar2;
  *param_1 = *param_1 + unaff_SPL;
  *in_RAX = *in_RAX + cVar2;
  *(char *)(unaff_RBP + 0x7c) = *(char *)(unaff_RBP + 0x7c) + cVar2;
  uVar3 = (uint)in_RAX | 0xd7c8700;
  pcVar4 = (char *)(ulonglong)uVar3;
  pcVar1 = (char *)(unaff_RSI + unaff_RBX * 4);
  *pcVar1 = *pcVar1 + (char)(uVar3 >> 8);
  *param_1 = *param_1 + unaff_SPL;
  *pcVar4 = *pcVar4 + (char)param_1;
  *pcVar4 = *pcVar4 + cVar2;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

