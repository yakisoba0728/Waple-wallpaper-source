// Function: FUN_1404a6ecc
// Addr: 1404a6ecc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a6ecc(char *param_1)

{
  char cVar1;
  char cVar4;
  undefined7 uVar5;
  uint *puVar3;
  uint *in_RAX;
  longlong unaff_RBP;
  longlong unaff_RSI;
  int *piVar2;
  
  while( true ) {
    param_1 = param_1 + -1;
    cVar4 = (char)((ulonglong)in_RAX >> 8);
    if (param_1 == (char *)0x0) break;
    uVar5 = (undefined7)((ulonglong)in_RAX >> 8);
    cVar1 = (char)in_RAX + -0x20;
    piVar2 = (int *)CONCAT71(uVar5,cVar1);
    *(char *)piVar2 = (char)*piVar2 + cVar1;
    uRam00000001044f6eb4 = uRam00000001044f6eb4 & (uint)piVar2;
    *piVar2 = *piVar2 + (uint)piVar2;
    puVar3 = (uint *)CONCAT71(uVar5,0xd8);
    *puVar3 = *puVar3 | (uint)puVar3;
    *puVar3 = *puVar3 | (uint)puVar3;
    *(byte *)(unaff_RBP + 0x4a) = *(byte *)(unaff_RBP + 0x4a) >> 1;
    *param_1 = *param_1 + cVar4;
    in_RAX = (uint *)CONCAT71(uVar5,0xda);
    (&stack0x00000000)[unaff_RSI * 8] = (&stack0x00000000)[unaff_RSI * 8] + -0x26;
    *(char *)in_RAX = (char)*in_RAX + -0x26;
    *in_RAX = *in_RAX | (uint)in_RAX;
  }
  *in_RAX = *in_RAX | (uint)in_RAX;
  cRam0000000000000000 = cRam0000000000000000 + cVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

