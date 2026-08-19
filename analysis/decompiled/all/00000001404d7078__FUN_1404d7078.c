// Function: FUN_1404d7078
// Addr: 1404d7078
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d7078(uint *param_1)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  uint *in_RAX;
  uint unaff_EBX;
  bool bVar5;
  char *pcVar4;
  
  *param_1 = *param_1 + unaff_EBX;
  uVar1 = *param_1;
  uVar3 = (uint)in_RAX;
  *param_1 = *param_1 - uVar3;
  bVar5 = CARRY4(*in_RAX,uVar3) || CARRY4(*in_RAX + uVar3,(uint)(uVar1 < uVar3));
  *in_RAX = *in_RAX + uVar3 + (uint)(uVar1 < uVar3);
  bVar2 = (byte)in_RAX;
  pcVar4 = (char *)CONCAT71((int7)((ulonglong)in_RAX >> 8),bVar2 * '\x02' + bVar5);
  *pcVar4 = *pcVar4 + (CARRY1(bVar2,bVar2) || CARRY1(bVar2 * '\x02',bVar5));
  uRam00000001346a70a0 = uRam00000001346a70a0 & unaff_EBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

