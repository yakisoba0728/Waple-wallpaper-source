// Function: FUN_1404b5908
// Addr: 1404b5908
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b5908(undefined8 param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  char in_AL;
  undefined7 in_register_00000001;
  char unaff_SPL;
  
  *param_4 = *param_4 + unaff_SPL;
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
  pcVar1 = (char *)(CONCAT71(in_register_00000001,in_AL + (char)((ulonglong)param_2 >> 8)) +
                   0x1004b57);
  *pcVar1 = *pcVar1 + '\x1a';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

