// Function: FUN_1404b887c
// Addr: 1404b887c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b887c(longlong param_1)

{
  byte *pbVar1;
  undefined3 uVar2;
  uint uVar3;
  char cVar4;
  int in_EAX;
  uint uVar5;
  uint *puVar6;
  uint *unaff_RBX;
  longlong unaff_RBP;
  byte in_CF;
  
  uVar5 = in_EAX + 0x6006601 + (uint)in_CF;
  puVar6 = (uint *)(ulonglong)uVar5;
  *(char *)puVar6 = (char)*puVar6 + (char)uVar5;
  *puVar6 = *puVar6 & (uint)param_1;
  uVar2 = (undefined3)(uVar5 >> 8);
  pbVar1 = (byte *)(param_1 + unaff_RBP * 2);
  *pbVar1 = *pbVar1 | (byte)(uVar5 >> 8);
  cVar4 = cRama4001e53c1001e53;
  uVar3 = CONCAT31(uVar2,cRama4001e53c1001e53);
  puVar6 = (uint *)(ulonglong)uVar3;
  LOCK();
  uVar5 = *unaff_RBX;
  *unaff_RBX = (uint)param_1;
  UNLOCK();
  *puVar6 = *puVar6 & uVar3;
  *(char *)puVar6 = (char)*puVar6 + cVar4;
  uVar3 = CONCAT31(uVar2,cRama4001e53c1001e53);
  LOCK();
  *unaff_RBX = uVar5;
  UNLOCK();
  *(uint *)(ulonglong)uVar3 = *(uint *)(ulonglong)uVar3 & uVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

