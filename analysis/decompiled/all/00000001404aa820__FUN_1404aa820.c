// Function: FUN_1404aa820
// Addr: 1404aa820
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404aa820(void)

{
  char *pcVar1;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  
  pcVar1 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x52);
  *pcVar1 = *pcVar1 + unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

