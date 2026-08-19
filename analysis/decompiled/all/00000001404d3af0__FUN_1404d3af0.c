// Function: FUN_1404d3af0
// Addr: 1404d3af0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d3af0(char param_1)

{
  uint *puVar1;
  byte bVar2;
  uint uVar3;
  longlong in_RAX;
  uint unaff_EBX;
  undefined4 unaff_0000001c;
  longlong unaff_RSI;
  byte *pbVar4;
  
  *(uint *)(in_RAX + 0x20) = *(uint *)(in_RAX + 0x20) & unaff_EBX;
  *(char *)(in_RAX + -8) = *(char *)(in_RAX + -8) + (char)unaff_EBX;
  uVar3 = (int)in_RAX + 0x6e85200;
  pbVar4 = (byte *)(ulonglong)uVar3;
  pbVar4[CONCAT44(unaff_0000001c,unaff_EBX) * 8 + 7] =
       pbVar4[CONCAT44(unaff_0000001c,unaff_EBX) * 8 + 7] + param_1;
  bVar2 = (byte)uVar3;
  *(char *)(unaff_RSI + -0x38) = *(char *)(unaff_RSI + -0x38) + bVar2;
  *pbVar4 = *pbVar4 | bVar2;
  puVar1 = (uint *)(CONCAT71(0xa83600,bRam00000000a8360009 | 9) + -0x77d3fff5);
  *puVar1 = *puVar1 ^ unaff_EBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

