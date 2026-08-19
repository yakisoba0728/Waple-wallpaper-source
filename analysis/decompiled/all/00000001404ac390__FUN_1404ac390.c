// Function: FUN_1404ac390
// Addr: 1404ac390
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ac390(uint *param_1,uint param_2)

{
  int *piVar1;
  undefined4 in_EAX;
  undefined4 in_register_00000004;
  int unaff_ESI;
  byte in_CF;
  
  piVar1 = (int *)(CONCAT44(in_register_00000004,in_EAX) + 0x10);
  *piVar1 = *piVar1 + unaff_ESI + (uint)in_CF;
  wrmsr((int)param_1,CONCAT44(param_2,in_EAX));
  *(char *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + (char)in_EAX;
  *param_1 = *param_1 & param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

