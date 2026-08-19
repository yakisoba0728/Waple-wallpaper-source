// Function: FUN_1404b5970
// Addr: 1404b5970
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b5970(void)

{
  char *pcVar1;
  uint *in_RAX;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  longlong unaff_RSI;
  undefined2 *unaff_RDI;
  longlong unaff_retaddr;
  
  pcVar1 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + -0x18);
  *pcVar1 = *pcVar1 + unaff_BH;
  *in_RAX = *in_RAX | (uint)in_RAX;
  *(char *)(unaff_RSI + -0x38) = *(char *)(unaff_RSI + -0x38) + (char)unaff_retaddr;
  pcVar1 = (char *)(unaff_retaddr * 4 + 0xaeb9310c);
  *pcVar1 = *pcVar1 + (char)((ulonglong)unaff_retaddr >> 8);
  TaskRegister(*unaff_RDI);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

