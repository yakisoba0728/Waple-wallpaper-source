// Function: FUN_1404c5788
// Addr: 1404c5788
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404c5788(void)

{
  byte bVar1;
  byte bVar2;
  char cVar4;
  undefined8 in_RAX;
  int unaff_ESI;
  uint uVar5;
  byte *pbVar3;
  
  bVar2 = (char)in_RAX + 0x60;
  pbVar3 = (byte *)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar2);
  uVar5 = unaff_ESI + *(int *)pbVar3;
  cVar4 = (char)((ulonglong)in_RAX >> 8);
  *pbVar3 = *pbVar3 + cVar4;
  *(byte *)(ulonglong)uVar5 = *(byte *)(ulonglong)uVar5 >> 1;
  *pbVar3 = *pbVar3 + cVar4;
  bVar1 = *pbVar3;
  *pbVar3 = *pbVar3 + bVar2;
  *(uint *)pbVar3 = (*(int *)pbVar3 - uVar5) - (uint)CARRY1(bVar1,bVar2);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

