// Function: FUN_1404d4af0
// Addr: 1404d4af0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d4af0(undefined8 param_1,char *param_2)

{
  char extraout_AL;
  undefined1 extraout_AH;
  undefined2 extraout_var;
  undefined4 extraout_var_00;
  char cVar1;
  
  cVar1 = (char)((ulonglong)param_1 >> 8);
  func_0x0001614d983e();
  *(char *)CONCAT44(extraout_var_00,CONCAT22(extraout_var,CONCAT11(extraout_AH,extraout_AL))) =
       *(char *)CONCAT44(extraout_var_00,CONCAT22(extraout_var,CONCAT11(extraout_AH,extraout_AL))) +
       extraout_AL;
  *param_2 = *param_2 + cVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

