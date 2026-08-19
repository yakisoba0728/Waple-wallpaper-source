// Function: FUN_1404ab100
// Addr: 1404ab100
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ab100(undefined8 param_1,undefined8 param_2)

{
  char *pcVar1;
  byte bVar2;
  byte in_AL;
  undefined7 in_register_00000001;
  longlong unaff_RDI;
  char in_CF;
  
  pcVar1 = (char *)(CONCAT71(in_register_00000001,in_AL) + 0x21004a);
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_2 >> 8) + in_CF;
  bVar2 = *(byte *)CONCAT71(in_register_00000001,in_AL);
  *(byte *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
  *(char *)(unaff_RDI + -0x5077fff2) =
       *(char *)(unaff_RDI + -0x5077fff2) + (char)((ulonglong)param_1 >> 8) + CARRY1(bVar2,in_AL);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

