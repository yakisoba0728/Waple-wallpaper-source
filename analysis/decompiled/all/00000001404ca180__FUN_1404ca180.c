// Function: FUN_1404ca180
// Addr: 1404ca180
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ca180(longlong param_1,int param_2)

{
  byte in_AL;
  undefined7 in_register_00000001;
  
  *(int *)CONCAT71(in_register_00000001,in_AL) =
       *(int *)CONCAT71(in_register_00000001,in_AL) + param_2;
  *(byte *)CONCAT71(in_register_00000001,in_AL) =
       *(byte *)CONCAT71(in_register_00000001,in_AL) | in_AL;
  *(char *)(param_1 + 0xc321000) = *(char *)(param_1 + 0xc321000) + (char)((uint)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

