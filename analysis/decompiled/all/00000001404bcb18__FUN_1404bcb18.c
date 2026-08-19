// Function: FUN_1404bcb18
// Addr: 1404bcb18
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bcb18(undefined8 param_1,char param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  char cVar2;
  undefined8 in_RAX;
  longlong *unaff_RBP;
  longlong lVar3;
  longlong unaff_RDI;
  char in_CF;
  
  *(char *)(unaff_RDI + 0x23) = *(char *)(unaff_RDI + 0x23) + (char)((ulonglong)in_RAX >> 8) + in_CF
  ;
  cVar2 = (char)in_RAX + (char)((ulonglong)param_1 >> 8);
  lVar3 = *unaff_RBP;
  *param_4 = *param_4 + cVar2;
  pcVar1 = (char *)(lVar3 + 0x7a0012f4);
  *pcVar1 = *pcVar1 + cVar2;
  pcVar1 = (char *)(lVar3 + -0x1c);
  *pcVar1 = *pcVar1 + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

