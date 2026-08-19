// Function: FUN_1404bdb9c
// Addr: 1404bdb9c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bdb9c(undefined8 param_1,char param_2)

{
  char *pcVar1;
  byte bVar2;
  undefined3 uVar3;
  uint uVar4;
  uint *in_RAX;
  uint *puVar5;
  
  uVar4 = (uint)in_RAX | *in_RAX;
  bVar2 = (char)uVar4 + (char)(uVar4 >> 8);
  uVar3 = (undefined3)(uVar4 >> 8);
  uVar4 = CONCAT31(uVar3,bVar2 | *(byte *)(ulonglong)CONCAT31(uVar3,bVar2)) | 0x5000964;
  pcVar1 = (char *)(((ulonglong)uVar4 ^ 8) + 0x5f);
  *pcVar1 = *pcVar1 + (char)(uVar4 >> 8);
  uVar4 = CONCAT31((int3)(uVar4 >> 8),param_2) & 0x255f80ff;
  puVar5 = (uint *)(ulonglong)uVar4;
  *puVar5 = *puVar5 & uVar4;
  *(char *)puVar5 = (char)*puVar5 + param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

