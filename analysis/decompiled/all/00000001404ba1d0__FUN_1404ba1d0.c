// Function: FUN_1404ba1d0
// Addr: 1404ba1d0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404ba203) overlaps instruction at (ram,0x0001404ba201)
    */

void FUN_1404ba1d0(uint *param_1,byte *param_2)

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
  
  cVar6 = (char)((ulonglong)param_1 >> 8);
  param_2[(longlong)param_1 * 2 + 0x2002100] = param_2[(longlong)param_1 * 2 + 0x2002100];
  in_RAX[4] = in_RAX[4] + cVar6;
  bVar2 = (byte)in_RAX;
  in_RAX[0x77] = in_RAX[0x77] + bVar2;
  *in_RAX = *in_RAX & bVar2;
  out(*unaff_RSI,(short)param_2);
  if (*in_RAX == 0) {
    in_RAX[0x21004ab4] = in_RAX[0x21004ab4] + bVar2;
    *in_RAX = *in_RAX + bVar2;
    in_RAX[0x77] = in_RAX[0x77] + bVar2;
    *in_RAX = *in_RAX & bVar2;
    out(unaff_RSI[1],(short)param_2);
    if (*in_RAX != 0) goto code_r0x0001404ba213;
    in_RAX[0x1004ab4] = in_RAX[0x1004ab4] + bVar2;
    unaff_BH = unaff_BH + cVar6;
  }
  else {
    *(char *)param_1 = (char)*param_1 + (char)((ulonglong)in_RAX >> 8);
  }
  uVar4 = (uint)in_RAX | *param_1;
  bVar2 = ((char)uVar4 - *(char *)(ulonglong)uVar4) + 0x70;
  in_RAX = (byte *)(ulonglong)CONCAT31((int3)(uVar4 >> 8),bVar2);
  *in_RAX = *in_RAX ^ bVar2;
code_r0x0001404ba213:
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

