// Function: FUN_1404c2d20
// Addr: 1404c2d20
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c2d20(longlong param_1,char *param_2)

{
  char cVar1;
  undefined8 unaff_retaddr;
  char *pcVar2;
  
  cVar1 = (char)unaff_retaddr + -0x4c;
  pcVar2 = (char *)CONCAT71((int7)((ulonglong)unaff_retaddr >> 8),cVar1);
  *param_2 = *param_2 + (char)((ulonglong)unaff_retaddr >> 8);
  *pcVar2 = *pcVar2 + cVar1;
  *(char *)(param_1 + 0x61004c2b) = *(char *)(param_1 + 0x61004c2b) - cVar1;
  *param_2 = *param_2 + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

