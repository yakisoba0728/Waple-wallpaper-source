// Function: FUN_1404aa7fc
// Addr: 1404aa7fc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404aa7fc(undefined4 param_1,byte *param_2)

{
  byte bVar1;
  int in_EAX;
  uint uVar2;
  int iVar4;
  int *unaff_RBX;
  byte in_CF;
  byte *pbVar3;
  
  uVar2 = in_EAX + (int)param_2 + (uint)in_CF;
  pbVar3 = (byte *)(ulonglong)uVar2;
  iVar4 = CONCAT31((int3)((uint)param_1 >> 8),bRam000000014baab475);
  bVar1 = *param_2 ^ bRam000000014baab475;
  bRam000000014baab475 = bRam000000014baab475 + (char)param_1;
  *param_2 = bVar1;
  *unaff_RBX = *unaff_RBX + iVar4;
  *(uint *)pbVar3 = *(int *)pbVar3 + uVar2;
  *pbVar3 = *pbVar3 | (byte)uVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

