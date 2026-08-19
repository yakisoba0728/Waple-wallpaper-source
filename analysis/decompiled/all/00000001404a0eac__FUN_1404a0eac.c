// Function: FUN_1404a0eac
// Addr: 1404a0eac
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a0eac(uint param_1,longlong param_2)

{
  uint *puVar1;
  undefined1 in_AL;
  undefined1 in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  longlong unaff_RSI;
  
  puVar1 = (uint *)(unaff_RSI +
                   CONCAT44(in_register_00000004,
                            CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))));
  *puVar1 = *puVar1 & param_1;
  (&stack0x00000000)[param_2 * 8] = (&stack0x00000000)[param_2 * 8] + (char)param_1;
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       | CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

