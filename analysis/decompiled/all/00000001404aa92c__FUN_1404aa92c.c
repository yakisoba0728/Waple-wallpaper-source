// Function: FUN_1404aa92c
// Addr: 1404aa92c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404aa92c(undefined8 param_1,longlong param_2)

{
  uint uVar1;
  char in_AL;
  char in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  char unaff_BH;
  undefined4 *unaff_RSI;
  undefined4 *unaff_RDI;
  
  *unaff_RDI = *unaff_RSI;
  uVar1 = unaff_RSI[1];
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       + unaff_BH + in_AL;
  *(char *)(ulonglong)uVar1 = *(char *)(ulonglong)uVar1 + in_AH;
  (&stack0x00000000)[param_2 * 8] = (&stack0x00000000)[param_2 * 8] + (char)uVar1;
  *(uint *)(CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) | 6)
       = *(uint *)(CONCAT44(in_register_00000004,
                            CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) | 6) |
         CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)) | 6;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

