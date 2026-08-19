// Function: FUN_1404d032c
// Addr: 1404d032c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d032c(uint *param_1,char *param_2)

{
  byte bVar1;
  byte bVar2;
  char cVar3;
  uint uVar4;
  byte *in_RAX;
  longlong in_FS_OFFSET;
  uint *puVar5;
  
  uRam21004d0200003866 = (uint)in_RAX;
  bVar2 = (byte)in_RAX;
  *param_2 = *param_2 + bVar2;
  bVar1 = *in_RAX;
  *in_RAX = *in_RAX + bVar2;
  cVar3 = bVar2 - in_RAX[in_FS_OFFSET];
  uVar4 = (uint)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar3 - CARRY1(bVar1,bVar2));
  if (SBORROW1(bVar2,in_RAX[in_FS_OFFSET]) == SBORROW1(cVar3,CARRY1(bVar1,bVar2))) {
    uRam21004d0200003866 = uVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uVar4 = uVar4 | *param_1;
  *(char *)(ulonglong)uVar4 = *(char *)(ulonglong)uVar4 - (char)uVar4;
  cVar3 = (char)uVar4 + '0';
  puVar5 = (uint *)(ulonglong)CONCAT31((int3)(uVar4 >> 8),cVar3);
  *(char *)puVar5 = (char)*puVar5 + cVar3;
  *puVar5 = *puVar5 & (uint)param_2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

