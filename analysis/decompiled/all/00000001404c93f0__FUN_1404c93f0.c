// Function: FUN_1404c93f0
// Addr: 1404c93f0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c93f0(char *param_1,char *param_2)

{
  undefined1 in_AL;
  char in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  char unaff_BH;
  char *unaff_RDI;
  char in_CF;
  
  unaff_RDI[-0x4099ffcf] = unaff_RDI[-0x4099ffcf] + unaff_BH + in_CF;
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       ^ CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL));
  *param_1 = *param_1 + in_AH;
  *unaff_RDI = *unaff_RDI + (char)param_1;
  in(7);
  *param_2 = *param_2 + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

