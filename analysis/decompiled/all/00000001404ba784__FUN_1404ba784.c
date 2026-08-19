// Function: FUN_1404ba784
// Addr: 1404ba784
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ba784(undefined8 param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  int *piVar1;
  byte *pbVar2;
  byte bVar3;
  uint uVar4;
  byte bVar5;
  uint *in_RAX;
  byte bVar6;
  undefined7 uVar7;
  uint unaff_EBX;
  undefined4 unaff_0000001c;
  char unaff_SPL;
  undefined7 unaff_00000021;
  int unaff_ESI;
  undefined1 in_PF;
  
  uVar7 = (undefined7)((ulonglong)param_2 >> 8);
  bVar6 = (byte)param_2;
  while ((bool)in_PF) {
    uRam00000001b468a77c = uRam00000001b468a77c & unaff_EBX;
    uVar4 = (uint)in_RAX - *in_RAX;
    piVar1 = (int *)(CONCAT71(uVar7,bVar6) + CONCAT44(unaff_0000001c,unaff_EBX));
    *piVar1 = (*piVar1 - unaff_ESI) - (uint)((uint)in_RAX < *in_RAX);
    pbVar2 = (byte *)(CONCAT71(unaff_00000021,unaff_SPL) + (ulonglong)uVar4 * 8);
    bVar3 = *pbVar2;
    bVar5 = (byte)uVar4;
    *pbVar2 = *pbVar2 + bVar5;
    bVar5 = bVar5 - CARRY1(bVar3,bVar5);
    in_RAX = (uint *)(ulonglong)CONCAT31((int3)(uVar4 >> 8),bVar5);
    bVar6 = bVar6 ^ (byte)((ulonglong)param_1 >> 8);
    *(byte *)in_RAX = (byte)*in_RAX & bVar5;
    in_PF = (POPCOUNT((byte)*in_RAX) & 1U) == 0;
  }
  *(byte *)in_RAX = (byte)*in_RAX & (byte)in_RAX;
  *param_4 = *param_4 + unaff_SPL;
  *(byte *)CONCAT71(uVar7,bVar6) = *(byte *)CONCAT71(uVar7,bVar6) | (byte)in_RAX;
  *(byte *)in_RAX = (byte)*in_RAX + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

