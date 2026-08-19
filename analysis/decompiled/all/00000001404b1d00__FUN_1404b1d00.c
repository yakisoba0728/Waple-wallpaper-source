// Function: FUN_1404b1d00
// Addr: 1404b1d00
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b1d00(char *param_1)

{
  char *pcVar1;
  undefined1 in_AL;
  char in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  char unaff_BL;
  undefined7 unaff_00000019;
  
  pcVar1 = (char *)(CONCAT71(unaff_00000019,unaff_BL) + (longlong)param_1 * 2);
  *pcVar1 = *pcVar1 + unaff_BL;
  *param_1 = *param_1 + in_AH;
  (&stack0x00000000)
  [(CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) | 4) * 8] =
       (&stack0x00000000)
       [(CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) | 4) *
        8] + (char)param_1;
  *(uint *)(CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) | 4)
       = *(uint *)(CONCAT44(in_register_00000004,
                            CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) | 4) |
         CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)) | 4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

