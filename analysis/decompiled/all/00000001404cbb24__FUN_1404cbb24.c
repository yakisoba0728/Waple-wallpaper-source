// Function: FUN_1404cbb24
// Addr: 1404cbb24
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404cbb24(longlong param_1,undefined8 param_2,undefined8 param_3,undefined1 *param_4)

{
  char cVar1;
  int in_EAX;
  char *pcVar2;
  int unaff_EBX;
  
  pcVar2 = (char *)(ulonglong)(in_EAX + 0x40000634U);
  *param_4 = *param_4;
  cVar1 = (char)(in_EAX + 0x40000634U);
  *pcVar2 = *pcVar2 + cVar1;
  pcVar2[0x69] = pcVar2[0x69] + cVar1;
  *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + unaff_EBX;
  *(char *)(param_1 + 100) = *(char *)(param_1 + 100) + (char)unaff_EBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

