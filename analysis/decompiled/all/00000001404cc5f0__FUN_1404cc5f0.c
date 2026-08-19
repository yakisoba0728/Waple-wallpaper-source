// Function: FUN_1404cc5f0
// Addr: 1404cc5f0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404cc5fb) overlaps instruction at (ram,0x0001404cc5fa)
    */

void FUN_1404cc5f0(longlong param_1,longlong param_2)

{
  byte *pbVar1;
  uint uVar2;
  byte bVar4;
  int *in_RAX;
  uint *puVar3;
  char *pcVar5;
  uint *puStack_8;
  
  *in_RAX = *in_RAX + (int)param_1;
  uVar2 = (int)in_RAX + *in_RAX;
  puVar3 = (uint *)(ulonglong)uVar2;
  pbVar1 = (byte *)(param_2 + 4);
  bVar4 = (byte)(uVar2 >> 8);
  *pbVar1 = *pbVar1 | bVar4;
  pcVar5 = (char *)(param_1 + -1);
  if (pcVar5 != (char *)0x0 && *pbVar1 != 0) {
    *pcVar5 = *pcVar5 + bVar4;
    puVar3 = (uint *)((ulonglong)uVar2 | 4);
  }
  puStack_8 = puVar3;
  *(char *)puVar3 = (char)*puVar3 + (char)puVar3;
  *(uint *)((longlong)&puStack_8 + (longlong)puVar3) =
       *(uint *)((longlong)&puStack_8 + (longlong)puVar3) & (uint)pcVar5;
  uVar2 = ((uint)puVar3 | *puVar3) + 0x80000a34;
  *(byte *)(ulonglong)uVar2 = *(byte *)(ulonglong)uVar2 | (byte)uVar2;
  *pcVar5 = *pcVar5 + ((byte)(uVar2 >> 8) ^ 0x20);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

