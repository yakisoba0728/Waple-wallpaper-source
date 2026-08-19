// Function: FUN_1404bb7b4
// Addr: 1404bb7b4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404bb7dd) overlaps instruction at (ram,0x0001404bb7dc)
    */

void FUN_1404bb7b4(byte *param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  int iVar2;
  char cVar3;
  uint uVar4;
  byte bVar7;
  uint *in_RAX;
  byte *pbVar6;
  byte bVar9;
  undefined6 uVar10;
  byte unaff_BH;
  char cVar11;
  int unaff_ESI;
  undefined4 unaff_00000034;
  byte *unaff_RDI;
  byte in_CF;
  bool bVar12;
  char in_SF;
  char in_OF;
  bool bVar13;
  int iVar5;
  byte bVar8;
  
  uVar10 = (undefined6)((ulonglong)param_2 >> 0x10);
  bVar9 = (byte)((ulonglong)param_2 >> 8);
  bVar8 = (byte)param_2;
  cVar11 = '\0';
  if (in_OF == in_SF) {
    bVar12 = CARRY1(bVar9,unaff_BH);
    bVar13 = SCARRY1(bVar9,unaff_BH);
    bVar9 = bVar9 + unaff_BH;
    if (bVar13 == (char)bVar9 < '\0') {
      pcVar1 = (char *)(CONCAT44(unaff_00000034,unaff_ESI) + 0x21004b +
                       CONCAT44(unaff_00000034,unaff_ESI) * 4);
      *pcVar1 = *pcVar1 + bVar8;
      uVar4 = *in_RAX;
      cVar3 = (char)in_RAX;
      *(byte *)in_RAX = (byte)*in_RAX + cVar3;
      *param_1 = (char)*param_1 >> 0x13;
      bVar7 = *param_1;
      if (SCARRY1((byte)uVar4,cVar3) == (char)*param_1 < '\0') {
        pcVar1 = (char *)(CONCAT44(unaff_00000034,unaff_ESI) + 0x2101004b +
                         CONCAT44(unaff_00000034,unaff_ESI) * 4);
        *pcVar1 = *pcVar1 + cVar3;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      goto code_r0x0001404bb7ec;
    }
    in_RAX[4] = in_RAX[4] + unaff_ESI + (uint)bVar12;
  }
  else {
    iVar5 = (int)in_RAX;
    iVar2 = iVar5 + 0x11e013f0;
    uVar4 = iVar2 + (uint)in_CF;
    in_RAX = (uint *)(ulonglong)uVar4;
    if (SCARRY4(iVar5,0x11e013f0) != SCARRY4(iVar2,(uint)in_CF)) {
      cVar11 = *(char *)CONCAT44(unaff_00000034,unaff_ESI);
      *(byte *)CONCAT44(unaff_00000034,unaff_ESI) =
           *(char *)CONCAT44(unaff_00000034,unaff_ESI) + bVar8;
      if (*(char *)CONCAT44(unaff_00000034,unaff_ESI) != '\0' &&
          SCARRY1(cVar11,bVar8) == *(char *)CONCAT44(unaff_00000034,unaff_ESI) < '\0') {
        bVar9 = (byte)uVar4;
        *(byte *)in_RAX = (byte)*in_RAX + bVar9;
        bVar8 = *param_1;
        bVar7 = (byte)(uVar4 >> 8);
        *param_1 = *param_1 + bVar7;
        pbVar6 = (byte *)((longlong)in_RAX * 2);
        bVar12 = CARRY1(*pbVar6,bVar9) || CARRY1(*pbVar6 + bVar9,CARRY1(bVar8,bVar7));
        *pbVar6 = *pbVar6 + bVar9 + CARRY1(bVar8,bVar7);
        bVar8 = bVar7 + bVar9 + bVar12;
        uVar4 = CONCAT22((short)(uVar4 >> 0x10),CONCAT11(bVar8,bVar9));
        pbVar6 = (byte *)(ulonglong)uVar4;
        *(uint *)pbVar6 =
             (*(int *)pbVar6 - uVar4) - (uint)(CARRY1(bVar7,bVar9) || CARRY1(bVar7 + bVar9,bVar12));
        *pbVar6 = *pbVar6 | bVar8;
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  *unaff_RDI = *unaff_RDI ^ (byte)param_1;
  cVar11 = -8;
  *(byte *)in_RAX = (byte)*in_RAX + (char)in_RAX;
  *in_RAX = *in_RAX & (uint)param_1;
  cVar3 = (char)in_RAX + (byte)*in_RAX;
  in_RAX = (uint *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                            CONCAT11((byte)((ulonglong)in_RAX >> 8) | bVar8,cVar3));
  *(byte *)in_RAX = (byte)*in_RAX - cVar3;
  bVar7 = (byte)*in_RAX;
code_r0x0001404bb7ec:
  if (param_1 + -1 == (byte *)0x0 || bVar7 == 0) {
    *in_RAX = *in_RAX & (uint)in_RAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(byte *)((longlong)in_RAX + -0x49) =
       *(byte *)((longlong)in_RAX + -0x49) + (char)((ulonglong)in_RAX >> 8);
  *param_4 = *param_4 + cVar11;
  *(byte *)CONCAT62(uVar10,CONCAT11(bVar9,bVar8)) =
       *(byte *)CONCAT62(uVar10,CONCAT11(bVar9,bVar8)) | (byte)in_RAX;
  *(byte *)in_RAX = (byte)*in_RAX + (char)(param_1 + -1);
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

