// Function: FUN_1404a4958
// Addr: 1404a4958
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a4958(int param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  byte in_AL;
  undefined7 in_register_00000001;
  char cVar1;
  char unaff_BL;
  undefined7 unaff_00000019;
  int unaff_ESP;
  char *unaff_RDI;
  
  *param_4 = *param_4 + (in_AL ^ 0xe6);
  cVar1 = (char)((uint)(param_1 - *(int *)CONCAT71(unaff_00000019,unaff_BL)) >> 8);
  *(char *)CONCAT71(unaff_00000019,unaff_BL) = *(char *)CONCAT71(unaff_00000019,unaff_BL) + cVar1;
  *(char *)CONCAT71(unaff_00000019,unaff_BL) = *(char *)CONCAT71(unaff_00000019,unaff_BL) + cVar1;
  *(int *)(CONCAT71(in_register_00000001,in_AL) ^ 0xcd) =
       *(int *)(CONCAT71(in_register_00000001,in_AL) ^ 0xcd) + unaff_ESP;
  *unaff_RDI = *unaff_RDI + unaff_BL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

