// Function: FUN_1404b540c
// Addr: 1404b540c
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404b540c(byte *param_1,int *param_2)

{
  byte *pbVar1;
  byte bVar2;
  byte bVar3;
  char cVar4;
  undefined4 uVar5;
  uint uVar6;
  byte bVar7;
  char *in_RAX;
  byte bVar8;
  longlong unaff_RBX;
  longlong unaff_RSI;
  undefined4 auStack_8 [2];
  
  bVar8 = (byte)param_2;
  pbVar1 = param_1 + unaff_RSI;
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar8;
  *param_2 = *param_2 - (uint)CARRY1(bVar2,bVar8);
  *(int *)(unaff_RBX + 0xb08001a) = *(int *)(unaff_RBX + 0xb08001a) + 0x4a;
  bVar7 = (byte)((ulonglong)in_RAX >> 8);
  *param_1 = *param_1 + bVar7;
  *in_RAX = *in_RAX + (char)in_RAX;
  pbVar1 = (byte *)(in_RAX + -0x7d);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 + bVar8;
  cVar4 = *in_RAX;
  *(int *)(unaff_RBX + 0xb08001a) = *(int *)(unaff_RBX + 0xb08001a) + 0x4a;
  bVar3 = *param_1;
  *param_1 = *param_1 + bVar7;
  uVar6 = (int)CONCAT71((int7)((ulonglong)in_RAX >> 8),((char)in_RAX - cVar4) - CARRY1(bVar2,bVar8))
          + 0x54150004 + (uint)CARRY1(bVar3,bVar7);
  uVar5 = LocalDescriptorTableRegister();
  auStack_8[unaff_RSI * 2] = uVar5;
  *(uint *)(ulonglong)uVar6 = *(uint *)(ulonglong)uVar6 | uVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

