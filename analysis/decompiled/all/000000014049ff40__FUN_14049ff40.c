// Function: FUN_14049ff40
// Addr: 14049ff40
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_14049ff40(int *param_1,int param_2,undefined8 param_3,char *param_4)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  int *in_RAX;
  char *pcVar4;
  byte bVar5;
  byte bVar7;
  int iVar6;
  byte *unaff_RBX;
  char unaff_SPL;
  char *unaff_RSI;
  byte in_CF;
  
  iVar6 = param_2 + *param_1 + (uint)in_CF;
  uVar3 = (int)in_RAX + *in_RAX;
  pcVar4 = (char *)((ulonglong)uVar3 ^ 0xe6);
  *param_4 = *param_4 + unaff_SPL;
  bVar2 = (byte)pcVar4;
  *pcVar4 = *pcVar4 + bVar2;
  bVar7 = (byte)((uint)iVar6 >> 8);
  *unaff_RBX = *unaff_RBX + bVar2 + bVar7 + CARRY1(bVar2,bVar7);
  bVar1 = *unaff_RBX;
  bVar5 = (byte)iVar6;
  *unaff_RBX = *unaff_RBX + bVar5;
  *(uint *)unaff_RBX =
       *(int *)unaff_RBX + CONCAT31((int3)(uVar3 >> 8),bVar2 + bVar7) + (uint)CARRY1(bVar1,bVar5);
  *unaff_RSI = *unaff_RSI + bVar7;
  *param_4 = *param_4 + unaff_SPL;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

