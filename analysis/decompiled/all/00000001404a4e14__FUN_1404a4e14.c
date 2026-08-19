// Function: FUN_1404a4e14
// Addr: 1404a4e14
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a4e14(char *param_1,undefined8 param_2)

{
  char in_AL;
  char cVar1;
  undefined7 in_register_00000001;
  longlong unaff_RBX;
  char in_CF;
  
  cVar1 = in_AL + 'M' + in_CF;
  *param_1 = *param_1 + '\x19';
  *(char *)CONCAT71(in_register_00000001,cVar1) =
       *(char *)CONCAT71(in_register_00000001,cVar1) + cVar1;
  *(char *)(unaff_RBX + -0x21) = *(char *)(unaff_RBX + -0x21) + (char)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

