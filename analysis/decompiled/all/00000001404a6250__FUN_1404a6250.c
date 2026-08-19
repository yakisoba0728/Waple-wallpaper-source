// Function: FUN_1404a6250
// Addr: 1404a6250
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a6250(void)

{
  undefined1 in_AL;
  byte in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  int unaff_EBP;
  byte *unaff_RDI;
  
  *unaff_RDI = *unaff_RDI & in_AH;
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       | CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL));
  *(int *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(int *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) +
       unaff_EBP;
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       | CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

