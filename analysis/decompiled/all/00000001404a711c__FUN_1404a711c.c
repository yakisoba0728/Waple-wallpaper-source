// Function: FUN_1404a711c
// Addr: 1404a711c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Removing unreachable block (ram,0x0001404a7191) */
/* WARNING: Removing unreachable block (ram,0x0001404a7193) */
/* WARNING: Removing unreachable block (ram,0x0001404a71dd) */

void FUN_1404a711c(char *param_1,undefined8 param_2)

{
  ulonglong uVar1;
  undefined1 uVar2;
  byte bVar3;
  uint uVar4;
  uint *in_RAX;
  uint *puVar5;
  char cVar6;
  longlong unaff_RSI;
  
  do {
    cVar6 = (char)((ulonglong)param_2 >> 8);
    *(byte *)((longlong)in_RAX + 0x4a) = *(byte *)((longlong)in_RAX + 0x4a) - cVar6;
    *param_1 = *param_1 + (char)((ulonglong)in_RAX >> 8);
    uVar4 = (int)in_RAX + 0xe4050002;
    *(int *)(ulonglong)uVar4 = *(int *)(ulonglong)uVar4 + uVar4;
    uVar2 = in((short)param_2);
    in_RAX = (uint *)(ulonglong)CONCAT31((int3)(uVar4 >> 8),uVar2);
    while( true ) {
      uVar4 = (uint)in_RAX;
      *in_RAX = *in_RAX | uVar4;
      if (*in_RAX != 0) break;
      *in_RAX = *in_RAX | uVar4;
      *param_1 = *param_1;
      bVar3 = (char)in_RAX + 2;
      in_RAX = (uint *)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar3);
      (&stack0x00000000)[unaff_RSI * 8] = (&stack0x00000000)[unaff_RSI * 8] + bVar3;
      uVar4 = *in_RAX;
      *(byte *)in_RAX = (byte)*in_RAX + bVar3;
      if (CARRY1((byte)uVar4,bVar3) || (byte)*in_RAX == 0) {
        *in_RAX = *in_RAX | (uint)in_RAX;
        uVar2 = in((short)in_RAX);
        uVar1 = CONCAT71((int7)((ulonglong)param_2 >> 8),uVar2);
        puVar5 = (uint *)(uVar1 & 0xffffffff);
        *puVar5 = *puVar5 | (uint)uVar1;
        *param_1 = *param_1 + cVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
    }
    *in_RAX = *in_RAX | uVar4;
  } while( true );
}

