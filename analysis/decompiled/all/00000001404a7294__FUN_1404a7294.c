// Function: FUN_1404a7294
// Addr: 1404a7294
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001404a729f) */
/* WARNING: Removing unreachable block (ram,0x0001404a72f9) */
/* WARNING: Removing unreachable block (ram,0x0001404a72af) */

void FUN_1404a7294(void)

{
  char in_AL;
  char cVar1;
  undefined1 in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  undefined1 *unaff_RSI;
  undefined1 *unaff_RDI;
  
  cVar1 = in_AL >> 1;
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar1))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar1)))
       | CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar1));
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar1))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar1)))
       | CONCAT22(in_register_00000002,CONCAT11(in_AH,cVar1));
  *unaff_RDI = *unaff_RSI;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

