// Function: FUN_1404a6eb8
// Addr: 1404a6eb8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a6eb8(char *param_1)

{
  char cVar1;
  char cVar4;
  int *piVar2;
  uint *in_RAX;
  undefined7 uVar5;
  longlong unaff_RBP;
  longlong unaff_RSI;
  uint *puVar3;
  
  while( true ) {
    *in_RAX = *in_RAX | (uint)in_RAX;
    *(byte *)(unaff_RBP + 0x4a) = *(byte *)(unaff_RBP + 0x4a) >> 1;
    cVar4 = (char)((ulonglong)in_RAX >> 8);
    *param_1 = *param_1 + cVar4;
    uVar5 = (undefined7)((ulonglong)in_RAX >> 8);
    cVar1 = (char)in_RAX + '\x02';
    puVar3 = (uint *)CONCAT71(uVar5,cVar1);
    (&stack0x00000000)[unaff_RSI * 8] = (&stack0x00000000)[unaff_RSI * 8] + cVar1;
    *(char *)puVar3 = (char)*puVar3 + cVar1;
    *puVar3 = *puVar3 | (uint)puVar3;
    param_1 = param_1 + -1;
    if (param_1 == (char *)0x0) break;
    cVar1 = (char)in_RAX + -0x1e;
    piVar2 = (int *)CONCAT71(uVar5,cVar1);
    *(char *)piVar2 = (char)*piVar2 + cVar1;
    uRam00000001044f6eb4 = uRam00000001044f6eb4 & (uint)piVar2;
    *piVar2 = *piVar2 + (uint)piVar2;
    in_RAX = (uint *)CONCAT71(uVar5,0xd8);
    *in_RAX = *in_RAX | (uint)in_RAX;
  }
  *puVar3 = *puVar3 | (uint)puVar3;
  cRam0000000000000000 = cRam0000000000000000 + cVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

