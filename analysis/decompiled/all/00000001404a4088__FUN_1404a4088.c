// Function: FUN_1404a4088
// Addr: 1404a4088
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a4088(undefined8 param_1,char param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  char in_AL;
  char cVar2;
  undefined7 in_register_00000001;
  char unaff_SPL;
  
  cVar2 = in_AL + -0x11;
  *param_4 = *param_4 + unaff_SPL;
  *(char *)CONCAT71(in_register_00000001,cVar2) =
       *(char *)CONCAT71(in_register_00000001,cVar2) + cVar2;
  pcVar1 = (char *)(CONCAT71(in_register_00000001,cVar2) + 0x20);
  *pcVar1 = *pcVar1 + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

