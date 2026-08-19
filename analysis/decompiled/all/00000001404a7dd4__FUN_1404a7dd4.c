// Function: FUN_1404a7dd4
// Addr: 1404a7dd4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a7dd4(void)

{
  byte in_AL;
  byte bVar1;
  byte in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  
  bVar1 = in_AL | in_AH;
  *(int *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar1))) =
       *(int *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar1))) +
       CONCAT22(in_register_00000002,CONCAT11(in_AH,bVar1));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

