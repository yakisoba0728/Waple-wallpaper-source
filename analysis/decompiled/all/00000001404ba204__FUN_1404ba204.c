// Function: FUN_1404ba204
// Addr: 1404ba204
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ba204(uint *param_1,byte *param_2)

{
  uint uVar1;
  ushort uVar2;
  byte bVar3;
  byte bVar4;
  uint in_EAX;
  uint uVar5;
  byte *pbVar6;
  uint unaff_EBX;
  undefined4 unaff_0000001c;
  longlong unaff_RDI;
  
  uVar5 = in_EAX & unaff_EBX | *param_1;
  bVar3 = ((char)uVar5 - *(char *)(ulonglong)uVar5) + 0x70;
  uVar1 = CONCAT31((int3)(uVar5 >> 8),bVar3);
  *(byte *)(ulonglong)uVar1 = *(byte *)(ulonglong)uVar1 ^ bVar3;
  *(char *)param_1 = (char)*param_1 + (char)(uVar5 >> 8);
  uVar2 = (short)uVar1 - 10;
  *(char *)CONCAT44(unaff_0000001c,unaff_EBX) =
       *(char *)CONCAT44(unaff_0000001c,unaff_EBX) + (char)unaff_EBX;
  bVar3 = *param_2;
  *param_2 = *param_2 + (byte)param_2;
  pbVar6 = (byte *)(ulonglong)(uint)(int)(short)(uVar2 | 0x2400);
  bVar4 = (byte)uVar2;
  *pbVar6 = *pbVar6 + bVar4 + CARRY1(bVar3,(byte)param_2);
  *(uint *)(pbVar6 + 0x7b500011) = *(uint *)(pbVar6 + 0x7b500011) | (uint)param_1;
  *pbVar6 = *pbVar6 & bVar4;
  if (-1 < (char)*pbVar6) {
    *pbVar6 = *pbVar6 + (char)((ulonglong)param_1 >> 8);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)(unaff_RDI + 0x7c) = *(char *)(unaff_RDI + 0x7c) + bVar4;
  *pbVar6 = *pbVar6 & bVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

