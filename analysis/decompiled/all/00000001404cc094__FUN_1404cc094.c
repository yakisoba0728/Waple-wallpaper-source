// Function: FUN_1404cc094
// Addr: 1404cc094
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cc094(longlong param_1,undefined8 param_2)

{
  undefined1 in_AL;
  undefined1 in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  longlong unaff_RBX;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       & CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL));
  *(char *)(unaff_RBX + param_1) = *(char *)(unaff_RBX + param_1) + (char)((ulonglong)param_2 >> 8);
  *(byte *)(unaff_RBX + -0x74b7ffcc) = *(byte *)(unaff_RBX + -0x74b7ffcc) & (byte)param_1;
  *unaff_RDI = *unaff_RSI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

