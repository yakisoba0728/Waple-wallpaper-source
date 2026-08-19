// Function: FUN_1404ca32c
// Addr: 1404ca32c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ca32c(char *param_1,uint *param_2)

{
  char *pcVar1;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  longlong unaff_RBP;
  char unaff_R12B;
  
  (&stack0x00000000)[(longlong)param_1] =
       (&stack0x00000000)[(longlong)param_1] + (char)((ulonglong)param_2 >> 8);
  *(char *)(unaff_RBP + -0x49a7ffce) = *(char *)(unaff_RBP + -0x49a7ffce) << 1;
  *param_1 = *param_1 + unaff_R12B;
  pcVar1 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x680032b0);
  *pcVar1 = *pcVar1 + unaff_BH;
  *param_2 = *param_2 & (uint)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

