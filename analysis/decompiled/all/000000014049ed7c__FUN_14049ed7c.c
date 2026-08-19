// Function: FUN_14049ed7c
// Addr: 14049ed7c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049ed7c(undefined8 param_1,undefined2 param_2,undefined8 param_3,char *param_4)

{
  char cVar1;
  char *unaff_RBX;
  
  cVar1 = in(param_2);
  *param_4 = *param_4 + cVar1;
  *unaff_RBX = *unaff_RBX + (char)param_2;
  *unaff_RBX = *unaff_RBX + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

