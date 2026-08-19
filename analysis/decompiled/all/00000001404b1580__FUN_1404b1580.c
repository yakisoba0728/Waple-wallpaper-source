// Function: FUN_1404b1580
// Addr: 1404b1580
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b1580(char *param_1,undefined2 param_2)

{
  char *pcVar1;
  int iVar2;
  uint uVar3;
  longlong unaff_RBP;
  longlong unaff_RDI;
  byte in_CF;
  
  iVar2 = in(param_2);
  uVar3 = iVar2 + 0x4b145400 + (uint)in_CF;
  *param_1 = *param_1 + (char)(uVar3 >> 8);
  *(char *)(ulonglong)uVar3 = *(char *)(ulonglong)uVar3 + (char)uVar3;
  in(param_2);
  pcVar1 = (char *)(unaff_RDI + 0x521004a + unaff_RBP * 4);
  *pcVar1 = *pcVar1 + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

