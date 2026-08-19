// Function: FUN_1404bb208
// Addr: 1404bb208
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bb208(longlong param_1,longlong param_2)

{
  char *pcVar1;
  uint *puVar2;
  undefined1 in_AL;
  char in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  longlong unaff_RDI;
  
  *(char *)(param_1 + param_2) = *(char *)(param_1 + param_2) + in_AH;
  pcVar1 = (char *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) + param_2);
  *pcVar1 = *pcVar1 + (char)param_2;
  *(char *)(unaff_RDI + param_1) = *(char *)(unaff_RDI + param_1) + (char)((ulonglong)param_2 >> 8);
  pcVar1 = (char *)(CONCAT44(in_register_00000004,
                             CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) + -0x5cffdeda);
  *pcVar1 = *pcVar1 + (char)param_2;
  puVar2 = (uint *)CONCAT44(in_register_00000004,
                            CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)));
  *puVar2 = *puVar2 & CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

