// Function: FUN_1404a3d90
// Addr: 1404a3d90
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404a3d90(void)

{
  byte bVar1;
  char cVar2;
  uint uVar4;
  uint *in_RAX;
  uint unaff_ESI;
  byte bVar3;
  char *pcVar5;
  
  uRam00000001947f3d9e = uRam00000001947f3d9e & unaff_ESI;
  uVar4 = (uint)in_RAX;
  bVar3 = (byte)(uVar4 - *in_RAX);
  bVar1 = bVar3 + 0x74;
  cVar2 = bVar1 + (uVar4 < *in_RAX);
  pcVar5 = (char *)(ulonglong)CONCAT31((int3)(uVar4 - *in_RAX >> 8),cVar2);
  *pcVar5 = (*pcVar5 - cVar2) - (0x8b < bVar3 || CARRY1(bVar1,uVar4 < *in_RAX));
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

