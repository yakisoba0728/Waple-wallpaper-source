// Function: FUN_1404a0e08
// Addr: 1404a0e08
// Size: 1 bytes


void FUN_1404a0e08(char *param_1,longlong param_2)

{
  uint uVar1;
  char cVar2;
  uint uVar3;
  char *in_RAX;
  int *piVar5;
  char unaff_SPL;
  char *unaff_RSI;
  char *pcVar4;
  
  *(uint *)(param_2 + 0xd040003) = *(uint *)(param_2 + 0xd040003) | (uint)param_2;
  *param_1 = *param_1 + unaff_SPL;
  *in_RAX = *in_RAX + (char)in_RAX;
  unaff_RSI[-0x38fffc6f] = unaff_RSI[-0x38fffc6f] + (char)((ulonglong)in_RAX >> 8);
  piVar5 = (int *)((ulonglong)in_RAX & 0xffffffff);
  cVar2 = in(0xc);
  uVar1 = CONCAT31((int3)((uint)((int)param_1 + *(int *)((ulonglong)param_1 & 0xffffffff)) >> 8),
                   cVar2);
  pcVar4 = (char *)(ulonglong)uVar1;
  *(char *)piVar5 = (char)*piVar5 + unaff_SPL;
  *pcVar4 = *pcVar4 + cVar2;
  pcVar4[-0x59fffc6f] = pcVar4[-0x59fffc6f] + cVar2;
  uVar3 = (int)in_RAX + *piVar5;
  *(char *)(ulonglong)uVar1 = *(char *)(ulonglong)uVar1 + (char)(uVar3 >> 8);
  *unaff_RSI = *unaff_RSI + cVar2;
  *(char *)(ulonglong)uVar3 = *(char *)(ulonglong)uVar3 + (char)uVar3;
  do {
                    /* WARNING: Do nothing block with infinite loop */
  } while( true );
}

