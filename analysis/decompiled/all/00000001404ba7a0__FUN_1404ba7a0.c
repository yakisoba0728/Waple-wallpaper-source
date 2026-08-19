// Function: FUN_1404ba7a0
// Addr: 1404ba7a0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404ba791) overlaps instruction at (ram,0x0001404ba790)
    */

void FUN_1404ba7a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  int *piVar1;
  byte *pbVar2;
  uint uVar3;
  byte bVar4;
  byte bVar5;
  uint *puVar6;
  uint *in_RAX;
  byte bVar7;
  undefined7 uVar8;
  uint unaff_EBX;
  undefined4 unaff_0000001c;
  char unaff_SPL;
  undefined7 unaff_00000021;
  int unaff_ESI;
  
  uVar8 = (undefined7)((ulonglong)param_2 >> 8);
  bVar7 = (byte)param_2;
  *in_RAX = *in_RAX & (uint)in_RAX;
  bVar5 = (byte)in_RAX;
  *(byte *)in_RAX = (byte)*in_RAX + bVar5;
  if ((POPCOUNT((byte)*in_RAX) & 1U) != 0) {
    *(byte *)in_RAX = (byte)*in_RAX & bVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  puVar6 = (uint *)CONCAT71((int7)(CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                                            CONCAT11((byte)((ulonglong)in_RAX >> 8) | bVar7,bVar5))
                                  >> 8),bVar5);
  if ((POPCOUNT(bVar5) & 1U) != 0) {
    *(byte *)puVar6 = (byte)*puVar6 & bVar5;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  while( true ) {
    bVar7 = bVar7 ^ (byte)((ulonglong)param_1 >> 8);
    bVar5 = (byte)puVar6;
    *(byte *)puVar6 = (byte)*puVar6 & bVar5;
    if ((POPCOUNT((byte)*puVar6) & 1U) != 0) break;
    uRam00000001b468a77c = uRam00000001b468a77c & unaff_EBX;
    uVar3 = (uint)puVar6 - *puVar6;
    piVar1 = (int *)(CONCAT71(uVar8,bVar7) + CONCAT44(unaff_0000001c,unaff_EBX));
    *piVar1 = (*piVar1 - unaff_ESI) - (uint)((uint)puVar6 < *puVar6);
    pbVar2 = (byte *)(CONCAT71(unaff_00000021,unaff_SPL) + (ulonglong)uVar3 * 8);
    bVar5 = *pbVar2;
    bVar4 = (byte)uVar3;
    *pbVar2 = *pbVar2 + bVar4;
    puVar6 = (uint *)(ulonglong)CONCAT31((int3)(uVar3 >> 8),bVar4 - CARRY1(bVar5,bVar4));
  }
  *(byte *)puVar6 = (byte)*puVar6 & bVar5;
  *param_4 = *param_4 + unaff_SPL;
  *(byte *)CONCAT71(uVar8,bVar7) = *(byte *)CONCAT71(uVar8,bVar7) | bVar5;
  *(byte *)puVar6 = (byte)*puVar6 + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

