// Function: FUN_1404a4068
// Addr: 1404a4068
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a4068(undefined8 param_1,undefined2 param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  byte bVar2;
  undefined4 in_EAX;
  undefined4 in_register_00000004;
  char unaff_BH;
  longlong unaff_RBP;
  byte *unaff_RDI;
  
  bVar2 = (byte)in_EAX;
  *unaff_RDI = *unaff_RDI & bVar2;
  *(char *)(unaff_RBP + 0x4000720) = *(char *)(unaff_RBP + 0x4000720) + unaff_BH;
  out(param_2,in_EAX);
  *param_4 = *param_4 + -8;
  pcVar1 = (char *)(CONCAT44(in_register_00000004,in_EAX) + CONCAT44(in_register_00000004,in_EAX));
  *pcVar1 = *pcVar1 + bVar2;
  pcVar1 = (char *)(CONCAT44(in_register_00000004,in_EAX) + 6);
  *pcVar1 = *pcVar1 + unaff_BH;
  *(byte *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + bVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

