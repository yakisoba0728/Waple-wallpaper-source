// Function: FUN_1404ba1f0
// Addr: 1404ba1f0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */

void FUN_1404ba1f0(uint *param_1,byte *param_2)

{
  ushort uVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  byte *in_RAX;
  byte *pbVar5;
  char cVar6;
  char unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  undefined1 *unaff_RSI;
  longlong unaff_RDI;
  bool in_CF;
  bool in_ZF;
  
  cVar6 = (char)((ulonglong)param_1 >> 8);
  out(*unaff_RSI,(short)param_2);
  if (in_CF || in_ZF) {
    in_RAX[0x1004ab4] = in_RAX[0x1004ab4] + (char)in_RAX;
    unaff_BH = unaff_BH + cVar6;
    uVar4 = (uint)in_RAX | *param_1;
    bVar2 = ((char)uVar4 - *(char *)(ulonglong)uVar4) + 0x70;
    in_RAX = (byte *)(ulonglong)CONCAT31((int3)(uVar4 >> 8),bVar2);
    *in_RAX = *in_RAX ^ bVar2;
  }
  *(char *)param_1 = (char)*param_1 + (char)((ulonglong)in_RAX >> 8);
  uVar1 = (short)in_RAX - 10;
  *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + unaff_BL;
  bVar2 = *param_2;
  *param_2 = *param_2 + (byte)param_2;
  pbVar5 = (byte *)(ulonglong)(uint)(int)(short)(uVar1 | 0x2400);
  bVar3 = (byte)uVar1;
  *pbVar5 = *pbVar5 + bVar3 + CARRY1(bVar2,(byte)param_2);
  *(uint *)(pbVar5 + 0x7b500011) = *(uint *)(pbVar5 + 0x7b500011) | (uint)param_1;
  *pbVar5 = *pbVar5 & bVar3;
  if (-1 < (char)*pbVar5) {
    *pbVar5 = *pbVar5 + cVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(char *)(unaff_RDI + 0x7c) = *(char *)(unaff_RDI + 0x7c) + bVar3;
  *pbVar5 = *pbVar5 & bVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

