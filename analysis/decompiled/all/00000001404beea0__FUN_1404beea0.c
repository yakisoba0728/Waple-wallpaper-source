// Function: FUN_1404beea0
// Addr: 1404beea0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404beea0(undefined8 param_1,longlong param_2)

{
  char *pcVar1;
  byte bVar2;
  byte in_AL;
  undefined7 in_register_00000001;
  char cVar3;
  char unaff_BL;
  longlong unaff_RBP;
  char in_CF;
  
  cVar3 = (char)((ulonglong)param_1 >> 8);
  *(char *)(param_2 + -0x65a4ffda) = *(char *)(param_2 + -0x65a4ffda) + unaff_BL + in_CF;
  pcVar1 = (char *)(unaff_RBP * 9 + 0x21004b);
  *pcVar1 = *pcVar1 + cVar3;
  bVar2 = *(byte *)CONCAT71(in_register_00000001,in_AL);
  *(byte *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
  *(char *)(param_2 + -0x65a4ffda) =
       *(char *)(param_2 + -0x65a4ffda) + unaff_BL + CARRY1(bVar2,in_AL);
  pcVar1 = (char *)(unaff_RBP * 9 + 0x21004b);
  *pcVar1 = *pcVar1 + cVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

