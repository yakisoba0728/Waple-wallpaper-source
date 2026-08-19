// Function: FUN_1404a0398
// Addr: 1404a0398
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a0398(char param_1,longlong param_2)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  uint *in_RAX;
  char *unaff_RBX;
  uint *puVar5;
  
  *in_RAX = *in_RAX & (uint)in_RAX;
  uVar4 = *in_RAX;
  *(byte *)in_RAX = (byte)*in_RAX + (byte)in_RAX;
  iVar3 = (uint)in_RAX + 0xdc00032a + (uint)CARRY1((byte)uVar4,(byte)in_RAX);
  cVar2 = (char)iVar3 - *unaff_RBX;
  uVar4 = CONCAT31((int3)((uint)iVar3 >> 8),cVar2);
  puVar5 = (uint *)(ulonglong)uVar4;
  pcVar1 = (char *)(param_2 + 0x21004a + (longlong)puVar5);
  *pcVar1 = *pcVar1 + param_1;
  *(char *)puVar5 = (char)*puVar5 + cVar2;
  uVar4 = uVar4 + *puVar5 + 0x7800032a + (uint)CARRY4(uVar4,*puVar5);
  puVar5 = (uint *)(ulonglong)uVar4;
  *puVar5 = *puVar5 & uVar4;
  *(char *)puVar5 = (char)*puVar5 + (char)uVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

