// Function: FUN_1404ad608
// Addr: 1404ad608
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ad608(char *param_1,longlong param_2)

{
  byte in_AL;
  byte bVar1;
  undefined7 in_register_00000001;
  
  bVar1 = in_AL | *(byte *)(param_2 + 0x7004e006);
  *(byte *)CONCAT71(in_register_00000001,bVar1) =
       *(byte *)CONCAT71(in_register_00000001,bVar1) ^ bVar1;
  *param_1 = *param_1 + bVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

