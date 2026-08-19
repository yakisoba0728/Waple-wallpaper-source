// Function: FUN_1404d5f48
// Addr: 1404d5f48
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d5f48(uint param_1,longlong param_2)

{
  byte *pbVar1;
  uint *puVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  int *in_RAX;
  byte bVar6;
  longlong unaff_RBP;
  
  uVar4 = *(uint *)((longlong)in_RAX + param_2);
  iVar5 = *in_RAX;
  *(char *)in_RAX = (char)*in_RAX + (char)param_1;
  if (!SCARRY1((char)iVar5,(char)param_1)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  puVar2 = (uint *)((ulonglong)uVar4 - 0xb71fff4);
  uVar4 = *puVar2;
  *puVar2 = *puVar2 + param_1;
  iVar5 = (int)in_RAX + *in_RAX + (uint)CARRY4(uVar4,param_1);
  uVar4 = CONCAT22((short)((uint)iVar5 >> 0x10),
                   CONCAT11((char)((uint)iVar5 >> 8) + '\x12',(char)iVar5));
  pbVar1 = (byte *)(unaff_RBP + 0x74);
  bVar3 = *pbVar1;
  bVar6 = (byte)(param_1 >> 8);
  *pbVar1 = *pbVar1 + bVar6;
  *(int *)(ulonglong)uVar4 = *(int *)(ulonglong)uVar4 + uVar4 + (uint)CARRY1(bVar3,bVar6);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

