// Function: FUN_1404addd4
// Addr: 1404addd4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404addd4(uint *param_1,uint param_2,undefined8 param_3,char param_4)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  char cVar5;
  uint *in_RAX;
  uint *unaff_RBX;
  char *unaff_RSI;
  char *unaff_RDI;
  byte *pbVar4;
  
  if ((POPCOUNT(*unaff_RSI - *unaff_RDI) & 1U) != 0) {
    cVar5 = (char)((ulonglong)in_RAX >> 8);
    cVar1 = (char)in_RAX + cVar5;
    in_RAX = (uint *)CONCAT71((int7)((ulonglong)in_RAX >> 8),cVar1);
    *in_RAX = *in_RAX & (uint)in_RAX;
    *(char *)in_RAX = (char)*in_RAX + cVar1;
    *(char *)((longlong)param_1 + 0x12) = *(char *)((longlong)param_1 + 0x12) >> 1;
    unaff_RSI[-0x1fffed85] = unaff_RSI[-0x1fffed85] + cVar5;
  }
  *unaff_RBX = *unaff_RBX + (int)param_1;
  uVar3 = (int)in_RAX + *in_RAX | *param_1;
  pbVar4 = (byte *)(ulonglong)uVar3;
  bVar2 = (byte)uVar3;
  pbVar4[(longlong)(unaff_RSI + 1)] = pbVar4[(longlong)(unaff_RSI + 1)] + bVar2;
  *pbVar4 = *pbVar4 + bVar2;
  *unaff_RBX = *unaff_RBX & param_2;
  *pbVar4 = *pbVar4 | bVar2;
  unaff_RDI[1] = unaff_RDI[1] + param_4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

