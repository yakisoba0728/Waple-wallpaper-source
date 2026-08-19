// Function: FUN_1404a3dc0
// Addr: 1404a3dc0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a3dc0(char *param_1)

{
  char cVar1;
  char in_AL;
  char in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  char unaff_BH;
  longlong unaff_RBP;
  
  out(6,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)));
  cVar1 = in_AL * '\x02';
  *param_1 = *param_1 + in_AH;
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar1))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar1)))
       + cVar1;
  out(6,cVar1 + unaff_BH);
  *(char *)(unaff_RBP + -0x19) = *(char *)(unaff_RBP + -0x19) + cVar1 + unaff_BH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

