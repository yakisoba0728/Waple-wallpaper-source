// Function: FUN_1404c02f8
// Addr: 1404c02f8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c02f8(undefined8 param_1,char param_2)

{
  char *in_RAX;
  char *pcVar1;
  char unaff_BH;
  longlong unaff_RBP;
  undefined4 *unaff_RSI;
  char in_CF;
  bool in_OF;
  
  if (!in_OF) {
    *in_RAX = *in_RAX - (char)in_RAX;
    pcVar1 = (char *)CONCAT44((int)((ulonglong)in_RAX >> 0x20),*unaff_RSI);
    *pcVar1 = *pcVar1 + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)(unaff_RBP + 0xd01004a) = *(char *)(unaff_RBP + 0xd01004a) + unaff_BH + in_CF;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

