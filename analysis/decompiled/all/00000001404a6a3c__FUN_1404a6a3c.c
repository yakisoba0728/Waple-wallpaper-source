// Function: FUN_1404a6a3c
// Addr: 1404a6a3c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001404a69f5) */
/* WARNING: Removing unreachable block (ram,0x0001404a6a12) */
/* WARNING: Removing unreachable block (ram,0xf04a7357) */

void FUN_1404a6a3c(char *param_1,undefined8 param_2)

{
  uint *in_RAX;
  uint *puVar1;
  char *pcVar2;
  char unaff_BH;
  char unaff_SPL;
  longlong unaff_RBP;
  char *unaff_RSI;
  
  *(char *)(unaff_RBP + 0x99f7200) =
       *(char *)(unaff_RBP + 0x99f7200) + (char)((ulonglong)param_2 >> 8);
  param_1[-0x61] = param_1[-0x61] + unaff_BH;
  *in_RAX = *in_RAX | (uint)in_RAX;
  puVar1 = (uint *)((ulonglong)in_RAX ^ 0x69);
  *param_1 = *param_1 + unaff_SPL;
  *(char *)puVar1 = (char)*puVar1 + (char)puVar1;
  *(char *)((longlong)puVar1 + -0x61) =
       *(char *)((longlong)puVar1 + -0x61) + (char)((ulonglong)in_RAX >> 8);
  *puVar1 = *puVar1 | (uint)puVar1;
  *puVar1 = *puVar1 | (uint)puVar1;
  pcVar2 = (char *)(CONCAT71((int7)((ulonglong)in_RAX >> 8),(char)puVar1) & 0xffffffffffffff69);
  *param_1 = *param_1 + unaff_SPL;
  *unaff_RSI = *unaff_RSI + (char)pcVar2;
  *pcVar2 = *pcVar2 + (char)pcVar2;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

