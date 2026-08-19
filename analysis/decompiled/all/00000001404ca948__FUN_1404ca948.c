// Function: FUN_1404ca948
// Addr: 1404ca948
// Size: 1 bytes


/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Instruction at (ram,0x0001404ca962) overlaps instruction at (ram,0x0001404ca961)
    */

void FUN_1404ca948(longlong param_1,undefined8 param_2)

{
  char *pcVar1;
  int *piVar2;
  int iVar3;
  byte in_AL;
  byte bVar4;
  byte in_AH;
  byte bVar5;
  undefined6 in_register_00000002;
  char *pcVar6;
  byte bVar7;
  char cVar8;
  undefined6 uVar9;
  uint *unaff_RBX;
  uint unaff_ESP;
  uint unaff_ESI;
  undefined4 unaff_00000034;
  byte *unaff_RDI;
  
  uVar9 = (undefined6)((ulonglong)param_2 >> 0x10);
  cVar8 = (char)((ulonglong)param_2 >> 8);
  bVar7 = (byte)param_2;
  bVar4 = in_AL & bVar7;
  pcVar6 = (char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar4)) + 0x19000000);
  *pcVar6 = *pcVar6 + cVar8;
  *unaff_RDI = *unaff_RDI & bVar4;
  *(char *)CONCAT44(unaff_00000034,unaff_ESI) =
       *(char *)CONCAT44(unaff_00000034,unaff_ESI) + (char)param_1;
  piVar2 = (int *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar4)) + 7 +
                  CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar4)));
  iVar3 = *piVar2;
  *piVar2 = *piVar2 + unaff_ESI;
  pcVar6 = (char *)(param_1 + -1);
  if (pcVar6 == (char *)0x0 || *piVar2 == 0) {
    if (!SCARRY4(iVar3,unaff_ESI)) {
                    /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
    }
    *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar4)) =
         *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar4)) ^ bVar4;
    *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar4)) =
         *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar4)) + in_AH;
    *(byte *)CONCAT44(unaff_00000034,unaff_ESI) = *(byte *)CONCAT44(unaff_00000034,unaff_ESI) >> 1;
    pcVar1 = (char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar4)) + 3);
    *pcVar1 = *pcVar1 + cVar8;
  }
  else {
    cVar8 = cVar8 + *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar4));
    *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar4)) =
         *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar4)) + bVar4;
    bVar4 = bVar4 & bVar7;
    pcVar1 = (char *)(CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar4)) + 3);
    *pcVar1 = *pcVar1 + cVar8;
  }
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar4)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(in_AH,bVar4)) + bVar4;
  uRam000000013471a978 = uRam000000013471a978 & unaff_ESP;
  bVar4 = bVar4 - 0x2c;
  bVar5 = in_AH | bVar4;
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(bVar5,bVar4)) =
       *(byte *)CONCAT62(in_register_00000002,CONCAT11(bVar5,bVar4)) | 0x33;
  cRam00000000c04cdc8e = cRam00000000c04cdc8e + bVar7;
  *pcVar6 = *pcVar6 + bVar5;
  *(byte *)CONCAT62(in_register_00000002,CONCAT11(bVar5,bVar4)) =
       *(char *)CONCAT62(in_register_00000002,CONCAT11(bVar5,bVar4)) + bVar4;
  pcVar1 = (char *)(CONCAT62(in_register_00000002,CONCAT11(bVar5,bVar4)) + 0x15003308);
  *pcVar1 = *pcVar1 + bVar4;
  *unaff_RBX = *unaff_RBX | unaff_ESI;
  pcVar1 = (char *)(CONCAT62(in_register_00000002,CONCAT11(bVar5,bVar4)) + 0x1004ca8);
  *pcVar1 = *pcVar1 + bVar4;
  *(char *)CONCAT62(uVar9,CONCAT11(cVar8,bVar7)) =
       *(char *)CONCAT62(uVar9,CONCAT11(cVar8,bVar7)) + (char)pcVar6;
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

