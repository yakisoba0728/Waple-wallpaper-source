// Function: FUN_1404cab04
// Addr: 1404cab04
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cab04(char *param_1,undefined8 param_2)

{
  char *in_RAX;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  longlong unaff_RSI;
  char unaff_R12B;
  bool in_ZF;
  undefined8 uStack_8;
  
  if (in_ZF) {
    *in_RAX = *in_RAX + unaff_BH;
    *param_1 = *param_1;
    *in_RAX = *in_RAX + (char)in_RAX;
    *in_RAX = *in_RAX + (char)((ulonglong)param_2 >> 8);
    *(undefined1 *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
         *(undefined1 *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL));
    uStack_8 = param_2;
    *(undefined1 *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
         *(undefined1 *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL));
    *param_1 = *param_1 + (char)in_RAX;
    *(char *)((longlong)&uStack_8 + unaff_RSI) =
         *(char *)((longlong)&uStack_8 + unaff_RSI) + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *param_1 = *param_1 + unaff_R12B;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

