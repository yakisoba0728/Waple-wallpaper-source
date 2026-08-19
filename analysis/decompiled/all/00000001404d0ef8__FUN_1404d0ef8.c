// Function: FUN_1404d0ef8
// Addr: 1404d0ef8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d0ef8(byte *param_1,int param_2)

{
  char *pcVar1;
  char cVar2;
  longlong in_RAX;
  uint uVar3;
  char *unaff_RBX;
  char *unaff_RSI;
  longlong unaff_RDI;
  
  uVar3 = param_2 + *(int *)(in_RAX + 2);
  *param_1 = *param_1 ^ (byte)((ulonglong)in_RAX >> 8);
  cVar2 = (char)in_RAX + *unaff_RSI;
  *(char *)(ulonglong)uVar3 = *(char *)(ulonglong)uVar3 + (char)uVar3;
  *unaff_RBX = cVar2;
  pcVar1 = (char *)(CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar2) + unaff_RDI * 2);
  *pcVar1 = *pcVar1 + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

