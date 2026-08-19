// Function: FUN_1404cdaf4
// Addr: 1404cdaf4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cdaf4(longlong param_1,longlong param_2)

{
  int *piVar1;
  char *pcVar2;
  int in_EAX;
  undefined4 in_register_00000004;
  longlong unaff_RBX;
  char unaff_R12B;
  byte in_CF;
  
  piVar1 = (int *)(param_1 + CONCAT44(in_register_00000004,in_EAX));
  *piVar1 = (*piVar1 - in_EAX) - (uint)in_CF;
  pcVar2 = (char *)(param_2 + CONCAT44(in_register_00000004,in_EAX) * 2);
  *pcVar2 = *pcVar2 + (char)in_EAX;
  *(char *)CONCAT44(in_register_00000004,in_EAX) =
       *(char *)CONCAT44(in_register_00000004,in_EAX) + (char)in_EAX;
  pcVar2 = (char *)(CONCAT62((int6)((ulonglong)param_2 >> 0x10),CONCAT11(0x2b,(char)param_2)) +
                   unaff_RBX * 8);
  *pcVar2 = *pcVar2 + '+';
  pcVar2 = (char *)(CONCAT44(in_register_00000004,in_EAX) + 0x39);
  *pcVar2 = *pcVar2 + unaff_R12B;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

