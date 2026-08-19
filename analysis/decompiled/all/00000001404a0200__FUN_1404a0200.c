// Function: FUN_1404a0200
// Addr: 1404a0200
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a0200(void)

{
  byte bVar1;
  byte in_AL;
  undefined1 in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  byte *unaff_RDI;
  
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       & CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL));
  bVar1 = *(byte *)CONCAT44(in_register_00000004,
                            CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)));
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       + in_AL;
  *unaff_RDI = (byte)(CONCAT11(CARRY1(bVar1,in_AL),*unaff_RDI) >> 3) | *unaff_RDI << 6;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

