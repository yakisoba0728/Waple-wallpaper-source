// Function: FUN_1404d34ac
// Addr: 1404d34ac
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d34ac(undefined8 param_1,char param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  char in_AL;
  undefined1 in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  char unaff_SPL;
  
  *param_4 = *param_4 + unaff_SPL;
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       + in_AL;
  pcVar1 = (char *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) + -0x14);
  *pcVar1 = *pcVar1 + param_2;
  *param_4 = *param_4 + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

