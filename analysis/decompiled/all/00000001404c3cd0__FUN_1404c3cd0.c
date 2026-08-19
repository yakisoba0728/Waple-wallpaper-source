// Function: FUN_1404c3cd0
// Addr: 1404c3cd0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c3cd0(char *param_1,undefined8 param_2)

{
  char *in_RAX;
  char cVar1;
  longlong unaff_RBP;
  char unaff_R12B;
  
  cVar1 = (char)((ulonglong)param_2 >> 8);
  in_RAX[unaff_RBP] = in_RAX[unaff_RBP] + cVar1;
  param_1[unaff_RBP] = param_1[unaff_RBP] + cVar1;
  *in_RAX = *in_RAX + cVar1;
  *param_1 = *param_1 + unaff_R12B;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

