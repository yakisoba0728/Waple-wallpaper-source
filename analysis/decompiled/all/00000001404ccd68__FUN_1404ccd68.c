// Function: FUN_1404ccd68
// Addr: 1404ccd68
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ccd68(char *param_1,char param_2)

{
  byte in_AL;
  byte in_AH;
  byte bVar1;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  char unaff_SPL;
  char in_CF;
  
  bVar1 = in_AH | in_AL;
  *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(bVar1,in_AL))) =
       *(byte *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(bVar1,in_AL)))
       | param_2 + unaff_SPL + in_CF;
  *param_1 = *param_1 + bVar1;
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(bVar1,in_AL))) =
       *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(bVar1,in_AL)))
       | CONCAT22(in_register_00000002,CONCAT11(bVar1,in_AL));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

