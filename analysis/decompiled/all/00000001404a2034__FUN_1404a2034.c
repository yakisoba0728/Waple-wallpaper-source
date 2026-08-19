// Function: FUN_1404a2034
// Addr: 1404a2034
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a2034(ulonglong param_1,char param_2)

{
  char *pcVar1;
  char in_AL;
  char in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  char *pcVar2;
  char *unaff_RBX;
  undefined4 *unaff_RSI;
  
  pcVar2 = (char *)(param_1 & 0xffffffffffffff49);
  *pcVar2 = *pcVar2 + in_AH;
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       + in_AL;
  pcVar1 = (char *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) + -0xfffb53);
  *pcVar1 = *pcVar1 + in_AL;
  *pcVar2 = *pcVar2 + (char)*unaff_RSI;
  *unaff_RBX = *unaff_RBX + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

