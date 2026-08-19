// Function: FUN_1404a74d4
// Addr: 1404a74d4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a74d4(longlong param_1,uint *param_2)

{
  undefined1 uVar1;
  uint uVar2;
  char *in_RAX;
  undefined1 *puVar5;
  char unaff_BL;
  longlong unaff_RSI;
  char in_CF;
  char in_ZF;
  uint *puVar3;
  int *piVar4;
  
  puVar5 = (undefined1 *)(param_1 + -1);
  if (puVar5 == (undefined1 *)0x0 || in_ZF != '\0') {
    *puVar5 = *puVar5;
    uVar2 = (int)in_RAX + 0x64050002;
    puVar3 = (uint *)(ulonglong)uVar2;
    *puVar3 = *puVar3 | uVar2;
    *param_2 = *param_2 | (uint)puVar5;
    *(char *)((longlong)puVar3 + 9) = *(char *)((longlong)puVar3 + 9) + (char)(uVar2 >> 8);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  *(char *)param_2 = ((char)*param_2 - (char)puVar5) - in_CF;
  *in_RAX = *in_RAX + unaff_BL;
  uVar1 = in(0);
  piVar4 = (int *)CONCAT71((int7)((ulonglong)in_RAX >> 8),uVar1);
  (&stack0x00000000)[unaff_RSI * 2] = (&stack0x00000000)[unaff_RSI * 2] + (char)param_2;
  *piVar4 = *piVar4 + (int)piVar4;
  *(char *)param_2 = (char)*param_2 + (char)puVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

