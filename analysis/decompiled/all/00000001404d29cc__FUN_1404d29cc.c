// Function: FUN_1404d29cc
// Addr: 1404d29cc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d29cc(longlong param_1)

{
  byte in_AL;
  char cVar1;
  undefined1 in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  uint unaff_EBX;
  char *unaff_RBP;
  uint *unaff_RDI;
  
  cVar1 = in_AL + 0x54;
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar1))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar1)))
       + cVar1 + (0xab < in_AL);
  if (param_1 + -1 == 0 ||
      *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar1)))
      == '\0') {
    *unaff_RBP = *unaff_RBP - (char)(param_1 + -1);
    *unaff_RDI = *unaff_RDI & unaff_EBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar1))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar1)))
       & CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar1));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

