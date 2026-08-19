// Function: FUN_14049fdd4
// Addr: 14049fdd4
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x00014049fe2e) overlaps instruction at (ram,0x00014049fe2d)
    */

void FUN_14049fdd4(longlong param_1,undefined8 param_2,undefined8 param_3,char *param_4)

{
  undefined3 uVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  int iVar5;
  undefined8 in_RAX;
  char *pcVar6;
  ulonglong uVar10;
  byte bVar11;
  undefined1 unaff_BL;
  char unaff_BH;
  undefined6 unaff_0000001a;
  char unaff_SPL;
  byte *unaff_RDI;
  char *pcVar7;
  char cVar8;
  undefined6 uVar9;
  
  bVar11 = (byte)((ulonglong)param_2 >> 8);
  *(uint *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(uint *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) | (uint)in_RAX;
  bVar2 = (byte)in_RAX;
  uVar9 = (undefined6)((ulonglong)in_RAX >> 0x10);
  cVar8 = (char)((ulonglong)in_RAX >> 8) + bVar2;
  pcVar6 = (char *)CONCAT62(uVar9,CONCAT11(cVar8,bVar2));
  *param_4 = *param_4 + unaff_SPL;
  *pcVar6 = *pcVar6 + bVar2;
  cRam00000000f6000610 = cRam00000000f6000610 + unaff_BH;
  *(uint *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(uint *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) | (uint)pcVar6;
  pcVar6 = (char *)CONCAT62(uVar9,CONCAT11(cVar8 + bVar2,bVar2));
  *param_4 = *param_4 + unaff_SPL;
  *pcVar6 = *pcVar6 + bVar2;
  *pcVar6 = *pcVar6 + bVar11;
  *(byte *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(byte *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) | bVar2;
  cRam000000002f000610 = cRam000000002f000610 + unaff_BH;
  *param_4 = *param_4 + bVar2;
  uVar4 = (uint)pcVar6 | *(uint *)((longlong)pcVar6 * 2);
  *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) =
       *(char *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + (char)param_1;
  uVar1 = (undefined3)(uVar4 >> 8);
  bVar2 = (byte)uVar4 ^ *unaff_RDI;
  uVar4 = CONCAT31(uVar1,bVar2);
  uVar10 = param_1 - 1;
  if (uVar10 == 0 || bVar2 == 0) {
    uVar4 = CONCAT31(uVar1,bVar2 | *(byte *)((longlong)(ulonglong)uVar4 * 2));
    bVar2 = unaff_RDI[uVar4];
    iVar5 = uVar4 + 0x90000664;
    uVar1 = (undefined3)((uint)iVar5 >> 8);
    bVar3 = (byte)iVar5 | *(byte *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL));
    pcVar7 = (char *)(ulonglong)CONCAT31(uVar1,bVar3);
    pcVar6 = (char *)(CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)) + 0x3000030a);
    *pcVar6 = *pcVar6 + (char)(uVar10 >> 8);
    *param_4 = *param_4 + unaff_SPL;
    *pcVar7 = *pcVar7 + bVar3;
    pcVar7[-0x54fffcf6] = pcVar7[-0x54fffcf6] + (char)param_2;
    uVar4 = CONCAT31(uVar1,bVar3 | *(byte *)CONCAT62(unaff_0000001a,CONCAT11(unaff_BH,unaff_BL)));
    *(char *)(ulonglong)uVar4 = *(char *)(ulonglong)uVar4 + (bVar11 | bVar2);
  }
  else {
    uVar4 = uVar4 + *(int *)(ulonglong)uVar4;
    uVar10 = uVar10 & 0xff;
  }
  *param_4 = *param_4 + (char)uVar4;
  bVar2 = *unaff_RDI;
  *unaff_RDI = *unaff_RDI + (byte)uVar10;
  if (!CARRY1(bVar2,(byte)uVar10)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  uRam00000001b44efe50 = uRam00000001b44efe50 & uVar4;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

