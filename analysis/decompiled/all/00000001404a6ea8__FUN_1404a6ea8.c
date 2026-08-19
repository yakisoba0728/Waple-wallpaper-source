// Function: FUN_1404a6ea8
// Addr: 1404a6ea8
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a6ea8(char *param_1)

{
  char cVar2;
  int *in_RAX;
  uint *puVar1;
  longlong unaff_RBP;
  longlong unaff_RSI;
  undefined7 uVar3;
  
  while( true ) {
    *(char *)in_RAX = (char)*in_RAX + (char)in_RAX;
    uRam00000001044f6eb4 = uRam00000001044f6eb4 & (uint)in_RAX;
    *in_RAX = *in_RAX + (uint)in_RAX;
    uVar3 = (undefined7)((ulonglong)in_RAX >> 8);
    puVar1 = (uint *)CONCAT71(uVar3,0xd8);
    *puVar1 = *puVar1 | (uint)puVar1;
    *puVar1 = *puVar1 | (uint)puVar1;
    *(byte *)(unaff_RBP + 0x4a) = *(byte *)(unaff_RBP + 0x4a) >> 1;
    cVar2 = (char)((ulonglong)in_RAX >> 8);
    *param_1 = *param_1 + cVar2;
    puVar1 = (uint *)CONCAT71(uVar3,0xda);
    (&stack0x00000000)[unaff_RSI * 8] = (&stack0x00000000)[unaff_RSI * 8] + -0x26;
    *(char *)puVar1 = (char)*puVar1 + -0x26;
    *puVar1 = *puVar1 | (uint)puVar1;
    param_1 = param_1 + -1;
    if (param_1 == (char *)0x0) break;
    in_RAX = (int *)CONCAT71(uVar3,0xba);
  }
  *puVar1 = *puVar1 | (uint)puVar1;
  cRam0000000000000000 = cRam0000000000000000 + cVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

