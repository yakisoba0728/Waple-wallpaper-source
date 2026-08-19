// Function: FUN_1404d0ae4
// Addr: 1404d0ae4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404d0ae5) overlaps instruction at (ram,0x0001404d0ae4)
    */

void FUN_1404d0ae4(longlong param_1,char *param_2)

{
  char *pcVar1;
  char *in_RAX;
  char cVar2;
  char in_ZF;
  
  if (param_1 + -1 != 0 && in_ZF == '\0') {
    *in_RAX = *in_RAX + (byte)in_RAX;
    in_RAX = (char *)CONCAT71((int7)((ulonglong)in_RAX >> 8),
                              ((byte)in_RAX ^ 8) + (char)((ulonglong)in_RAX >> 8));
  }
  *param_2 = *param_2 + (char)param_2;
  cVar2 = (char)((ulonglong)(param_1 + -1) >> 8);
  in_RAX[0x210049ef] = in_RAX[0x210049ef] + cVar2;
  *in_RAX = *in_RAX + (char)in_RAX;
  *param_2 = *param_2 + (char)param_2;
  pcVar1 = (char *)(CONCAT71((int7)((ulonglong)in_RAX >> 8),
                             (char)in_RAX + (char)((ulonglong)in_RAX >> 8)) + 0x10049ef);
  *pcVar1 = *pcVar1 + cVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

