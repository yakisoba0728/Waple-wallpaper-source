// Function: FUN_1404bb7a0
// Addr: 1404bb7a0
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404bb7dd) overlaps instruction at (ram,0x0001404bb7dc)
    */

void FUN_1404bb7a0(byte *param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  char *pcVar1;
  char cVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  uint *in_RAX;
  byte *pbVar6;
  byte bVar8;
  undefined6 uVar9;
  byte unaff_BL;
  byte unaff_BH;
  char cVar10;
  int unaff_ESI;
  undefined4 unaff_00000034;
  byte *unaff_RDI;
  bool bVar11;
  bool bVar12;
  byte bVar7;
  
  uVar9 = (undefined6)((ulonglong)param_2 >> 0x10);
  bVar8 = (byte)((ulonglong)param_2 >> 8);
  bVar3 = (byte)param_2;
  uVar4 = (uint)in_RAX;
  *in_RAX = *in_RAX & uVar4;
  cVar2 = (char)in_RAX;
  *(byte *)in_RAX = (byte)*in_RAX + cVar2;
  bVar7 = *param_1;
  *param_1 = *param_1 + 1;
  cVar10 = -8;
  if (SCARRY1(bVar7,'\x01') == (char)*param_1 < '\0') {
code_r0x0001404bb7cb:
    pcVar1 = (char *)(CONCAT44(unaff_00000034,unaff_ESI) + 0x2101004b +
                     CONCAT44(unaff_00000034,unaff_ESI) * 4);
    *pcVar1 = *pcVar1 + cVar2;
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *(byte *)((longlong)in_RAX + 0x21004bb6) =
       *(byte *)((longlong)in_RAX + 0x21004bb6) + (char)((ulonglong)param_1 >> 8);
  *(byte *)in_RAX = (byte)*in_RAX + cVar2;
  if (SCARRY1(unaff_BL,bVar8) == (char)(unaff_BL + bVar8) < '\0') {
    bVar11 = CARRY1(bVar8,unaff_BH);
    bVar12 = SCARRY1(bVar8,unaff_BH);
    bVar8 = bVar8 + unaff_BH;
    if (bVar12 == (char)bVar8 < '\0') {
      pcVar1 = (char *)(CONCAT44(unaff_00000034,unaff_ESI) + 0x21004b +
                       CONCAT44(unaff_00000034,unaff_ESI) * 4);
      *pcVar1 = *pcVar1 + bVar3;
      uVar4 = *in_RAX;
      *(byte *)in_RAX = (byte)*in_RAX + cVar2;
      *param_1 = (char)*param_1 >> 0x13;
      bVar7 = *param_1;
      if (SCARRY1((byte)uVar4,cVar2) == (char)*param_1 < '\0') goto code_r0x0001404bb7cb;
      goto code_r0x0001404bb7ec;
    }
    in_RAX[4] = in_RAX[4] + unaff_ESI + (uint)bVar11;
  }
  else {
    uVar5 = uVar4 + 0x11e013f0 + (uint)CARRY1(unaff_BL,bVar8);
    in_RAX = (uint *)(ulonglong)uVar5;
    if (SCARRY4(uVar4,0x11e013f0) != SCARRY4(uVar4 + 0x11e013f0,(uint)CARRY1(unaff_BL,bVar8))) {
      cVar2 = *(char *)CONCAT44(unaff_00000034,unaff_ESI);
      *(byte *)CONCAT44(unaff_00000034,unaff_ESI) =
           *(char *)CONCAT44(unaff_00000034,unaff_ESI) + bVar3;
      if (*(char *)CONCAT44(unaff_00000034,unaff_ESI) == '\0' ||
          SCARRY1(cVar2,bVar3) != *(char *)CONCAT44(unaff_00000034,unaff_ESI) < '\0') {
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
      bVar3 = (byte)uVar5;
      *(byte *)in_RAX = (byte)*in_RAX + bVar3;
      bVar7 = *param_1;
      bVar8 = (byte)(uVar5 >> 8);
      *param_1 = *param_1 + bVar8;
      pbVar6 = (byte *)((longlong)in_RAX * 2);
      bVar11 = CARRY1(*pbVar6,bVar3) || CARRY1(*pbVar6 + bVar3,CARRY1(bVar7,bVar8));
      *pbVar6 = *pbVar6 + bVar3 + CARRY1(bVar7,bVar8);
      bVar7 = bVar8 + bVar3 + bVar11;
      uVar4 = CONCAT22((short)(uVar5 >> 0x10),CONCAT11(bVar7,bVar3));
      pbVar6 = (byte *)(ulonglong)uVar4;
      *(uint *)pbVar6 =
           (*(int *)pbVar6 - uVar4) - (uint)(CARRY1(bVar8,bVar3) || CARRY1(bVar8 + bVar3,bVar11));
      *pbVar6 = *pbVar6 | bVar7;
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
  }
  *unaff_RDI = *unaff_RDI ^ (byte)param_1;
  cVar10 = -0x10;
  *(byte *)in_RAX = (byte)*in_RAX + (char)in_RAX;
  *in_RAX = *in_RAX & (uint)param_1;
  cVar2 = (char)in_RAX + (byte)*in_RAX;
  in_RAX = (uint *)CONCAT62((int6)((ulonglong)in_RAX >> 0x10),
                            CONCAT11((byte)((ulonglong)in_RAX >> 8) | bVar3,cVar2));
  *(byte *)in_RAX = (byte)*in_RAX - cVar2;
  bVar7 = (byte)*in_RAX;
code_r0x0001404bb7ec:
  if (param_1 + -1 != (byte *)0x0 && bVar7 != 0) {
    *(byte *)((longlong)in_RAX + -0x49) =
         *(byte *)((longlong)in_RAX + -0x49) + (char)((ulonglong)in_RAX >> 8);
    *param_4 = *param_4 + cVar10;
    *(byte *)CONCAT62(uVar9,CONCAT11(bVar8,bVar3)) =
         *(byte *)CONCAT62(uVar9,CONCAT11(bVar8,bVar3)) | (byte)in_RAX;
    *(byte *)in_RAX = (byte)*in_RAX + (char)(param_1 + -1);
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  *in_RAX = *in_RAX & (uint)in_RAX;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

