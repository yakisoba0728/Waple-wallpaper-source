// Function: FUN_1404d3c04
// Addr: 1404d3c04
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d3c04(void)

{
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  char *in_R9;
  char unaff_R12B;
  char in_CF;
  
  *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + unaff_BH + in_CF;
  *in_R9 = *in_R9 + unaff_R12B;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

