// Function: FUN_1404a0abc
// Addr: 1404a0abc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404a0ad2) overlaps instruction at (ram,0x0001404a0acf)
    */

void FUN_1404a0abc(char *param_1,undefined8 param_2)

{
  char *pcVar1;
  uint *in_RAX;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  char unaff_SPL;
  longlong unaff_RSI;
  longlong unaff_RDI;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  *(char *)(unaff_RDI + (longlong)in_RAX) =
       *(char *)(unaff_RDI + (longlong)in_RAX) + (char)((ulonglong)param_2 >> 8);
  *(char *)(unaff_RSI + (longlong)in_RAX) =
       *(char *)(unaff_RSI + (longlong)in_RAX) + (char)((ulonglong)in_RAX >> 8);
  pcVar1 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + (longlong)in_RAX);
  *pcVar1 = '\0';
  if (*pcVar1 == '\0') {
    *param_1 = *param_1 + unaff_SPL;
  }
  *(char *)((longlong)in_RAX + 0x21004a09) = *(char *)((longlong)in_RAX + 0x21004a09) + unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

