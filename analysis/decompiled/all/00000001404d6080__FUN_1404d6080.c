// Function: FUN_1404d6080
// Addr: 1404d6080
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d6080(longlong param_1,longlong param_2)

{
  char *pcVar1;
  undefined1 in_AL;
  char in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  longlong unaff_RDI;
  
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       & CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL));
  pcVar1 = (char *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) + param_2);
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_2 >> 8);
  *(char *)(unaff_RDI + param_1) = *(char *)(unaff_RDI + param_1) + in_AH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

