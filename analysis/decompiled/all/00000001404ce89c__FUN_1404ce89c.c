// Function: FUN_1404ce89c
// Addr: 1404ce89c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404ce8c2) overlaps instruction at (ram,0x0001404ce8c0)
    */

void FUN_1404ce89c(char *param_1,byte *param_2)

{
  byte bVar1;
  uint uVar2;
  byte bVar3;
  uint *in_RAX;
  byte *pbVar4;
  byte bVar5;
  longlong unaff_RBX;
  char unaff_R12B;
  longlong in_FS_OFFSET;
  
  bVar5 = (byte)param_1;
  uVar2 = (uint)in_RAX + *in_RAX;
  param_1[unaff_RBX] =
       (param_1[unaff_RBX] - (char)((ulonglong)param_2 >> 8)) - CARRY4((uint)in_RAX,*in_RAX);
  *(char *)(ulonglong)uVar2 = *(char *)(ulonglong)uVar2 + bVar5;
  bVar3 = (char)uVar2 + (char)(uVar2 >> 8);
  uVar2 = CONCAT22((short)(uVar2 >> 0x10),CONCAT11(0xe7,bVar3));
  pbVar4 = (byte *)(ulonglong)uVar2;
  *param_1 = *param_1 + unaff_R12B;
  *param_2 = *param_2 | bVar3;
  bVar1 = *pbVar4;
  *pbVar4 = *pbVar4 + bVar5;
  out(0x4c,CONCAT31((int3)(uVar2 >> 8),(bVar3 - pbVar4[in_FS_OFFSET]) - CARRY1(bVar1,bVar5)));
  *param_1 = *param_1 + -0x19;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

