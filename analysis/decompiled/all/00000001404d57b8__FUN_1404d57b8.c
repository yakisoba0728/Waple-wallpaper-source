// Function: FUN_1404d57b8
// Addr: 1404d57b8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d57b8(longlong param_1,char *param_2)

{
  int *piVar1;
  byte bVar2;
  int in_EAX;
  undefined4 in_register_00000004;
  int *unaff_RSI;
  
  piVar1 = (int *)(param_1 + CONCAT44(in_register_00000004,in_EAX));
  *piVar1 = *piVar1 + in_EAX;
  bVar2 = (byte)in_EAX;
  *param_2 = *param_2 + bVar2;
  *(byte *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + bVar2;
  *unaff_RSI = *unaff_RSI + (int)param_2;
  *(byte *)CONCAT44(in_register_00000004,in_EAX) =
       *(byte *)CONCAT44(in_register_00000004,in_EAX) | bVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

