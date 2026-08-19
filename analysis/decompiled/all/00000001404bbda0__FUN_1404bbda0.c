// Function: FUN_1404bbda0
// Addr: 1404bbda0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001404bbded) */
/* WARNING: Removing unreachable block (ram,0x0001404bbe07) */
/* WARNING: Removing unreachable block (ram,0x0001404bbe11) */

void FUN_1404bbda0(longlong param_1,uint param_2)

{
  undefined1 *puVar1;
  code *pcVar2;
  uint *in_RAX;
  longlong unaff_RBX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  
  *in_RAX = *in_RAX & param_2;
  *(char *)(unaff_RBP + 2) = *(char *)(unaff_RBP + 2) + (char)((ulonglong)in_RAX >> 8);
  *(byte *)(unaff_RSI + 2) = *(byte *)(unaff_RSI + 2) | (byte)param_2;
  puVar1 = (undefined1 *)(unaff_RBX + 0x4182100 + param_1 * 2);
  *puVar1 = *puVar1;
  pcVar2 = (code *)swi(1);
  (*pcVar2)();
  return;
}

