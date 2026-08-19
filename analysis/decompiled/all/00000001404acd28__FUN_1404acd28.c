// Function: FUN_1404acd28
// Addr: 1404acd28
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404acd28(byte *param_1,int param_2)

{
  byte *pbVar1;
  undefined1 uVar2;
  uint uVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  byte bVar11;
  undefined8 in_RAX;
  int *piVar7;
  char *pcVar8;
  char *pcVar9;
  uint unaff_EBX;
  int *unaff_RSI;
  undefined1 *unaff_RDI;
  longlong in_FS_OFFSET;
  ulonglong uVar10;
  
  bVar4 = (byte)((ulonglong)in_RAX >> 8);
  piVar7 = (int *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                           CONCAT11(bVar4 + (byte)param_2,(char)in_RAX));
  iVar5 = ((int)piVar7 - *piVar7) - (uint)CARRY1(bVar4,(byte)param_2);
  bVar4 = (byte)iVar5;
  bVar11 = (byte)((uint)iVar5 >> 8);
  uVar3 = CONCAT22((short)((uint)iVar5 >> 0x10),CONCAT11(bVar11 + bVar4,bVar4));
  pcVar8 = (char *)CONCAT71((uint7)(uint3)(uVar3 >> 8),0xef);
  *pcVar8 = *pcVar8 + -0x11 +
            (bVar4 < *(byte *)(ulonglong)uVar3 ||
            (byte)(bVar4 - *(byte *)(ulonglong)uVar3) < CARRY1(bVar11,bVar4));
  *pcVar8 = *pcVar8 + -0x10;
  uVar2 = in((short)param_2);
  *unaff_RDI = uVar2;
  pcVar9 = (char *)((ulonglong)&stack0x00000000 & 0xffffffff);
  *param_1 = *param_1 - 0x11;
  *pcVar9 = *pcVar9;
  pbVar1 = (byte *)(pcVar9 + 0x3c0010ef);
  bVar4 = *pbVar1;
  bVar11 = (byte)((uint)param_2 >> 8);
  *pbVar1 = *pbVar1 + bVar11;
  LOCK();
  *pcVar9 = *pcVar9 + CARRY1(bVar4,bVar11);
  UNLOCK();
  uVar2 = in((short)param_2);
  unaff_RDI[1] = uVar2;
  bVar4 = *param_1;
  *param_1 = *param_1 - 0x11;
  *unaff_RSI = (*unaff_RSI - (int)pcVar8) - (uint)(0x10 < bVar4);
  bVar4 = *param_1;
  *param_1 = *param_1 + (byte)unaff_EBX;
  uVar3 = (uint)CARRY1(bVar4,(byte)unaff_EBX);
  uVar6 = param_2 + 0x11e013f0 + uVar3;
  uVar10 = (ulonglong)uVar6;
  if (SCARRY4(param_2,0x11e013f0) == SCARRY4(param_2 + 0x11e013f0,uVar3)) {
    *(ulonglong *)(((ulonglong)&stack0x00000000 & 0xffffffff) - 8) = uVar10;
    wrmsr((int)param_1,(longlong)pcVar8 << 0x20 | uVar10);
    uRam000000011467cd68 = uRam000000011467cd68 & unaff_EBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(uint *)(in_FS_OFFSET + uVar10) = *(uint *)(in_FS_OFFSET + uVar10) | uVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

