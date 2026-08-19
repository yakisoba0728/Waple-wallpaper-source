// Function: FUN_1404ac61c
// Addr: 1404ac61c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ac61c(undefined8 param_1,undefined4 param_2)

{
  char *pcVar1;
  char in_AL;
  undefined7 in_register_00000001;
  char cVar2;
  undefined6 uVar3;
  char unaff_BL;
  char unaff_SPL;
  char in_CF;
  
  uVar3 = (undefined6)((ulonglong)param_1 >> 0x10);
  cVar2 = ((char)((ulonglong)param_1 >> 8) - in_AL) - in_CF;
  *(char *)CONCAT62(uVar3,CONCAT11(cVar2,(char)param_1)) =
       *(char *)CONCAT62(uVar3,CONCAT11(cVar2,(char)param_1)) + unaff_SPL;
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + in_AL;
  pcVar1 = (char *)(CONCAT71(in_register_00000001,in_AL) + -0x3cffefc7);
  *pcVar1 = *pcVar1 + (char)((uint)param_2 >> 8);
  *(char *)CONCAT71(in_register_00000001,in_AL) =
       *(char *)CONCAT71(in_register_00000001,in_AL) + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

