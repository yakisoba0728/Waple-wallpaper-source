// Function: FUN_1404acd48
// Addr: 1404acd48
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404acd48(byte *param_1,int param_2)

{
  byte bVar1;
  undefined1 uVar2;
  uint uVar3;
  uint in_EAX;
  uint uVar4;
  uint unaff_EBX;
  int *unaff_RSI;
  undefined1 *unaff_RDI;
  longlong in_FS_OFFSET;
  ulonglong uVar5;
  
  uVar2 = in((short)param_2);
  *unaff_RDI = uVar2;
  *param_1 = *param_1;
  *unaff_RSI = *unaff_RSI - (int)&stack0x00000000;
  bVar1 = *param_1;
  *param_1 = *param_1 + (byte)unaff_EBX;
  uVar3 = (uint)CARRY1(bVar1,(byte)unaff_EBX);
  uVar4 = param_2 + 0x11e013f0 + uVar3;
  uVar5 = (ulonglong)uVar4;
  if (SCARRY4(param_2,0x11e013f0) == SCARRY4(param_2 + 0x11e013f0,uVar3)) {
    *(ulonglong *)((ulonglong)in_EAX - 8) = uVar5;
    wrmsr((int)param_1,(longlong)&stack0x00000000 << 0x20 | uVar5);
    uRam000000011467cd68 = uRam000000011467cd68 & unaff_EBX;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(uint *)(in_FS_OFFSET + uVar5) = *(uint *)(in_FS_OFFSET + uVar5) | uVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

