// Function: FUN_1404ba774
// Addr: 1404ba774
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404ba776) overlaps instruction at (ram,0x0001404ba774)
    */

void FUN_1404ba774(undefined8 param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  int *piVar1;
  byte *pbVar2;
  byte bVar3;
  byte bVar4;
  int in_EAX;
  ulonglong uVar5;
  byte bVar7;
  undefined7 uVar8;
  uint unaff_EBX;
  undefined4 unaff_0000001c;
  char unaff_SPL;
  undefined7 unaff_00000021;
  int unaff_ESI;
  byte in_CF;
  uint *puVar6;
  
  uVar8 = (undefined7)((ulonglong)param_2 >> 8);
  bVar7 = (byte)param_2;
  uVar5 = (ulonglong)((in_EAX + -0x19001b74) - (uint)in_CF) ^ 0x1a;
  while( true ) {
    pbVar2 = (byte *)(CONCAT71(unaff_00000021,unaff_SPL) + uVar5 * 8);
    bVar3 = *pbVar2;
    bVar4 = (byte)uVar5;
    *pbVar2 = *pbVar2 + bVar4;
    bVar4 = bVar4 - CARRY1(bVar3,bVar4);
    puVar6 = (uint *)CONCAT71((int7)(uVar5 >> 8),bVar4);
    bVar7 = bVar7 ^ (byte)((ulonglong)param_1 >> 8);
    *(byte *)puVar6 = (byte)*puVar6 & bVar4;
    if ((POPCOUNT((byte)*puVar6) & 1U) != 0) break;
    uRam00000001b468a77c = uRam00000001b468a77c & unaff_EBX;
    uVar5 = (ulonglong)((uint)puVar6 - *puVar6);
    piVar1 = (int *)(CONCAT71(uVar8,bVar7) + CONCAT44(unaff_0000001c,unaff_EBX));
    *piVar1 = (*piVar1 - unaff_ESI) - (uint)((uint)puVar6 < *puVar6);
  }
  *(byte *)puVar6 = (byte)*puVar6 & bVar4;
  *param_4 = *param_4 + unaff_SPL;
  *(byte *)CONCAT71(uVar8,bVar7) = *(byte *)CONCAT71(uVar8,bVar7) | bVar4;
  *(byte *)puVar6 = (byte)*puVar6 + (char)param_1;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

