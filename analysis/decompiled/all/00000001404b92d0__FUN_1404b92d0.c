// Function: FUN_1404b92d0
// Addr: 1404b92d0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b92d0(undefined8 param_1)

{
  char *pcVar1;
  char in_AL;
  char cVar2;
  undefined7 in_register_00000001;
  
  pcVar1 = (char *)(CONCAT71(in_register_00000001,in_AL) + 4);
  *pcVar1 = *pcVar1 + (char)((ulonglong)param_1 >> 8);
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
  cVar2 = in(10);
  *(char *)CONCAT71(in_register_00000001,cVar2) =
       *(char *)CONCAT71(in_register_00000001,cVar2) + cVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

