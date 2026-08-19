// Function: FUN_1404d4280
// Addr: 1404d4280
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d4280(int *param_1,longlong param_2)

{
  char *in_RAX;
  char unaff_BL;
  char unaff_BH;
  int unaff_EBP;
  char *unaff_RSI;
  
  *(char *)(param_2 * 5) = *(char *)(param_2 * 5) + (char)in_RAX;
  in_RAX[param_2] = in_RAX[param_2] + unaff_BH;
  *in_RAX = *in_RAX + (char)in_RAX;
  *param_1 = *param_1 + unaff_EBP;
  *(int *)(in_RAX + 4) = *(int *)(in_RAX + 4) - unaff_EBP;
  *unaff_RSI = *unaff_RSI + unaff_BL;
  *unaff_RSI = *unaff_RSI + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

