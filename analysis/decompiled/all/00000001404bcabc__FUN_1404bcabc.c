// Function: FUN_1404bcabc
// Addr: 1404bcabc
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404bcabc(uint *param_1,longlong param_2)

{
  undefined3 uVar1;
  char cVar2;
  byte bVar3;
  uint in_EAX;
  uint uVar4;
  byte *pbVar6;
  char cVar7;
  char *unaff_RBX;
  byte *unaff_RSI;
  char *pcVar5;
  
  cVar7 = (char)param_2;
  uVar4 = in_EAX | *param_1;
  uVar1 = (undefined3)(uVar4 >> 8);
  cVar2 = (char)uVar4 + *(char *)(ulonglong)uVar4 + 'p';
  pcVar5 = (char *)(ulonglong)CONCAT31(uVar1,cVar2);
  *pcVar5 = *pcVar5 + cVar2;
  *(uint *)(unaff_RBX + 6) = *(uint *)(unaff_RBX + 6) & (uint)param_1;
  pbVar6 = (byte *)(unaff_RBX + 0x34);
  bVar3 = *pbVar6;
  *pbVar6 = *pbVar6 + (byte)param_1;
  bVar3 = cVar2 + CARRY1(bVar3,(byte)param_1);
  unaff_RSI[param_2] = unaff_RSI[param_2] | (byte)(uVar4 >> 8);
  pcVar5 = (char *)(ulonglong)(CONCAT31(uVar1,bVar3 + 0x54) + 0x2366f000 + (uint)(0xab < bVar3));
  *pcVar5 = *pcVar5 + cVar7;
  pbVar6 = (byte *)func_0x0001614c16aa();
  *pbVar6 = *pbVar6 | (byte)pbVar6;
  *unaff_RSI = (byte)pbVar6;
  *pbVar6 = *pbVar6 + (char)((ulonglong)pbVar6 >> 8);
  if (-1 < (char)*pbVar6) {
    *unaff_RBX = *unaff_RBX + cVar7;
  }
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

