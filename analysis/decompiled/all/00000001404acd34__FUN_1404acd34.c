// Function: FUN_1404acd34
// Addr: 1404acd34
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404acd34(byte *param_1,int param_2)

{
  byte *pbVar1;
  byte bVar2;
  undefined1 uVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  char *in_RAX;
  char *pcVar7;
  byte bVar9;
  uint unaff_EBX;
  int *unaff_RSI;
  undefined1 *unaff_RDI;
  longlong in_FS_OFFSET;
  ulonglong uVar8;
  
  bVar5 = (byte)in_RAX;
  *in_RAX = *in_RAX + bVar5 + (bVar5 < 0xf0);
  uVar3 = in((short)param_2);
  *unaff_RDI = uVar3;
  pcVar7 = (char *)((ulonglong)&stack0x00000000 & 0xffffffff);
  *param_1 = *param_1 + bVar5;
  *pcVar7 = *pcVar7;
  pbVar1 = (byte *)(pcVar7 + 0x3c0010ef);
  bVar2 = *pbVar1;
  bVar9 = (byte)((uint)param_2 >> 8);
  *pbVar1 = *pbVar1 + bVar9;
  LOCK();
  *pcVar7 = *pcVar7 + CARRY1(bVar2,bVar9);
  UNLOCK();
  uVar3 = in((short)param_2);
  unaff_RDI[1] = uVar3;
  bVar2 = *param_1;
  *param_1 = *param_1 + bVar5;
  *unaff_RSI = (*unaff_RSI - (int)in_RAX) - (uint)CARRY1(bVar2,bVar5);
  bVar2 = *param_1;
  *param_1 = *param_1 + (byte)unaff_EBX;
  uVar4 = (uint)CARRY1(bVar2,(byte)unaff_EBX);
  uVar6 = param_2 + 0x11e013f0 + uVar4;
  uVar8 = (ulonglong)uVar6;
  if (SCARRY4(param_2,0x11e013f0) == SCARRY4(param_2 + 0x11e013f0,uVar4)) {
    *(ulonglong *)(((ulonglong)&stack0x00000000 & 0xffffffff) - 8) = uVar8;
    wrmsr((int)param_1,(longlong)in_RAX << 0x20 | uVar8);
    uRam000000011467cd68 = uRam000000011467cd68 & unaff_EBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(uint *)(in_FS_OFFSET + uVar8) = *(uint *)(in_FS_OFFSET + uVar8) | uVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

