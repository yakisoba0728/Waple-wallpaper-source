// Function: FUN_1404cc4b0
// Addr: 1404cc4b0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

char FUN_1404cc4b0(undefined8 param_1,char param_2)

{
  char *pcVar1;
  char cVar2;
  char in_AL;
  undefined7 in_register_00000001;
  longlong unaff_RDI;
  
  pcVar1 = (char *)(unaff_RDI + CONCAT71(in_register_00000001,in_AL));
  cVar2 = *pcVar1;
  *pcVar1 = *pcVar1 + param_2;
  if (!SCARRY1(cVar2,param_2)) {
    return in_AL;
  }
  cVar2 = *(char *)CONCAT71(in_register_00000001,in_AL);
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
  if (!SCARRY1(cVar2,in_AL)) {
    return in_AL;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

