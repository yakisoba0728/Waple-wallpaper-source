// Function: FUN_1404d5d34
// Addr: 1404d5d34
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404d5d34(byte *param_1,undefined8 param_2)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  byte bVar4;
  uint *in_RAX;
  byte bVar5;
  int unaff_EBX;
  longlong unaff_RBP;
  int *unaff_RSI;
  int *unaff_RDI;
  
  bVar5 = (byte)param_2;
  pbVar1 = (byte *)(unaff_RBP + (longlong)param_1 * 2);
  bVar2 = *pbVar1;
  *pbVar1 = *pbVar1 - (byte)unaff_EBX;
  *unaff_RDI = (*unaff_RDI - unaff_EBX) - (uint)(bVar2 < (byte)unaff_EBX);
  *(byte *)in_RAX = (byte)*in_RAX | (byte)in_RAX;
  *(byte *)((longlong)unaff_RDI + (longlong)param_1) =
       *(byte *)((longlong)unaff_RDI + (longlong)param_1) + (char)((ulonglong)param_2 >> 8);
  uVar3 = *in_RAX;
  *(byte *)in_RAX = (byte)*in_RAX + bVar5;
  if (!CARRY1((byte)uVar3,bVar5)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(byte *)in_RAX = (byte)*in_RAX + (char)((uint)unaff_EBX >> 8);
  *(byte *)in_RAX = (byte)*in_RAX + (byte)in_RAX;
  bVar2 = *param_1;
  bVar4 = (byte)((ulonglong)in_RAX >> 8);
  *param_1 = *param_1 + bVar4;
  *unaff_RSI = *unaff_RSI + (uint)in_RAX + (uint)CARRY1(bVar2,bVar4);
  *param_1 = *param_1 + bVar5;
  if (*param_1 != 0) {
    *in_RAX = *in_RAX | (uint)in_RAX;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

