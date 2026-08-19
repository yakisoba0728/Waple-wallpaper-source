// Function: FUN_1404a5d04
// Addr: 1404a5d04
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a5d04(char *param_1,char *param_2)

{
  byte bVar1;
  undefined7 in_register_00000001;
  
  bVar1 = in((short)param_2);
  *(byte *)CONCAT71(in_register_00000001,bVar1) =
       *(byte *)CONCAT71(in_register_00000001,bVar1) | bVar1;
  *param_1 = *param_1 + '\b';
  *param_2 = *param_2 + (char)param_1;
  *(byte *)CONCAT71(in_register_00000001,bVar1) =
       *(char *)CONCAT71(in_register_00000001,bVar1) + bVar1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

