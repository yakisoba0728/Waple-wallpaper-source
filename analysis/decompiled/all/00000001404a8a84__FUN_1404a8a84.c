// Function: FUN_1404a8a84
// Addr: 1404a8a84
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a8a84(void)

{
  byte in_AL;
  byte in_AH;
  byte bVar1;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  
  bVar1 = in_AH | in_AL;
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(bVar1,in_AL))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(bVar1,in_AL)))
       & CONCAT22(in_register_00000002,CONCAT11(bVar1,in_AL));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

