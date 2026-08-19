// Function: FUN_1404c38ac
// Addr: 1404c38ac
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c38ac(void)

{
  char in_AL;
  char in_AH;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       & CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL));
  *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL))) =
       *(char *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(in_AH,in_AL)))
       + in_AL;
  cRam00000000f44c647b = cRam00000000f44c647b + in_AH;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

