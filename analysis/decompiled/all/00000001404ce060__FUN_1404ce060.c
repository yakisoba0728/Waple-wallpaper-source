// Function: FUN_1404ce060
// Addr: 1404ce060
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ce060(char *param_1,undefined2 param_2)

{
  undefined1 uVar1;
  char in_AL;
  undefined1 in_AH;
  undefined6 in_register_00000002;
  longlong unaff_RBX;
  undefined1 *unaff_RDI;
  float10 in_ST0;
  
  uVar1 = in(param_2);
  *unaff_RDI = uVar1;
  *(short *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + 0x21 +
            CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL))) = (short)in_ST0;
  *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,in_AL)) + in_AL;
  unaff_RDI[unaff_RBX * 8 + 0x4d] =
       unaff_RDI[unaff_RBX * 8 + 0x4d] + (char)((ulonglong)param_1 >> 8);
  *param_1 = *param_1 + (char)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

