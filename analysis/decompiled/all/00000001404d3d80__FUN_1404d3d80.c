// Function: FUN_1404d3d80
// Addr: 1404d3d80
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d3d80(void)

{
  char cVar1;
  undefined1 in_AL;
  undefined2 in_register_00000002;
  undefined4 in_register_00000004;
  char in_CF;
  
  cVar1 = -in_CF;
  *(uint *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar1,in_AL))) =
       *(int *)CONCAT44(in_register_00000004,CONCAT22(in_register_00000002,CONCAT11(cVar1,in_AL))) +
       CONCAT22(in_register_00000002,CONCAT11(cVar1,in_AL)) + (uint)(in_CF != '\0');
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

