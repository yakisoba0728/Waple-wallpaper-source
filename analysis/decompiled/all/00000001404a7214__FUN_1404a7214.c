// Function: FUN_1404a7214
// Addr: 1404a7214
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a7214(char *param_1,undefined8 param_2)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  uint uVar4;
  undefined8 in_RAX;
  char unaff_SPL;
  char in_CF;
  byte *pbVar5;
  uint *puVar6;
  
  bVar1 = (char)in_RAX + -0x2c + in_CF;
  pbVar5 = (byte *)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar1);
  *pbVar5 = *pbVar5 | bVar1;
  uVar3 = (int)pbVar5 + 0xb00007c4;
  *(uint *)(ulonglong)uVar3 = *(uint *)(ulonglong)uVar3 | uVar3;
  uVar4 = in(0xf3);
  *(uint *)(ulonglong)uVar4 = *(uint *)(ulonglong)uVar4 | uVar4;
  cVar2 = (char)uVar4 + -0x71;
  uVar3 = CONCAT31((int3)(uVar4 >> 8),cVar2);
  puVar6 = (uint *)(ulonglong)uVar3;
  *param_1 = *param_1 + unaff_SPL;
  *(char *)puVar6 = (char)*puVar6 + cVar2;
  *(char *)((longlong)puVar6 + -0x1afff60d) =
       *(char *)((longlong)puVar6 + -0x1afff60d) + (char)((ulonglong)param_2 >> 8);
  *puVar6 = *puVar6 | uVar3;
  *param_1 = *param_1 + (char)uVar4 + '\x1e';
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

