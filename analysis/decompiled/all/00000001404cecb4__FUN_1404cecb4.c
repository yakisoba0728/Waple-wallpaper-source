// Function: FUN_1404cecb4
// Addr: 1404cecb4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cecb4(void)

{
  undefined1 in_AL;
  undefined1 in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  longlong unaff_RDI;
  
  *(undefined1 *)(unaff_RDI + 0x4a) = *(undefined1 *)(unaff_RDI + 0x4a);
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       & CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

