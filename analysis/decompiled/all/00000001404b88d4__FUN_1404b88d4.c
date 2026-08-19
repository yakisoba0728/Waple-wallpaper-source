// Function: FUN_1404b88d4
// Addr: 1404b88d4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b88d4(undefined8 param_1)

{
  int iVar1;
  uint uVar2;
  byte bVar4;
  undefined8 in_RAX;
  undefined8 uVar3;
  undefined4 uVar5;
  int *unaff_RBX;
  int unaff_EBP;
  int *unaff_RSI;
  
  uVar5 = (undefined4)((ulonglong)param_1 >> 0x20);
  uVar3 = CONCAT71((int7)((ulonglong)in_RAX >> 8),uRama4001e53c1001e53);
  LOCK();
  iVar1 = *unaff_RBX;
  *unaff_RBX = (int)param_1;
  UNLOCK();
  *unaff_RSI = *unaff_RSI + unaff_EBP;
  uVar2 = (int)uVar3 + 0x782e00;
  bVar4 = (byte)(uVar2 >> 8);
  *(byte *)CONCAT44(uVar5,iVar1) = *(char *)CONCAT44(uVar5,iVar1) + bVar4;
  *(char *)(ulonglong)uVar2 = *(char *)(ulonglong)uVar2 + (char)uVar2;
  *unaff_RBX = *unaff_RBX + iVar1;
  *(char *)unaff_RSI = (char)*unaff_RSI + (char)uVar2;
  *(byte *)CONCAT44(uVar5,iVar1) = *(byte *)CONCAT44(uVar5,iVar1) ^ bVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

