// Function: FUN_1404abe90
// Addr: 1404abe90
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404abe90(uint param_1,longlong param_2)

{
  byte bVar1;
  char *in_RAX;
  byte bVar3;
  uint *unaff_RBX;
  uint uVar4;
  uint unaff_ESI;
  byte *pbVar5;
  longlong unaff_RDI;
  byte in_AF;
  byte in_TF;
  byte in_IF;
  byte in_NT;
  byte in_AC;
  byte in_VIF;
  byte in_VIP;
  byte in_ID;
  byte bVar2;
  
  bVar3 = (byte)param_2;
  uVar4 = (uint)&stack0x00000000 | (uint)in_RAX;
  *(uint *)(in_RAX + 8) = *(uint *)(in_RAX + 8) | uVar4;
  *(char **)((ulonglong)uVar4 - 8) = in_RAX;
  *in_RAX = *in_RAX + (char)in_RAX;
  *unaff_RBX = *unaff_RBX & param_1;
  pbVar5 = (byte *)(ulonglong)(unaff_ESI | *(uint *)(unaff_RDI + param_2));
  bVar1 = *pbVar5;
  bVar2 = *pbVar5;
  *pbVar5 = *pbVar5 + bVar3;
  *(ulonglong *)((ulonglong)uVar4 - 0x10) =
       (ulonglong)(in_NT & 1) * 0x4000 | (ulonglong)SCARRY1(bVar2,bVar3) * 0x800 |
       (ulonglong)(in_IF & 1) * 0x200 | (ulonglong)(in_TF & 1) * 0x100 |
       (ulonglong)((char)*pbVar5 < '\0') * 0x80 | (ulonglong)(*pbVar5 == 0) * 0x40 |
       (ulonglong)(in_AF & 1) * 0x10 | (ulonglong)((POPCOUNT(*pbVar5) & 1U) == 0) * 4 |
       (ulonglong)CARRY1(bVar1,bVar3) | (ulonglong)(in_ID & 1) * 0x200000 |
       (ulonglong)(in_VIP & 1) * 0x100000 | (ulonglong)(in_VIF & 1) * 0x80000 |
       (ulonglong)(in_AC & 1) * 0x40000;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

