// Function: FUN_1404a0068
// Addr: 1404a0068
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a0068(longlong param_1,char param_2)

{
  char *in_RAX;
  undefined1 unaff_BL;
  undefined1 unaff_BH;
  undefined6 unaff_0000001a;
  char in_CF;
  char in_ZF;
  
  if (param_1 == 1 || in_ZF != '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       (*(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) - (char)in_RAX) - in_CF;
  in_RAX[0x210049ff] = in_RAX[0x210049ff] + param_2;
  *in_RAX = *in_RAX + (char)in_RAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

