// Function: FUN_1404a7138
// Addr: 1404a7138
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001404a7191) */
/* WARNING: Removing unreachable block (ram,0x0001404a7193) */
/* WARNING: Removing unreachable block (ram,0x0001404a71dd) */

void FUN_1404a7138(char *param_1,undefined8 param_2)

{
  ulonglong uVar1;
  char cVar2;
  undefined1 uVar3;
  uint uVar4;
  uint *puVar5;
  undefined8 in_RAX;
  longlong unaff_RSI;
  
  puVar5 = (uint *)CONCAT71((int7)((ulonglong)in_RAX >> 8),(char)in_RAX + -0xc);
  while( true ) {
    uVar4 = *puVar5;
    *(byte *)puVar5 = (byte)*puVar5 + (byte)puVar5;
    cVar2 = (char)((ulonglong)param_2 >> 8);
    if (CARRY1((byte)uVar4,(byte)puVar5) || (byte)*puVar5 == 0) break;
    while( true ) {
      uVar4 = (uint)puVar5;
      *puVar5 = *puVar5 | uVar4;
      if (*puVar5 == 0) break;
      *puVar5 = *puVar5 | uVar4;
      *(byte *)((longlong)puVar5 + 0x4a) = *(byte *)((longlong)puVar5 + 0x4a) - cVar2;
      *param_1 = *param_1 + (char)((ulonglong)puVar5 >> 8);
      uVar4 = uVar4 + 0xe4050002;
      *(int *)(ulonglong)uVar4 = *(int *)(ulonglong)uVar4 + uVar4;
      uVar3 = in((short)param_2);
      puVar5 = (uint *)(ulonglong)CONCAT31((int3)(uVar4 >> 8),uVar3);
    }
    *puVar5 = *puVar5 | uVar4;
    *param_1 = *param_1;
    cVar2 = (char)puVar5 + '\x02';
    puVar5 = (uint *)CONCAT71((int7)((ulonglong)puVar5 >> 8),cVar2);
    (&stack0x00000000)[unaff_RSI * 8] = (&stack0x00000000)[unaff_RSI * 8] + cVar2;
  }
  *puVar5 = *puVar5 | (uint)puVar5;
  uVar3 = in((short)puVar5);
  uVar1 = CONCAT71((int7)((ulonglong)param_2 >> 8),uVar3);
  puVar5 = (uint *)(uVar1 & 0xffffffff);
  *puVar5 = *puVar5 | (uint)uVar1;
  *param_1 = *param_1 + cVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

