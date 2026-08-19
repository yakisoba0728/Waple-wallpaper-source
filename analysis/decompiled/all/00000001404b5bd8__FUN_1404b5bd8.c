// Function: FUN_1404b5bd8
// Addr: 1404b5bd8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b5bd8(char param_1,longlong param_2,undefined8 param_3,char *param_4)

{
  byte in_AL;
  undefined7 in_register_00000001;
  byte *unaff_retaddr;
  
  *(char *)(param_2 + -0x13ffe51f) = *(char *)(param_2 + -0x13ffe51f) + (char)param_2;
  *param_4 = *param_4 + '\b';
  *unaff_retaddr = *unaff_retaddr | in_AL & 0x1a;
  *(char *)(CONCAT71(in_register_00000001,in_AL) & 0xffffffffffffff1a) =
       *(char *)(CONCAT71(in_register_00000001,in_AL) & 0xffffffffffffff1a) + param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

