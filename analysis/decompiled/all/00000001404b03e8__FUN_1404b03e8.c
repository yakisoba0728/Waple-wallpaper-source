// Function: FUN_1404b03e8
// Addr: 1404b03e8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b03e8(char *param_1,longlong param_2)

{
  uint uVar1;
  longlong in_RAX;
  char cVar2;
  char unaff_BL;
  char unaff_SPL;
  char *unaff_RDI;
  
  cVar2 = (char)((ulonglong)param_2 >> 8);
  param_1[param_2] = param_1[param_2] + (char)param_2;
  param_1[in_RAX] = param_1[in_RAX] + cVar2;
  *unaff_RDI = *unaff_RDI + unaff_BL;
  uVar1 = (int)CONCAT71((int7)((ulonglong)in_RAX >> 8),(char)in_RAX + cVar2 + -0x15) + 0xeaafffeb;
  *param_1 = *param_1 + unaff_SPL;
  *(char *)(ulonglong)uVar1 = *(char *)(ulonglong)uVar1 + (char)uVar1;
  *unaff_RDI = *unaff_RDI + unaff_BL;
  *param_1 = *param_1 + unaff_SPL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

