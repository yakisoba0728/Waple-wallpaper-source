// Function: FUN_1404b2980
// Addr: 1404b2980
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b2980(undefined8 param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  char in_AL;
  undefined7 in_register_00000001;
  char unaff_SPL;
  undefined2 in_GS;
  
  *(undefined2 *)CONCAT71(in_register_00000001,in_AL) = in_GS;
  *param_4 = *param_4 + unaff_SPL;
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
  pcVar1 = (char *)(CONCAT71(in_register_00000001,in_AL) + 0x6f);
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_2 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

