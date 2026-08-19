// Function: FUN_1404c2c00
// Addr: 1404c2c00
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c2c00(void)

{
  char *pcVar1;
  char *in_RAX;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  longlong unaff_RBP;
  char unaff_R13B;
  
  *in_RAX = *in_RAX + (char)in_RAX;
  pcVar1 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + unaff_RBP);
  *pcVar1 = *pcVar1 + unaff_BH;
  *in_RAX = *in_RAX + unaff_R13B;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

