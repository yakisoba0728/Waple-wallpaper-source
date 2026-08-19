// Function: FUN_1404b4160
// Addr: 1404b4160
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b4160(void)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  byte bVar5;
  undefined8 in_RAX;
  longlong unaff_RBX;
  int *piVar4;
  
  bVar2 = (byte)in_RAX;
  bVar5 = (byte)((ulonglong)in_RAX >> 8);
  piVar4 = (int *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),CONCAT11(bVar5 + bVar2,bVar2));
  uVar3 = ((int)piVar4 - *piVar4) - (uint)CARRY1(bVar5,bVar2);
  pbVar1 = (byte *)(unaff_RBX + -0x43d8ffe8);
  bVar2 = *pbVar1;
  *pbVar1 = (char)*pbVar1 >> 1;
  *(char *)(ulonglong)uVar3 = (*(char *)(ulonglong)uVar3 - (char)uVar3) - (bVar2 & 1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

