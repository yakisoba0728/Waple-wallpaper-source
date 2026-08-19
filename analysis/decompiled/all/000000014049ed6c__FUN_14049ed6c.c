// Function: FUN_14049ed6c
// Addr: 14049ed6c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049ed6c(undefined8 param_1,undefined2 param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  char cVar2;
  char in_AH;
  undefined6 in_register_00000002;
  char *unaff_RBX;
  longlong unaff_RBP;
  
  cVar2 = in(param_2);
  *param_4 = *param_4;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar2)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar2)) + cVar2;
  pcVar1 = (char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,cVar2)) + -0x2cfffed4);
  *pcVar1 = *pcVar1 + in_AH;
  (&stack0x00000000)[unaff_RBP * 8] =
       (&stack0x00000000)[unaff_RBP * 8] + (char)((ulonglong)param_1 >> 8);
  *param_4 = *param_4 + cVar2 + -1;
  *unaff_RBX = *unaff_RBX + (char)param_2;
  *unaff_RBX = *unaff_RBX + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

