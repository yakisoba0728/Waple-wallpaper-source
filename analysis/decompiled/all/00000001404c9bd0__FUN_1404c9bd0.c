// Function: FUN_1404c9bd0
// Addr: 1404c9bd0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c9bd0(longlong param_1,undefined8 param_2)

{
  char *pcVar1;
  char in_AL;
  undefined7 in_register_00000001;
  char cVar2;
  undefined1 unaff_BL;
  undefined7 unaff_00000019;
  
  cVar2 = (char)((ulonglong)param_2 >> 8);
  pcVar1 = (char *)(CONCAT71(unaff_00000019,unaff_BL) + param_1);
  *pcVar1 = *pcVar1 + cVar2;
  pcVar1 = (char *)(CONCAT71(in_register_00000001,in_AL) + param_1);
  *pcVar1 = *pcVar1 + cVar2;
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

